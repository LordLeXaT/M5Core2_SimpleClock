#include <M5Core2.h>
#include "WiFi.h"
#include "time.h"
//custom images
#include "close_menu.c"
#include "sync_no.c"
#include "sync_yes.c"
#include "wifi_off.c"
#include "wifi_on.c"

/*
   Sets the WiFi Mod
   SMARTMODE = WiFi always using smartconfig
   FIXEDMODE = Wifi always using fixed WiFi credentials
*/
// WIFI MODE
#define SMARTMODE

extern const unsigned char image_DigNumber_0000_0[504];
extern const unsigned char image_DigNumber_0001_1[504];
extern const unsigned char image_DigNumber_0002_2[504];
extern const unsigned char image_DigNumber_0003_3[504];
extern const unsigned char image_DigNumber_0004_4[504];
extern const unsigned char image_DigNumber_0005_5[504];
extern const unsigned char image_DigNumber_0006_6[504];
extern const unsigned char image_DigNumber_0007_7[504];
extern const unsigned char image_DigNumber_0008_8[504];
extern const unsigned char image_DigNumber_0009_9[504];
extern const unsigned char image_DigNumber_0010_10[504];

extern const unsigned char image_DigNumber_35px_0000_0[315];
extern const unsigned char image_DigNumber_35px_0001_1[315];
extern const unsigned char image_DigNumber_35px_0002_2[315];
extern const unsigned char image_DigNumber_35px_0003_3[315];
extern const unsigned char image_DigNumber_35px_0004_4[315];
extern const unsigned char image_DigNumber_35px_0005_5[315];
extern const unsigned char image_DigNumber_35px_0006_6[315];
extern const unsigned char image_DigNumber_35px_0007_7[315];
extern const unsigned char image_DigNumber_35px_0008_8[315];
extern const unsigned char image_DigNumber_35px_0009_9[315];
extern const unsigned char image_DigNumber_35px_0010_10[315];

uint8_t *DigNumber[11] =
{
  (uint8_t*)image_DigNumber_0000_0,
  (uint8_t*)image_DigNumber_0001_1,
  (uint8_t*)image_DigNumber_0002_2,
  (uint8_t*)image_DigNumber_0003_3,
  (uint8_t*)image_DigNumber_0004_4,
  (uint8_t*)image_DigNumber_0005_5,
  (uint8_t*)image_DigNumber_0006_6,
  (uint8_t*)image_DigNumber_0007_7,
  (uint8_t*)image_DigNumber_0008_8,
  (uint8_t*)image_DigNumber_0009_9,
  (uint8_t*)image_DigNumber_0010_10,
};

uint8_t *DigNumber_35px[11] =
{
  (uint8_t*)image_DigNumber_35px_0000_0,
  (uint8_t*)image_DigNumber_35px_0001_1,
  (uint8_t*)image_DigNumber_35px_0002_2,
  (uint8_t*)image_DigNumber_35px_0003_3,
  (uint8_t*)image_DigNumber_35px_0004_4,
  (uint8_t*)image_DigNumber_35px_0005_5,
  (uint8_t*)image_DigNumber_35px_0006_6,
  (uint8_t*)image_DigNumber_35px_0007_7,
  (uint8_t*)image_DigNumber_35px_0008_8,
  (uint8_t*)image_DigNumber_35px_0009_9,
  (uint8_t*)image_DigNumber_35px_0010_10,
};

TFT_eSprite DisClockbuff = TFT_eSprite(&M5.Lcd);
TFT_eSprite menubuff = TFT_eSprite(&M5.Lcd);

bool showMenu = false;
bool isMenu = false;
bool isWIFI = false;
bool isSYNC = false;

const char* ntpServer = "de.pool.ntp.org";
const long  gmtOffset_sec = 3600;
const int   daylightOffset_sec = 3600;

HotZone_t* smenu;
HotZone_t* Menu[3];

// WiFi credentials (only needed if FIXEDMODE for WiFi
const char* ssid       = "YOUR SSID";
const char* password   = "YOUR WiFi password";

struct systemState
{
  HotZone_t*smenu;
  HotZone_t* Menu[3];
  RTC_TimeTypeDef Rtctime;
  uint16_t clockCount = 0;
  uint16_t timeCount = 0;
  bool     touchState = false;
} sytState;

void clockSetup()
{
  DisClockbuff.createSprite(164, 101);
}

void menuSetup() {
  M5.Lcd.fillRect(0, 110, 320, 130, BLACK);
  menubuff.deleteSprite();
  menubuff.createSprite(190, 50);
  menubuff.pushSprite(65, 150);
}

