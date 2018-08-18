/*
 * Copyright (c) 2015 Tim Theede <pez2001@voyagerproject.de>
 *               2015 Terry Cain <terrys-home.co.uk>
 */

/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 */

#ifndef __HID_RAZER_KEYBOARD_BLACKWIDOW_CHROMA_H
#define __HID_RAZER_KEYBOARD_BLACKWIDOW_CHROMA_H

#ifndef USB_VENDOR_ID_RAZER
#define USB_VENDOR_ID_RAZER 0x1532
#endif


#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2012
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2012 0x010D
#endif

// 2011 or so edition, see https://web.archive.org/web/20111113132427/http://store.razerzone.com:80/store/razerusa/en_US/pd/productID.235228400/categoryId.49136200/parentCategoryId.35156900
#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_STEALTH_EDITION
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_STEALTH_EDITION 0x010E
#endif

#ifndef USB_DEVICE_ID_RAZER_ANANSI
#define USB_DEVICE_ID_RAZER_ANANSI 0x010F
#endif

#ifndef USB_DEVICE_ID_RAZER_NOSTROMO
#define USB_DEVICE_ID_RAZER_NOSTROMO 0x0111
#endif

#ifndef USB_DEVICE_ID_RAZER_ORBWEAVER
#define USB_DEVICE_ID_RAZER_ORBWEAVER 0x0113
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2013
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2013 0x011A
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_STEALTH
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_STEALTH 0x011B
#endif

#ifndef USB_DEVICE_ID_RAZER_TARTARUS
#define USB_DEVICE_ID_RAZER_TARTARUS 0x0201
#endif

#ifndef USB_DEVICE_ID_RAZER_DEATHSTALKER_EXPERT
#define USB_DEVICE_ID_RAZER_DEATHSTALKER_EXPERT 0x0202
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA 0x0203
#endif

#ifndef USB_DEVICE_ID_RAZER_DEATHSTALKER_CHROMA
#define USB_DEVICE_ID_RAZER_DEATHSTALKER_CHROMA 0x0204
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_STEALTH
#define USB_DEVICE_ID_RAZER_BLADE_STEALTH 0x0205
#endif

#ifndef USB_DEVICE_ID_RAZER_ORBWEAVER_CHROMA
#define USB_DEVICE_ID_RAZER_ORBWEAVER_CHROMA 0x0207
#endif

#ifndef USB_DEVICE_ID_RAZER_TARTARUS_CHROMA
#define USB_DEVICE_ID_RAZER_TARTARUS_CHROMA 0x0208
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA_TE
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA_TE 0x0209
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_QHD
#define USB_DEVICE_ID_RAZER_BLADE_QHD 0x020F
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_PRO_LATE_2016
#define USB_DEVICE_ID_RAZER_BLADE_PRO_LATE_2016 0x0210
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_2018
#define USB_DEVICE_ID_RAZER_BLADE_2018 0x0233
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_OVERWATCH
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_OVERWATCH 0x0211
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2016
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_ULTIMATE_2016 0x0214
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_X_CHROMA
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_X_CHROMA 0x0216
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_X_ULTIMATE
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_X_ULTIMATE 0x0217
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_X_CHROMA_TE
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_X_CHROMA_TE 0x021A
#endif

#ifndef USB_DEVICE_ID_RAZER_ORNATA_CHROMA
#define USB_DEVICE_ID_RAZER_ORNATA_CHROMA 0x021E
#endif

#ifndef USB_DEVICE_ID_RAZER_ORNATA
#define USB_DEVICE_ID_RAZER_ORNATA 0x021F
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_STEALTH_LATE_2016
#define USB_DEVICE_ID_RAZER_BLADE_STEALTH_LATE_2016 0x0220
#endif

#ifndef USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA_V2
#define USB_DEVICE_ID_RAZER_BLACKWIDOW_CHROMA_V2 0x0221
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_LATE_2016
#define USB_DEVICE_ID_RAZER_BLADE_LATE_2016 0x0224
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_PRO_2017
#define USB_DEVICE_ID_RAZER_BLADE_PRO_2017 0x0225
#endif

#ifndef USB_DEVICE_ID_RAZER_CYNOSA_CHROMA
#define USB_DEVICE_ID_RAZER_CYNOSA_CHROMA 0x022A
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_STEALTH_MID_2017
#define USB_DEVICE_ID_RAZER_BLADE_STEALTH_MID_2017 0x022D
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_PRO_2017_FULLHD
#define USB_DEVICE_ID_RAZER_BLADE_PRO_2017_FULLHD 0x022F
#endif

#ifndef USB_DEVICE_ID_RAZER_BLADE_STEALTH_LATE_2017
#define USB_DEVICE_ID_RAZER_BLADE_STEALTH_LATE_2017 0x0232
#endif


/* Each keyboard report has 90 bytes*/
#define RAZER_BLACKWIDOW_REPORT_LEN 0x5A

#define RAZER_BLACKWIDOW_CHROMA_WAVE_DIRECTION_LEFT 2
#define RAZER_BLACKWIDOW_CHROMA_WAVE_DIRECTION_RIGHT 1

#define RAZER_BLACKWIDOW_CHROMA_CHANGE_EFFECT 0x0A

#define RAZER_BLACKWIDOW_CHROMA_EFFECT_NONE 0
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_WAVE 1
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_REACTIVE 2
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_BREATH 3
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_SPECTRUM 4
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_CUSTOM 5 // draw frame
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_STATIC 6
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_CLEAR_ROW 8

#define RAZER_BLACKWIDOW_ULTIMATE_2016_EFFECT_STARLIGHT 0x19


#define RAZER_BLACKWIDOW_CHROMA_EFFECT_SET_KEYS 9 //update profile needs to be called after setting keys to reflect changes
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_RESET 10
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_UNKNOWN 11
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_UNKNOWN2 12
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_UNKNOWN3 13
#define RAZER_BLACKWIDOW_CHROMA_EFFECT_UNKNOWN4 14


#define RAZER_BLACKWIDOW_CHROMA_ROW_LEN 0x16
#define RAZER_BLACKWIDOW_CHROMA_ROWS_NUM 6

#define RAZER_FIREFLY_ROW_LEN 0x0F
#define RAZER_FIREFLY_ROWS_NUM 1


#define RAZER_STEALTH_ROW_LEN 0x10
#define RAZER_STEALTH_ROWS_NUM 6



#define RAZER_BLACKWIDOW_CHROMA_WAIT_MS 1
#define RAZER_BLACKWIDOW_CHROMA_WAIT_MIN_US 600
#define RAZER_BLACKWIDOW_CHROMA_WAIT_MAX_US 800

#define RAZER_FIREFLY_WAIT_MIN_US 900
#define RAZER_FIREFLY_WAIT_MAX_US 1000


struct razer_kbd_device {
    struct usb_device *usbdev;
    struct hid_device *hiddev;
    unsigned int fn_on;
    char name[128];
    char phys[64];
    DECLARE_BITMAP(pressed_fn, KEY_CNT);

    unsigned char block_keys[3];
    unsigned char left_alt_on;
};



#endif
