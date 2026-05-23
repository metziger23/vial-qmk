#pragma once

#define VIAL_KEYBOARD_UID {0x4B, 0x19, 0xA2, 0x7E, 0x3C, 0x61, 0xD9, 0x52}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 5, 4 }

#define TAP_CODE_DELAY 5

// default but used in macros
#define TAPPING_TERM 170

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#define TAPPING_TERM 170

#define PERMISSIVE_HOLD

#ifndef CHORDAL_HOLD
#define CHORDAL_HOLD
#endif