void clockFlush()
{
  uint16_t posx[6] = { 4, 28, 66, 90, 127, 144 };

  M5.Rtc.GetTime(&sytState.Rtctime);

  DisClockbuff.drawColorBitmap(posx[0], 26, 24, 42,
                               DigNumber[ sytState.Rtctime.Hours / 10 ],
                               0x00ff00,
                               0x000000);
  DisClockbuff.drawColorBitmap(posx[1], 26, 24, 42,
                               DigNumber[ sytState.Rtctime.Hours % 10 ],
                               0x00ff00,
                               0x000000);
  DisClockbuff.drawColorBitmap(posx[2], 26, 24, 42,
                               DigNumber[ sytState.Rtctime.Minutes / 10 ],
                               0x00ff00,
                               0x000000);
  DisClockbuff.drawColorBitmap(posx[3], 26, 24, 42,
                               DigNumber[ sytState.Rtctime.Minutes % 10 ],
                               0x00ff00,
                               0x000000);
  DisClockbuff.drawColorBitmap(posx[4], 33, 18, 35,
                               DigNumber_35px[ sytState.Rtctime.Seconds / 10 ],
                               0x00ff00,
                               0x000000);
  DisClockbuff.drawColorBitmap(posx[5], 33, 18, 35,
                               DigNumber_35px[ sytState.Rtctime.Seconds % 10 ],
                               0x00ff00,
                               0x000000);


  sytState.clockCount ++;
  sytState.clockCount %= 6;

  DisClockbuff.pushSprite(72, 4);
}

void checkTouch() {
  TouchPoint_t pos = M5.Touch.getPressPoint();
  bool touchStateNow = ( pos.x == -1 ) ? false : true;
  if ( touchStateNow )
  {
    if ( sytState.touchState == false )
      if (!showMenu) {
        sytState.smenu->inHotZoneDoFun(pos);
      } else {
        for ( int i = 0; i < 3; i++ )
        {
          sytState.Menu[i]->inHotZoneDoFun(pos);
        }
      }
  }
  sytState.touchState = touchStateNow;
}

void switchMenu() {
  if (!showMenu) {
    showMenu = true;
  }
}

void offMenu() {
  showMenu = false;
  M5.Lcd.fillRect(0, 110, 320, 130, BLACK);
  isMenu = false;
  isWIFI = false;
  isSYNC = false;
  menubuff.deleteSprite();
  menubuff.createSprite(190, 50);
  menubuff.pushSprite(65, 150);
}

#ifdef SMARTMODE
void doWiFi() {
reStart:
  int count = 0;
  WiFi.mode(WIFI_AP_STA);
  delay(2000);
  
  WiFi.beginSmartConfig();
  Serial.println("Smart Config in progress");
  while (!WiFi.smartConfigDone()) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connection in progress");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    count++;
    if (count > 20) {
      Serial.println("Connection failed, restarting process");
      WiFi.mode( WIFI_MODE_NULL );
      delay(2000);
      goto reStart;
    }
  }
  Serial.println("\r\nWiFi Connected.");
  isWIFI = true;
  menuSetup();
  drawMenu();
}
#endif
#ifdef FIXEDMODE
void doWiFi() {
reStart:
  int count = 0;
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi..");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    count++;
    if (count > 20) {
      WiFi.mode( WIFI_MODE_NULL );
      delay(2000);
      goto reStart;
    }
  }
  Serial.println("\r\nWiFi Connected.");
  isWIFI = true;
  menuSetup();
  drawMenu();
}
#endif

void doSync() {
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Get internet time");
    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
    struct tm timeinfo2;
    if (!getLocalTime(&timeinfo2)) {
      Serial.println("Failed to obtain time");
      return;
    }
    RTC_TimeTypeDef TimeStruct;
    TimeStruct.Hours   = timeinfo2.tm_hour;
    TimeStruct.Minutes = timeinfo2.tm_min;
    TimeStruct.Seconds = timeinfo2.tm_sec;
    M5.Rtc.SetTime(&TimeStruct);
    RTC_DateTypeDef DateStruct;
    DateStruct.WeekDay = timeinfo2.tm_wday;
    DateStruct.Month =   timeinfo2.tm_mon;
    DateStruct.Date =    timeinfo2.tm_mday;
    DateStruct.Year =    timeinfo2.tm_year + 1900;
    M5.Rtc.SetData(&DateStruct);
    M5.Lcd.setCursor(136, 166);
    isSYNC = true;
    menubuff.deleteSprite();
    menubuff.createSprite(190, 50);
    menubuff.pushSprite(65, 150);
    drawMenu();
    Serial.println("RTC now in sync with internet time");
    delay(2000);
    drawMenu();
  }
}

void drawMenu() {
  menubuff.fillScreen(BLACK);
  if (!isWIFI) {
    menubuff.pushImage(0, 0, 50, 50, wifi_off);
  } else {
    menubuff.pushImage(0, 0, 50, 50, wifi_on);
  }
  if (!isSYNC) {
    menubuff.pushImage(70, 0, 50, 50, sync_no);
  } else {
    menubuff.pushImage(70, 0, 50, 50, sync_yes);
  }
  menubuff.pushImage(130, 0, 50, 50, close_menu);
  menubuff.pushSprite(65, 150);
  isMenu = true;
}

void setup() {
  M5.begin(true, true, true, true);
  clockSetup();
  menuSetup();
  sytState.smenu = new HotZone(0, 110, 320, 240, &switchMenu);
  sytState.Menu[0] = new HotZone(65, 150, 115, 200, &doWiFi);
  sytState.Menu[1] = new HotZone(135, 150, 185, 200, &doSync);
  sytState.Menu[2] = new HotZone(205, 150, 255, 200, &offMenu);
}

void loop() {
  checkTouch();
  clockFlush();
  if (showMenu) {
    if (!isMenu) {
      drawMenu();
    }
  }
  delay(5);
}
