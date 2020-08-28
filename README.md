# M5Stack M5Core2 Simple Clock

This is a very simple clock for the M5Core2

## Usage 

*1. Change parameters of ntpServer/gmtOffset_sec/daylightOffset_sec to your needs  

*1. Change the WiFi mode as you wish, SMARTMODE = esp smartconfig, FIXEDMODE = static WiFi credentials  

*3. Compile and push to the M5Core2  

*4. M5Core2 will now show time based on the RTC time  

*5. Touch the lower half of the M5Core2-LCD to bring up the menu icons  

## Menuicons 

*1. WIFI Smart connect (touch on it [you see the clock stop], then press confirm on the ESP SmartConfig app on your phone, the icon will turn green if WIFI is done  

*2. Time Sync (If WiFi icon is green, touch the TimeSync icon once), the icon will turn green if sync is done  

*3. Close Menu (will hide the menu icons and disable the touch areas for the 3 icons)  

## known problems 

sometimes the WiFi is not working as expected, I tried to fix this by  
restarting the complete WiFi but I'm not sure if this helps  
I think this is some ESP32 issue, that sometimes cannot connect to WiFi  
  
As I began with ESP chips I resetted the whole chip by using ESP.restart();  
So this is my first attempt to fix it otherwise  
