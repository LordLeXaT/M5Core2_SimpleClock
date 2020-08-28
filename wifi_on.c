#include <pgmspace.h>

const unsigned short wifi_on[0x9C4] PROGMEM ={
0x0802, 0x0801, 0x0000, 0x0020, 0x0000, 0x0000, 0x0801, 0x0800, 0x0000, 0x0040, 0x0060, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0010 (16)
0x0000, 0x0000, 0x0800, 0x0000, 0x0040, 0x0040, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0080, 0x0060, 0x0000, 0x0001,   // 0x0020 (32)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0020, 0x0040, 0x0000, 0x0000, 0x0020, 0x0020, 0x0020, 0x0080,   // 0x0030 (48)
0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0800, 0x0800, 0x0000, 0x0020, 0x0040, 0x0020, 0x0000, 0x0000,   // 0x0040 (64)
0x0000, 0x0060, 0x0020, 0x0040, 0x0040, 0x00A0, 0x0100, 0x00E0, 0x00E0, 0x01A0, 0x0200, 0x0220, 0x01E0, 0x0180, 0x0140, 0x0120,   // 0x0050 (80)
0x00E0, 0x0060, 0x0040, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0020, 0x0000,   // 0x0060 (96)
0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x0020, 0x0000, 0x0000, 0x0801, 0x0801, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0070 (112)
0x0000, 0x0020, 0x0020, 0x0040, 0x00A0, 0x0100, 0x0220, 0x0380, 0x0CE0, 0x2E42, 0x4705, 0x4745, 0x2F41, 0x2F61, 0x4723, 0x5767,   // 0x0080 (128)
0x5707, 0x3E04, 0x2501, 0x0BE0, 0x01C0, 0x0140, 0x00A0, 0x0060, 0x0020, 0x0000, 0x0801, 0x0801, 0x0000, 0x0000, 0x0020, 0x0000,   // 0x0090 (144)
0x0801, 0x0801, 0x0000, 0x0000, 0x0000, 0x0000, 0x0060, 0x0040, 0x0000, 0x0001, 0x0801, 0x0000, 0x0000, 0x0000, 0x0800, 0x0000,   // 0x00A0 (160)
0x0000, 0x0000, 0x0020, 0x0060, 0x0080, 0x0120, 0x0B00, 0x2D03, 0x46C5, 0x4745, 0x3F64, 0x47A5, 0x4F86, 0x3F43, 0x27C0, 0x37E1,   // 0x00B0 (176)
0x3762, 0x3EE3, 0x4F05, 0x5767, 0x4785, 0x36C3, 0x56C8, 0x3525, 0x02E0, 0x0160, 0x00C0, 0x0040, 0x0000, 0x1002, 0x0801, 0x0000,   // 0x00C0 (192)
0x0000, 0x0000, 0x0000, 0x0801, 0x0801, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x00D0 (208)
0x0000, 0x0801, 0x0821, 0x0060, 0x00A0, 0x0120, 0x0300, 0x2D22, 0x5707, 0x4F65, 0x3FA3, 0x3F83, 0x3EA4, 0x0C40, 0x01E0, 0x0180,   // 0x00E0 (224)
0x0480, 0x3EC4, 0x1CC1, 0x01A0, 0x0200, 0x2D22, 0x4FA5, 0x3762, 0x3F23, 0x5746, 0x5706, 0x35A3, 0x0340, 0x0120, 0x0080, 0x0020,   // 0x00F0 (240)
0x0801, 0x0802, 0x0021, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0100 (256)
0x0020, 0x0000, 0x0000, 0x0000, 0x0040, 0x00A0, 0x0240, 0x2CE2, 0x5687, 0x5F27, 0x3EA4, 0x0500, 0x1620, 0x4F85, 0x2D02, 0x0200,   // 0x0110 (272)
0x00A0, 0x00A0, 0x0BE0, 0x66E9, 0x3484, 0x00E0, 0x00C0, 0x1340, 0x3663, 0x4FE5, 0x0440, 0x04A0, 0x3623, 0x5F69, 0x4EA6, 0x1CC1,   // 0x0120 (288)
0x0260, 0x0080, 0x0020, 0x0000, 0x0000, 0x0801, 0x0000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0130 (304)
0x0020, 0x0020, 0x0000, 0x0020, 0x0020, 0x0080, 0x0120, 0x02C0, 0x2D63, 0x5F28, 0x4E46, 0x1C80, 0x01E0, 0x0320, 0x4E86, 0x66A9,   // 0x0140 (320)
0x0220, 0x0080, 0x0060, 0x00E0, 0x1420, 0x56C7, 0x2402, 0x00C0, 0x0080, 0x0100, 0x03E0, 0x5747, 0x2DC3, 0x02A0, 0x01A0, 0x13C1,   // 0x0150 (336)
0x4646, 0x678A, 0x4626, 0x0300, 0x0140, 0x0040, 0x0000, 0x0801, 0x0801, 0x0000, 0x0020, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0160 (352)
0x0000, 0x0020, 0x0020, 0x0020, 0x0000, 0x0020, 0x0080, 0x0100, 0x0B60, 0x5667, 0x6F4A, 0x3D64, 0x0280, 0x0120, 0x0160, 0x4566,   // 0x0170 (368)
0x6E8A, 0x1B61, 0x0080, 0x0020, 0x0000, 0x0060, 0x1C40, 0x5EE8, 0x2C02, 0x00E0, 0x0060, 0x0060, 0x0200, 0x45E7, 0x5EA9, 0x0300,   // 0x0180 (384)
0x00E0, 0x0100, 0x0240, 0x24E2, 0x5708, 0x5687, 0x0B20, 0x0140, 0x0040, 0x0000, 0x0801, 0x0801, 0x0000, 0x0040, 0x0000, 0x0000,   // 0x0190 (400)
0x0800, 0x0000, 0x0020, 0x0000, 0x0000, 0x0020, 0x0060, 0x0060, 0x00C0, 0x3424, 0x5E69, 0x6669, 0x2C23, 0x00C0, 0x0060, 0x0080,   // 0x01A0 (416)
0x0320, 0x66E9, 0x3CE5, 0x0160, 0x0040, 0x0000, 0x0001, 0x0060, 0x1C00, 0x66E9, 0x3404, 0x0080, 0x0000, 0x0000, 0x0080, 0x0AC0,   // 0x01B0 (432)
0x56C7, 0x4605, 0x0120, 0x0060, 0x00A0, 0x0100, 0x1400, 0x56C8, 0x56A8, 0x2C83, 0x00C0, 0x0040, 0x0000, 0x0001, 0x0000, 0x0020,   // 0x01C0 (448)
0x0000, 0x0000, 0x0801, 0x0800, 0x0000, 0x0000, 0x0000, 0x0020, 0x0060, 0x00C0, 0x1B81, 0x668A, 0x5E49, 0x1380, 0x0140, 0x0060,   // 0x01D0 (464)
0x0020, 0x0060, 0x3D24, 0x56A7, 0x1380, 0x00C0, 0x0020, 0x0001, 0x0001, 0x0080, 0x1C00, 0x5E88, 0x33E3, 0x00A0, 0x0020, 0x0000,   // 0x01E0 (480)
0x0020, 0x0140, 0x4665, 0x4EC6, 0x12C0, 0x0080, 0x0080, 0x0060, 0x01A0, 0x0360, 0x56E8, 0x5F08, 0x1BE2, 0x00C0, 0x0060, 0x0000,   // 0x01F0 (496)
0x08A2, 0x0000, 0x0000, 0x0000, 0x1001, 0x1002, 0x0801, 0x0000, 0x0020, 0x0040, 0x00C0, 0x02E0, 0x5EA8, 0x4E67, 0x13E0, 0x0120,   // 0x0200 (512)
0x00A0, 0x0060, 0x0040, 0x0A00, 0x6F29, 0x35C3, 0x01E0, 0x00A0, 0x0040, 0x0000, 0x0020, 0x0080, 0x1400, 0x5E87, 0x2C02, 0x00C0,   // 0x0210 (528)
0x0060, 0x0060, 0x0020, 0x00A0, 0x03E0, 0x5747, 0x3D25, 0x0100, 0x0020, 0x0000, 0x0060, 0x00E0, 0x03C0, 0x56E7, 0x4E67, 0x0B20,   // 0x0220 (544)
0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x0801, 0x0801, 0x0801, 0x0000, 0x0080, 0x0280, 0x3DC4, 0x5746, 0x0480,   // 0x0230 (560)
0x01E0, 0x0120, 0x0100, 0x00E0, 0x00E0, 0x2C63, 0x4F26, 0x04C0, 0x0160, 0x00C0, 0x00A0, 0x0060, 0x00A0, 0x0100, 0x0C60, 0x4F05,   // 0x0240 (576)
0x24A0, 0x0120, 0x00E0, 0x00E0, 0x00A0, 0x0100, 0x01E0, 0x3EE5, 0x4EE7, 0x0280, 0x00C0, 0x0080, 0x0080, 0x00E0, 0x01A0, 0x04C0,   // 0x0250 (592)
0x46E5, 0x4E46, 0x0220, 0x0060, 0x0000, 0x0821, 0x0000, 0x0000, 0x0020, 0x0020, 0x0821, 0x0020, 0x0040, 0x0120, 0x1C80, 0x5746,   // 0x0260 (608)
0x2EC1, 0x0500, 0x03C0, 0x0380, 0x0B80, 0x0BA0, 0x03A0, 0x3EE4, 0x2F00, 0x0580, 0x03C0, 0x0380, 0x0B20, 0x0300, 0x0B80, 0x03A0,   // 0x0270 (624)
0x0E00, 0x37A1, 0x1E20, 0x0420, 0x03A0, 0x0380, 0x0380, 0x03C0, 0x03A0, 0x2EA2, 0x37A2, 0x05E0, 0x0440, 0x0380, 0x0300, 0x0BC0,   // 0x0280 (640)
0x0400, 0x0480, 0x26E1, 0x4745, 0x2D63, 0x01A0, 0x0040, 0x0000, 0x0000, 0x0000, 0x0040, 0x0020, 0x0020, 0x0020, 0x00A0, 0x0B20,   // 0x0290 (656)
0x4E86, 0x57A6, 0x3F23, 0x4704, 0x5EE8, 0x5668, 0x5668, 0x56E7, 0x3703, 0x3F83, 0x47C3, 0x3F23, 0x56C6, 0x66C9, 0x5E69, 0x5E69,   // 0x02A0 (672)
0x66EA, 0x4F06, 0x2F81, 0x37E2, 0x3F23, 0x4F05, 0x56E7, 0x4EA7, 0x56E7, 0x4EC7, 0x56E7, 0x4745, 0x37E1, 0x2FC0, 0x3F23, 0x4EE6,   // 0x02B0 (688)
0x56A7, 0x5EC8, 0x5707, 0x3EE4, 0x3F44, 0x47A5, 0x4746, 0x03C0, 0x0080, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0020, 0x0080,   // 0x02C0 (704)
0x01C0, 0x4585, 0x5F88, 0x25E0, 0x35C3, 0x3D64, 0x5567, 0x4D47, 0x3D65, 0x2DE3, 0x4784, 0x3723, 0x3624, 0x3544, 0x4566, 0x5588,   // 0x02D0 (720)
0x4D47, 0x4D67, 0x4DA6, 0x3DC4, 0x2EC2, 0x4784, 0x3E44, 0x3D64, 0x4566, 0x4D66, 0x4586, 0x3D85, 0x3DE5, 0x2DC2, 0x36E3, 0x4765,   // 0x02E0 (736)
0x3623, 0x3583, 0x45C6, 0x3D45, 0x4527, 0x55C8, 0x3563, 0x3603, 0x4745, 0x3E24, 0x0140, 0x0060, 0x0000, 0x0000, 0x0802, 0x0001,   // 0x02F0 (752)
0x0040, 0x00C0, 0x0340, 0x56E7, 0x4645, 0x01E0, 0x0180, 0x00E0, 0x00C0, 0x00E0, 0x0120, 0x01E0, 0x2EA2, 0x4F86, 0x0260, 0x00E0,   // 0x0300 (768)
0x00C0, 0x00E0, 0x00E0, 0x00E0, 0x00E0, 0x0140, 0x0CE0, 0x4705, 0x1440, 0x0120, 0x00E0, 0x0100, 0x00E0, 0x0120, 0x0140, 0x01A0,   // 0x0310 (784)
0x14E0, 0x4EE6, 0x0400, 0x0160, 0x0120, 0x0100, 0x00C0, 0x00C0, 0x0100, 0x01C0, 0x2E02, 0x56E7, 0x1340, 0x00A0, 0x0040, 0x0000,   // 0x0320 (800)
0x0802, 0x1043, 0x0040, 0x00E0, 0x35E4, 0x5F68, 0x0320, 0x0100, 0x0080, 0x0060, 0x0040, 0x0060, 0x0080, 0x0240, 0x4F26, 0x3E85,   // 0x0330 (816)
0x00C0, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x00C0, 0x0C40, 0x56E7, 0x2422, 0x00E0, 0x0060, 0x0040, 0x0060, 0x0080,   // 0x0340 (832)
0x0080, 0x00E0, 0x02E0, 0x56A8, 0x3545, 0x0120, 0x0080, 0x0040, 0x0060, 0x0060, 0x00A0, 0x0100, 0x02E0, 0x6F29, 0x45E5, 0x0140,   // 0x0350 (848)
0x0060, 0x0000, 0x0802, 0x0000, 0x0080, 0x0220, 0x3E84, 0x46C6, 0x01E0, 0x0040, 0x0020, 0x0000, 0x0000, 0x0020, 0x0040, 0x0A80,   // 0x0360 (864)
0x4F06, 0x2DA2, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0080, 0x1440, 0x56E7, 0x2402, 0x00A0, 0x0020, 0x0000,   // 0x0370 (880)
0x0000, 0x0000, 0x0000, 0x0060, 0x0240, 0x5E89, 0x4DC7, 0x0140, 0x0040, 0x0000, 0x0000, 0x0020, 0x0020, 0x0060, 0x01C0, 0x4DE7,   // 0x0380 (896)
0x3E64, 0x02C0, 0x0080, 0x0000, 0x0000, 0x0040, 0x00E0, 0x13A0, 0x4EE7, 0x2D63, 0x0100, 0x0020, 0x0000, 0x0000, 0x0821, 0x0020,   // 0x0390 (912)
0x0080, 0x2BC3, 0x4F27, 0x0C80, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00A0, 0x1460, 0x5708, 0x2C23, 0x00C0,   // 0x03A0 (928)
0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0060, 0x01A0, 0x5E49, 0x5E88, 0x0200, 0x0060, 0x0000, 0x0020, 0x0000, 0x0000, 0x0040,   // 0x03B0 (944)
0x0100, 0x3484, 0x4EE6, 0x1460, 0x0080, 0x0000, 0x0060, 0x0060, 0x0100, 0x3505, 0x5F08, 0x0BE0, 0x00C0, 0x0040, 0x0000, 0x0000,   // 0x03C0 (960)
0x0000, 0x0020, 0x0080, 0x3C86, 0x4EE7, 0x0340, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x00A0, 0x0C00, 0x4EA7,   // 0x03D0 (976)
0x23E2, 0x00A0, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0040, 0x00E0, 0x3D46, 0x56A7, 0x0280, 0x0080, 0x0020, 0x0000, 0x0000,   // 0x03E0 (992)
0x0000, 0x0040, 0x0080, 0x0AE0, 0x4EC6, 0x35A3, 0x0080, 0x0000, 0x0060, 0x0060, 0x0120, 0x55E8, 0x5EC9, 0x0240, 0x0080, 0x0020,   // 0x03F0 (1008)
0x0000, 0x0000, 0x0000, 0x0040, 0x00C0, 0x5568, 0x5EC8, 0x0280, 0x0080, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x00A0,   // 0x0400 (1024)
0x0C20, 0x56C8, 0x2C03, 0x00C0, 0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0040, 0x00C0, 0x34A4, 0x56E6, 0x0360, 0x00E0, 0x0040,   // 0x0410 (1040)
0x0020, 0x0020, 0x0000, 0x0820, 0x0040, 0x01E0, 0x4EE6, 0x4EC7, 0x00E0, 0x0000, 0x0020, 0x0080, 0x0180, 0x668A, 0x5E48, 0x0140,   // 0x0420 (1056)
0x0080, 0x0020, 0x0040, 0x0020, 0x0020, 0x0040, 0x0100, 0x5E09, 0x5EA8, 0x0220, 0x00A0, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020,   // 0x0430 (1072)
0x0040, 0x00A0, 0x1440, 0x5EE9, 0x2C24, 0x00E0, 0x0060, 0x0020, 0x0020, 0x0020, 0x0000, 0x0060, 0x00C0, 0x2C43, 0x56E7, 0x0420,   // 0x0440 (1088)
0x0120, 0x0060, 0x0040, 0x0020, 0x0000, 0x0000, 0x0020, 0x0120, 0x4685, 0x5F28, 0x0180, 0x0020, 0x0040, 0x00A0, 0x0260, 0x66C9,   // 0x0450 (1104)
0x4DC7, 0x0160, 0x00C0, 0x0040, 0x0080, 0x0040, 0x0040, 0x0080, 0x0120, 0x5628, 0x5647, 0x01C0, 0x00C0, 0x0060, 0x0060, 0x0060,   // 0x0460 (1120)
0x0060, 0x0060, 0x0040, 0x00A0, 0x0C00, 0x56A8, 0x2C03, 0x00C0, 0x0060, 0x0040, 0x0060, 0x0040, 0x0060, 0x0080, 0x00E0, 0x1BC1,   // 0x0470 (1136)
0x4E66, 0x0C40, 0x00E0, 0x0080, 0x0080, 0x0060, 0x0040, 0x0040, 0x0040, 0x00C0, 0x35C3, 0x4EA7, 0x0240, 0x0060, 0x0020, 0x00A0,   // 0x0480 (1152)
0x0300, 0x5707, 0x3DE4, 0x0240, 0x01E0, 0x01C0, 0x0200, 0x01A0, 0x01C0, 0x0240, 0x0280, 0x5767, 0x5707, 0x02A0, 0x0240, 0x0220,   // 0x0490 (1168)
0x0200, 0x0200, 0x0200, 0x0200, 0x01E0, 0x0240, 0x0500, 0x4FA6, 0x2522, 0x0200, 0x01E0, 0x01E0, 0x0200, 0x0200, 0x0240, 0x0200,   // 0x04A0 (1184)
0x0220, 0x1460, 0x4726, 0x1560, 0x0220, 0x0200, 0x0240, 0x0220, 0x0220, 0x0200, 0x0220, 0x0220, 0x2641, 0x46E5, 0x0AE0, 0x00A0,   // 0x04B0 (1200)
0x0020, 0x0080, 0x03A0, 0x36C2, 0x3F63, 0x3F43, 0x4F65, 0x4724, 0x3F83, 0x3742, 0x3EE3, 0x4785, 0x2FC1, 0x2FE0, 0x37A2, 0x3F84,   // 0x04C0 (1216)
0x3F44, 0x3F24, 0x4725, 0x4705, 0x4705, 0x4705, 0x4705, 0x3763, 0x17E0, 0x17E0, 0x27C0, 0x3FA4, 0x4F66, 0x46E5, 0x3EE4, 0x4F86,   // 0x04D0 (1232)
0x3724, 0x47A5, 0x4784, 0x3782, 0x1FC0, 0x2FE1, 0x4F66, 0x46C5, 0x4764, 0x3743, 0x3724, 0x4725, 0x4EC5, 0x4764, 0x1FE0, 0x2780,   // 0x04E0 (1248)
0x0B60, 0x0080, 0x0000, 0x0080, 0x0360, 0x4F86, 0x4FE6, 0x2EC1, 0x4725, 0x4704, 0x3F43, 0x3F63, 0x4F25, 0x4765, 0x1F40, 0x37E2,   // 0x04F0 (1264)
0x47E5, 0x2EE2, 0x4745, 0x4725, 0x4F26, 0x4F06, 0x4F06, 0x4F06, 0x4F06, 0x3F64, 0x17E0, 0x27E0, 0x2FE1, 0x2EE2, 0x46E5, 0x4EE6,   // 0x0500 (1280)
0x4F26, 0x5787, 0x3F24, 0x3F43, 0x36E2, 0x3762, 0x37E2, 0x37E2, 0x4705, 0x5707, 0x4724, 0x3F43, 0x4765, 0x4F66, 0x4EE6, 0x36C3,   // 0x0510 (1296)
0x27E0, 0x37E2, 0x0B40, 0x0080, 0x0821, 0x0060, 0x0260, 0x56A7, 0x3563, 0x0180, 0x0140, 0x00C0, 0x00E0, 0x00E0, 0x00A0, 0x00E0,   // 0x0520 (1312)
0x0220, 0x4625, 0x4E66, 0x01E0, 0x0100, 0x00A0, 0x00A0, 0x00A0, 0x00A0, 0x00A0, 0x00C0, 0x0120, 0x0500, 0x2E82, 0x1460, 0x0180,   // 0x0530 (1328)
0x00E0, 0x00C0, 0x00A0, 0x00C0, 0x0100, 0x0100, 0x0140, 0x0BC0, 0x3663, 0x0CA0, 0x0140, 0x00C0, 0x00E0, 0x0100, 0x00E0, 0x00E0,   // 0x0540 (1344)
0x00E0, 0x0160, 0x15C0, 0x3EC4, 0x12C0, 0x0060, 0x0000, 0x0060, 0x01E0, 0x6EEB, 0x55E8, 0x0100, 0x0080, 0x0000, 0x0020, 0x0840,   // 0x0550 (1360)
0x0841, 0x0020, 0x0100, 0x6E2B, 0x76EC, 0x0120, 0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x00A0, 0x1C81, 0x5EC9,   // 0x0560 (1376)
0x3445, 0x00A0, 0x0020, 0x0821, 0x0000, 0x0000, 0x0060, 0x0060, 0x0080, 0x2383, 0x6F0A, 0x2CA2, 0x0080, 0x0020, 0x0040, 0x0040,   // 0x0570 (1392)
0x0040, 0x0020, 0x0020, 0x00A0, 0x3E04, 0x5F28, 0x0220, 0x0040, 0x0020, 0x0080, 0x01A0, 0x66C9, 0x5E88, 0x0160, 0x0060, 0x0000,   // 0x0580 (1408)
0x0000, 0x0001, 0x0801, 0x0040, 0x00C0, 0x4D27, 0x66CA, 0x01E0, 0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x00A0,   // 0x0590 (1424)
0x0C40, 0x56E7, 0x2C23, 0x00A0, 0x0020, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x0080, 0x23A3, 0x5687, 0x03C0, 0x0080, 0x0041,   // 0x05A0 (1440)
0x0000, 0x0000, 0x0821, 0x0000, 0x0020, 0x00E0, 0x46A5, 0x5727, 0x0180, 0x0020, 0x0020, 0x0080, 0x0140, 0x45C6, 0x5EE8, 0x02A0,   // 0x05B0 (1456)
0x0080, 0x0020, 0x0822, 0x0001, 0x0001, 0x0040, 0x00C0, 0x4506, 0x5EE9, 0x02C0, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x05C0 (1472)
0x0020, 0x00A0, 0x0C60, 0x5707, 0x2442, 0x00C0, 0x0040, 0x0000, 0x0000, 0x0020, 0x0000, 0x0020, 0x00C0, 0x44C7, 0x5EE9, 0x0340,   // 0x05D0 (1488)
0x0080, 0x0000, 0x0001, 0x0801, 0x0801, 0x0000, 0x0040, 0x0200, 0x4F26, 0x46C5, 0x00E0, 0x0000, 0x0001, 0x0040, 0x00E0, 0x2482,   // 0x05E0 (1504)
0x56E8, 0x0C00, 0x00A0, 0x0020, 0x0000, 0x0021, 0x0021, 0x0040, 0x00C0, 0x3484, 0x56E7, 0x03A0, 0x0080, 0x0000, 0x0000, 0x0000,   // 0x05F0 (1520)
0x0000, 0x0000, 0x0000, 0x0080, 0x1460, 0x5707, 0x2C43, 0x00E0, 0x0040, 0x0000, 0x0000, 0x0020, 0x0060, 0x0080, 0x00C0, 0x5548,   // 0x0600 (1536)
0x5E89, 0x0260, 0x0080, 0x0000, 0x0000, 0x0000, 0x0020, 0x0040, 0x0080, 0x1360, 0x4705, 0x1D60, 0x00A0, 0x0000, 0x0002, 0x0020,   // 0x0610 (1552)
0x00A0, 0x13A0, 0x5708, 0x2502, 0x00E0, 0x0040, 0x0000, 0x0000, 0x0000, 0x0040, 0x00A0, 0x2403, 0x46C5, 0x0C80, 0x0080, 0x0000,   // 0x0620 (1568)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0080, 0x1420, 0x56E7, 0x2422, 0x00C0, 0x0020, 0x0000, 0x0000, 0x0000, 0x0020, 0x0060,   // 0x0630 (1584)
0x0120, 0x664A, 0x666A, 0x0160, 0x0040, 0x0000, 0x0000, 0x0000, 0x0020, 0x0060, 0x00E0, 0x3483, 0x4EE6, 0x1480, 0x0080, 0x0000,   // 0x0640 (1600)
0x0802, 0x0000, 0x0080, 0x01A0, 0x56A8, 0x5EE9, 0x01E0, 0x0080, 0x0000, 0x0801, 0x0801, 0x0000, 0x0040, 0x0AA0, 0x4F26, 0x1D60,   // 0x0650 (1616)
0x0080, 0x0000, 0x0040, 0x0020, 0x0020, 0x0000, 0x0000, 0x0080, 0x1400, 0x4E86, 0x2C22, 0x00E0, 0x0020, 0x0800, 0x0000, 0x0000,   // 0x0660 (1632)
0x0821, 0x0060, 0x0220, 0x5E89, 0x4D47, 0x0100, 0x0060, 0x0000, 0x1022, 0x0000, 0x0020, 0x0060, 0x0180, 0x5E48, 0x5E89, 0x0220,   // 0x0670 (1648)
0x0060, 0x0000, 0x0001, 0x0000, 0x0060, 0x0100, 0x2D23, 0x5EE8, 0x03A0, 0x0100, 0x0060, 0x0040, 0x0020, 0x0080, 0x0080, 0x01C0,   // 0x0680 (1664)
0x3F24, 0x4F66, 0x0140, 0x0040, 0x0080, 0x0080, 0x0060, 0x0060, 0x0060, 0x00C0, 0x1460, 0x5707, 0x2482, 0x0100, 0x0080, 0x0040,   // 0x0690 (1680)
0x0040, 0x0060, 0x0040, 0x00E0, 0x03E0, 0x5F49, 0x2CC3, 0x0100, 0x00A0, 0x0060, 0x0020, 0x0020, 0x0060, 0x00C0, 0x1400, 0x5EA8,   // 0x06A0 (1696)
0x4526, 0x00C0, 0x0040, 0x0000, 0x0000, 0x0020, 0x0060, 0x00C0, 0x0320, 0x4EC7, 0x4645, 0x02E0, 0x0160, 0x0120, 0x0100, 0x0140,   // 0x06B0 (1712)
0x0140, 0x0240, 0x1EA0, 0x3743, 0x0280, 0x0140, 0x0180, 0x0140, 0x0120, 0x0120, 0x0120, 0x0180, 0x0500, 0x2EA1, 0x0CA0, 0x01E0,   // 0x06C0 (1728)
0x0140, 0x0120, 0x0120, 0x0140, 0x0140, 0x0220, 0x04E0, 0x2EA2, 0x0460, 0x01A0, 0x0160, 0x0120, 0x00E0, 0x0120, 0x0120, 0x0240,   // 0x06D0 (1744)
0x2E22, 0x5F28, 0x1321, 0x0080, 0x0020, 0x0000, 0x0020, 0x0020, 0x0040, 0x0080, 0x0180, 0x35A3, 0x67C9, 0x2E01, 0x5686, 0x66A9,   // 0x06E0 (1760)
0x66A9, 0x6669, 0x5668, 0x4EC6, 0x47C5, 0x2F22, 0x4F06, 0x4E46, 0x6EEA, 0x6689, 0x5628, 0x66AA, 0x5EA9, 0x4EC6, 0x3762, 0x3FC3,   // 0x06F0 (1776)
0x4725, 0x56E8, 0x5E88, 0x5648, 0x5EC9, 0x56A7, 0x56E7, 0x3643, 0x3F63, 0x4FE5, 0x4745, 0x4EE6, 0x56A8, 0x6689, 0x6E8B, 0x76EB,   // 0x0700 (1792)
0x4666, 0x4F26, 0x4FA6, 0x35C3, 0x0120, 0x0040, 0x0000, 0x0000, 0x0020, 0x0000, 0x0001, 0x0020, 0x00C0, 0x0340, 0x3EA4, 0x4FA5,   // 0x0710 (1808)
0x4F45, 0x4EA5, 0x5E89, 0x666A, 0x668A, 0x56C8, 0x36A3, 0x4FE5, 0x4FA5, 0x46C4, 0x5EA8, 0x5E69, 0x5E48, 0x66C9, 0x5EE8, 0x4F26,   // 0x0720 (1824)
0x2740, 0x37A2, 0x3F04, 0x4EE6, 0x4EA7, 0x4E86, 0x56E8, 0x56C7, 0x56E7, 0x46E4, 0x3FA3, 0x2F61, 0x36E2, 0x46C5, 0x5667, 0x66A9,   // 0x0730 (1840)
0x5EA9, 0x3E44, 0x4F65, 0x4FA5, 0x46E5, 0x0320, 0x0080, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0000, 0x0060, 0x0160,   // 0x0740 (1856)
0x0C80, 0x57A6, 0x2E82, 0x0420, 0x0260, 0x0220, 0x0240, 0x0260, 0x02E0, 0x46C5, 0x2680, 0x04A0, 0x0260, 0x0220, 0x0240, 0x0220,   // 0x0750 (1872)
0x0220, 0x02C0, 0x0DA0, 0x3F43, 0x1D40, 0x02C0, 0x0260, 0x0260, 0x0240, 0x0260, 0x02A0, 0x25E1, 0x4724, 0x0500, 0x0340, 0x02C0,   // 0x0760 (1888)
0x0220, 0x0220, 0x0280, 0x0380, 0x2681, 0x4745, 0x1CE1, 0x01E0, 0x0040, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0801, 0x0001,   // 0x0770 (1904)
0x0000, 0x0080, 0x0260, 0x35A4, 0x46A5, 0x14E0, 0x01E0, 0x00E0, 0x00A0, 0x00A0, 0x00C0, 0x1BE1, 0x4F25, 0x1540, 0x0140, 0x0080,   // 0x0780 (1920)
0x0080, 0x0040, 0x0080, 0x00E0, 0x1420, 0x5EA9, 0x2C24, 0x00E0, 0x00A0, 0x0080, 0x0040, 0x00E0, 0x0200, 0x4EC6, 0x5667, 0x0260,   // 0x0790 (1936)
0x00C0, 0x00A0, 0x00A0, 0x00C0, 0x0180, 0x0CC0, 0x4F26, 0x4645, 0x0220, 0x0080, 0x0020, 0x0820, 0x0000, 0x0000, 0x0001, 0x0000,   // 0x07A0 (1952)
0x0801, 0x0001, 0x0802, 0x0000, 0x00A0, 0x0260, 0x5667, 0x6709, 0x13C0, 0x0120, 0x00A0, 0x00A0, 0x0040, 0x0180, 0x5F28, 0x3E23,   // 0x07B0 (1968)
0x01C0, 0x0060, 0x0020, 0x0800, 0x0040, 0x00A0, 0x13C0, 0x5628, 0x33E4, 0x00A0, 0x0020, 0x0000, 0x0000, 0x0060, 0x03A0, 0x5EE8,   // 0x07C0 (1984)
0x3C45, 0x0080, 0x0040, 0x0040, 0x0080, 0x00E0, 0x1C40, 0x4E87, 0x56A8, 0x02C0, 0x00A0, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000,   // 0x07D0 (2000)
0x0001, 0x0000, 0x0020, 0x0000, 0x0802, 0x0801, 0x0020, 0x00A0, 0x02C0, 0x5627, 0x772B, 0x2441, 0x0140, 0x00A0, 0x0040, 0x0080,   // 0x07E0 (2016)
0x3D64, 0x56C6, 0x2401, 0x00C0, 0x0020, 0x0000, 0x0020, 0x00E0, 0x1460, 0x4EC6, 0x2C63, 0x00C0, 0x0040, 0x0021, 0x0020, 0x0140,   // 0x07F0 (2032)
0x5647, 0x5647, 0x1A02, 0x0000, 0x0080, 0x0080, 0x0160, 0x1400, 0x674A, 0x4E27, 0x1360, 0x00C0, 0x0020, 0x0800, 0x0000, 0x0000,   // 0x0800 (2048)
0x0000, 0x0000, 0x0001, 0x0000, 0x0020, 0x0020, 0x0801, 0x1002, 0x0800, 0x0040, 0x00C0, 0x1BA0, 0x5E48, 0x5EA8, 0x2481, 0x01E0,   // 0x0810 (2064)
0x0080, 0x0080, 0x0300, 0x5EC7, 0x4DE6, 0x01A0, 0x0060, 0x0040, 0x0020, 0x0080, 0x03E0, 0x5767, 0x2C83, 0x00C0, 0x0020, 0x0020,   // 0x0820 (2080)
0x00A0, 0x1320, 0x5EA8, 0x3D24, 0x0960, 0x0040, 0x0080, 0x01A0, 0x1CA1, 0x5F08, 0x4625, 0x0BA0, 0x0120, 0x0040, 0x0801, 0x1002,   // 0x0830 (2096)
0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0020, 0x0020, 0x0001, 0x0801, 0x0801, 0x0000, 0x0040, 0x00E0, 0x0B00, 0x4DE6,   // 0x0840 (2112)
0x5F48, 0x35C4, 0x0300, 0x0160, 0x0160, 0x3563, 0x6749, 0x1C80, 0x0120, 0x0040, 0x0821, 0x0060, 0x0C00, 0x5727, 0x2C43, 0x00C0,   // 0x0850 (2128)
0x0040, 0x0060, 0x0240, 0x4606, 0x5E88, 0x0300, 0x0100, 0x0120, 0x0320, 0x35A3, 0x5F48, 0x4646, 0x0360, 0x0140, 0x0080, 0x0020,   // 0x0860 (2144)
0x0801, 0x0801, 0x0000, 0x0020, 0x0000, 0x0000, 0x0001, 0x0001, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0841, 0x0040,   // 0x0870 (2160)
0x00A0, 0x0280, 0x35A3, 0x6789, 0x5687, 0x1CC1, 0x0220, 0x0360, 0x2EA2, 0x46E5, 0x02A0, 0x00A0, 0x0000, 0x00A0, 0x1C40, 0x56C7,   // 0x0880 (2176)
0x2422, 0x0100, 0x0060, 0x0100, 0x14A0, 0x4F66, 0x1480, 0x0240, 0x0260, 0x1CC1, 0x4685, 0x5F48, 0x45C5, 0x0280, 0x0100, 0x00A0,   // 0x0890 (2192)
0x0080, 0x0060, 0x0801, 0x0801, 0x0020, 0x0040, 0x0000, 0x0000, 0x0801, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x08A0 (2208)
0x0001, 0x0801, 0x0020, 0x0080, 0x0200, 0x1480, 0x4646, 0x5707, 0x4F26, 0x0DA0, 0x16E0, 0x3FE3, 0x2581, 0x0220, 0x0080, 0x00A0,   // 0x08B0 (2224)
0x1440, 0x56C8, 0x2442, 0x0100, 0x00E0, 0x0B60, 0x3F03, 0x3F83, 0x0400, 0x14C0, 0x4EA6, 0x6769, 0x4625, 0x1C01, 0x01A0, 0x0040,   // 0x08C0 (2240)
0x0020, 0x0040, 0x0040, 0x0020, 0x0000, 0x0821, 0x0040, 0x0020, 0x0000, 0x0000, 0x0001, 0x0001, 0x0000, 0x0000, 0x0020, 0x0020,   // 0x08D0 (2256)
0x0020, 0x0000, 0x0000, 0x0801, 0x0801, 0x0040, 0x00A0, 0x0100, 0x02C0, 0x24C1, 0x4EC7, 0x4705, 0x2F61, 0x3FE3, 0x4765, 0x1D01,   // 0x08E0 (2272)
0x0280, 0x0220, 0x0480, 0x3EE4, 0x14C0, 0x0260, 0x0340, 0x35C3, 0x4784, 0x3F63, 0x4EE6, 0x5EC8, 0x4E67, 0x24C2, 0x02E0, 0x0100,   // 0x08F0 (2288)
0x0020, 0x0000, 0x0000, 0x0000, 0x0020, 0x0020, 0x0840, 0x0820, 0x0000, 0x0020, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0020,   // 0x0900 (2304)
0x0000, 0x0000, 0x0020, 0x0020, 0x0080, 0x0000, 0x0000, 0x0820, 0x0020, 0x0020, 0x0040, 0x00E0, 0x0220, 0x2CA3, 0x3E05, 0x3EC5,   // 0x0910 (2320)
0x4F86, 0x4724, 0x3EA4, 0x4F86, 0x27A0, 0x3FE2, 0x3781, 0x26C0, 0x4724, 0x5786, 0x4F45, 0x4EE5, 0x4E47, 0x2C83, 0x0A60, 0x00A0,   // 0x0920 (2336)
0x0080, 0x0060, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0040, 0x0821, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0930 (2352)
0x0020, 0x0020, 0x0000, 0x0000, 0x0020, 0x0020, 0x0020, 0x0040, 0x0020, 0x0000, 0x0801, 0x0802, 0x0801, 0x0000, 0x00A0, 0x00A0,   // 0x0940 (2368)
0x0100, 0x0260, 0x0C40, 0x2561, 0x3604, 0x46C5, 0x3F64, 0x2F01, 0x4744, 0x4F25, 0x3602, 0x2501, 0x0BE0, 0x0280, 0x0120, 0x00E0,   // 0x0950 (2384)
0x0060, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0020, 0x0000, 0x0000, 0x0821, 0x0000, 0x0000, 0x0000, 0x0821, 0x0000, 0x0000,   // 0x0960 (2400)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0970 (2416)
0x0020, 0x0040, 0x0060, 0x0060, 0x0080, 0x00A0, 0x00A0, 0x00A0, 0x00C0, 0x0140, 0x00C0, 0x00A0, 0x00A0, 0x0080, 0x0080, 0x0060,   // 0x0980 (2432)
0x0060, 0x0040, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0990 (2448)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x09A0 (2464)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0841, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x09B0 (2480)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x09C0 (2496)
0x0000, 0x0000, 0x0000, 0x0000, };