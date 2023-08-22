#pragma once


#undef MASTER_LEFT
#define MASTER_RIGHT

#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

//#undef ONESHOT_TAP_TOGGLE
//#define ONESHOT_TAP_TOGGLE 5
#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1000

//#define COMBO_COUNT 23
#define COMBO_TERM 20 //Combo timer
#define COMBO_SHOULD_TRIGGER
#define COMBO_ONLY_FROM_LAYER 0

// Timer for mod and layer taps
#undef TAPPING_TERM
#define TAPPING_TERM 200
//#define TAPPING_TERM_PER_KEY

// Superceded by hold on other key press
//#define PERMISSIVE_HOLD
//#define PERMISSIVE_HOLD_PER_KEY

// Perform hold action if other keys are pressed.
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Disable repeating tap function on tap-hold keys.
//#define QUICK_TAP_TERM 0
#define QUICK_TAP_TERM_PER_KEY

// N-key rollover
#define FORCE_NKRO

// Auto Shift
//#define NO_AUTO_SHIFT_ALPHA
//#define NO_AUTO_SHIFT_NUMERIC
//#define NO_AUTO_SHIFT_SPECIAL
//#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
//#define AUTO_SHIFT_NO_SETUP

// Auto Shift for modtaps
//#define RETRO_SHIFT 500 

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY             0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL          8
#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA        1
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED         20
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX       100
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY       0
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL    80
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40



// Makes GESC key output escape while ctrl is held
//#define GRAVE_ESC_CTRL_OVERRIDE

#define OLED_FONT_H "keyboards/sofle/keymaps/desync/font.c"







#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

//#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE
#define NO_ALT_REPEAT_KEY
//#define LAYER_STATE_8BIT
//saves space, but only supports 7 layers or fewer

