#include QMK_KEYBOARD_H

enum sofle_layers {
    _DEFAULT,
    _BASIC,
    _EDIT,
    _DATA,
    _SYMBOL,
    _MOUSE,
    _MEDIA,
    _FUNCTION,
    _NUMPAD,
    _TOUHOU,
};

/*
* #define _DEFAULT 0
* #define _CONTROL 1
* #define _FUNCTION 2
*/

enum custom_keycodes {
    DEFAULT = SAFE_RANGE,
    BASIC,
    EDIT,
    DATA,
    SYMBOL,
    MOUSE,
    MEDIA,
    FUNCTION,
    NUMPAD,
    SELECT,
    MUTE,
    CS_COLN,
    CS_UNDS,
    CS_PIPE,
    CS_LT,
    CS_GT,
    CS_PERC,
    CS_ASTR,
    CS_DLR,
    CS_AMPR,
    CS_CIRC,
    CS_EXLM,
    CS_TILD,
    CS_PLUS,
    REP,
    SFT,
    MT_RBRC,
    MT_RPRN,
    MT_LPRN,
    MT_ASTR,
    CM_ASTR,
    CM_COMM,
    CM_EQL,
    CM_PLUS,
    CM_UNDS,
    CM_MINS,
    CM_DOT,
    // CS_BSLS,
};

// Home row mods
// #define MT_A LGUI_T(KC_A)
// #define MT_S LALT_T(KC_S)
// #define MT_D LSFT_T(KC_D)
// #define MT_F LCTL_T(KC_F)

// #define MT_J RCTL_T(KC_J)
// #define MT_K RSFT_T(KC_K)
// #define MT_L LALT_T(KC_L)
// #define MT_LBRC RGUI_T(KC_LBRC)

// Home block mods
#define MT_S LGUI_T(KC_S)
#define MT_D LALT_T(KC_D)
#define MT_F LSFT_T(KC_F)
#define MT_C LCTL_T(KC_C)

#define MT_N RCTL_T(KC_N)
#define MT_J RSFT_T(KC_J)
#define MT_K LALT_T(KC_K)
#define MT_L RGUI_T(KC_L)

#define MT_RBRC RCTL_T(KC_RBRC)


// ISO
#define CS_AT KC_DQUO
#define CS_DQUO KC_AT
#define CS_HASH KC_NUHS
#define CS_POUN KC_HASH
#define CS_BSLS KC_NUBS



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,  KC_5,                                    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, CS_HASH,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,                                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_SCLN,
    KC_LSFT,    KC_A,    MT_S,    MT_D,    MT_F,  KC_G,                                    KC_H,    MT_J,    MT_K,    MT_L, KC_LBRC, KC_RBRC,
    KC_LCTL, CS_BSLS,    KC_Z,    KC_X,    MT_C,  KC_V,         TG(7),         TG(8),      KC_B,    MT_N,    KC_M, KC_COMM,  KC_DOT, KC_QUOT,
                      KC_LGUI, KC_LALT,   MO(6), MO(2),  LT(3,KC_SPC), LT(4,KC_BSPC), LT(2,REP),   MO(5), CS_UNDS, KC_SLSH),

[_BASIC] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0, CS_HASH,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_SCLN,
    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                           KC_H,    KC_J,    KC_K,    KC_L, KC_LBRC, KC_RBRC,
    KC_LCTL, CS_BSLS,    KC_Z,    KC_X,    KC_C,    KC_V, KC_TRNS,      KC_TRNS,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_QUOT,
                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS,  KC_SPC,      KC_BSPC, KC_TRNS, KC_TRNS, CS_UNDS, KC_SLSH),

[_EDIT] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,          KC_7,          KC_8,          KC_9,    KC_0,  KC_DEL,
     KC_TAB, KC_PAUS, KC_HOME,   KC_UP,  KC_END, KC_CAPS,                        KC_EQL,       KC_RCBR,       KC_LCBR,       CS_CIRC, CS_UNDS,  KC_DEL,
    KC_LSFT, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL,                         CS_LT, LT(0,MT_RPRN), LT(0,MT_LPRN), LT(0,MT_ASTR),   CS_AT,  KC_ENT,
    KC_LCTL, KC_TRNS, KC_PGUP,  KC_INS, KC_PGDN,  SELECT, KC_TRNS,      KC_TRNS,  CS_GT,       MT_RBRC,       KC_LBRC,       KC_QUES, CS_TILD,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_SLSH, KC_LCTL, KC_TRNS,      KC_TRNS,   KC_0,        KC_SPC,       CS_UNDS,       KC_SLSH),

[_DATA] = LAYOUT(
     KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
     KC_TAB, CS_PERC, CS_ASTR,  CS_DLR, CS_AMPR, CS_CIRC,                        KC_EQL,    KC_7,    KC_8,    KC_9, CS_UNDS,  KC_DEL,
    KC_LSFT,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         CS_LT,    KC_4,    KC_5,    KC_6,   CS_AT,  KC_ENT,
    KC_LCTL, KC_TRNS, KC_LEFT,  KC_DOT, KC_RGHT, CS_UNDS, KC_TRNS,      KC_TRNS,  CS_GT,    KC_1,    KC_2,    KC_3, CS_TILD,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_SLSH, CS_BSLS,  KC_SPC,      KC_TRNS,   KC_0,  KC_SPC, KC_TRNS, KC_TRNS),

[_SYMBOL] = LAYOUT(
     KC_GRV, CS_EXLM, CS_DQUO, CS_POUN,  CS_DLR, CS_PERC,                        CS_CIRC, CS_AMPR, CS_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
     KC_TAB, CS_PERC, CS_ASTR,  CS_DLR, CS_AMPR, CS_CIRC,                         KC_EQL, KC_RCBR, KC_LCBR, CS_CIRC, CS_UNDS,  KC_DEL,
    KC_LSFT, CS_PIPE,   CS_LT, KC_MINS,   CS_GT,  KC_EQL,                        CS_PLUS, KC_RPRN, KC_LPRN, CS_ASTR,   CS_AT,  KC_ENT,
    KC_LCTL, KC_TRNS, CS_COLN,  KC_DOT, KC_COMM, CS_UNDS, KC_TRNS,      KC_TRNS, KC_MINS, KC_RBRC, KC_LBRC, KC_QUES, CS_TILD,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_SLSH, CS_BSLS,  KC_SPC,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_MOUSE] = LAYOUT(
     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DEL,
     KC_TAB, KC_TRNS, KC_BTN4, KC_MS_U, KC_BTN5, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DEL,
    KC_LSFT, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R,  KC_DEL,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_ENT,
    KC_LCTL, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,  KC_ENT,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_BTN3, KC_BTN2,  KC_BTN1,     KC_TRNS, KC_TRNS,   TG(5), KC_TRNS, KC_TRNS),

[_MEDIA] = LAYOUT(
    KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
     KC_TAB, KC_TRNS, KC_MSTP, KC_VOLU, KC_MPLY, KC_TRNS,                        KC_TRNS, KC_MPLY, KC_VOLU, KC_MSTP, KC_TRNS,  KC_F12,
    KC_LSFT, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, KC_TRNS,                        KC_TRNS, KC_MNXT, KC_VOLD, KC_MPRV, KC_TRNS, KC_TRNS,
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_LGUI, KC_LALT, KC_MSTP,    MUTE, KC_MPLY,      KC_MPLY,    MUTE, KC_MSTP, KC_TRNS, KC_TRNS),

[_FUNCTION] = LAYOUT(
    KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_NUMPAD] = LAYOUT(
     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,  KC_NUM, KC_SLSH, KC_ASTR, KC_MINS, KC_TRNS,
     KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,   KC_P7,   KC_P8,   KC_P9, KC_PLUS, KC_TRNS,
    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,   KC_P4,   KC_P5,   KC_P6, KC_COMM, KC_TRNS,
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,   KC_P1,   KC_P2,   KC_P3,  KC_EQL, KC_TRNS,
                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,   KC_P0,  KC_DOT, KC_TRNS, KC_TRNS),

[_TOUHOU] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_UP, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,                        KC_TRNS,    KC_Z,    KC_X, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

//[_NAVIGATION] = LAYOUT(
//     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DEL,
//     KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_WH_L, KC_MS_U, KC_WH_R, KC_TRNS,  KC_DEL,
//    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,  KC_ENT,
//    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_WH_D, KC_TRNS, KC_WH_U, KC_TRNS,  KC_ENT,
//                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS,     KC_BTN1, KC_BTN2, KC_BTN3,  KC_EQL, KC_SLSH),

//[_NAVIGATION] = LAYOUT(
//     KC_ESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
//     KC_TAB, KC_PGUP,    KC_HOME,      KC_UP,     KC_END,     KC_DEL,                         KC_TRNS, KC_WH_L, KC_MS_U, KC_WH_R, KC_TRNS,  KC_DEL,
//    KC_LSFT, KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RGHT,    SELWORD,                         KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,  KC_ENT,
//    KC_LCTL,  KC_ENT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V),  KC_TRNS,      KC_TRNS, KC_TRNS, KC_WH_D, KC_TRNS, KC_WH_R, KC_TRNS,  KC_ENT,
//                         KC_LGUI,    KC_LALT,    KC_TRNS,    KC_TRNS,  KC_TRNS,      KC_BTN1, KC_BTN2, KC_BTN3,  KC_EQL, KC_SLSH),)

//[_NAVIGATION] = LAYOUT(
//     KC_ESC,   KC_F1,      KC_F2,   KC_F3,      KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//     KC_TAB, KC_PGUP,    KC_HOME,   KC_UP,     KC_END,  KC_DEL,                        KC_TRNS, KC_WH_L, KC_MS_U, KC_WH_R, KC_TRNS,  KC_DEL,
//    KC_LSFT, KC_PGDN,    KC_LEFT, KC_DOWN,    KC_RGHT, SELWORD,                        KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,  KC_ENT,
//    KC_LCTL,  KC_ENT, LCTL(KC_Z),  KC_INS, LCTL(KC_Y), KC_PSCR, KC_TRNS,      KC_TRNS, KC_TRNS, KC_WH_D, KC_TRNS, KC_WH_U, KC_TRNS,  KC_ENT,
//                         KC_LGUI, KC_LALT,    KC_TRNS, KC_TRNS, KC_TRNS,      KC_BTN1, KC_BTN2, KC_BTN3,  KC_EQL, KC_SLSH),

};

#define IDLE_TIMEOUT 10000  //idle timeout in milliseconds

bool is_alt_tab_active = false; //alt tabbing on rotary encoder
uint16_t alt_tab_timer = 0;

bool is_ctrl_tab_active = false; //ctrl tabbing on rotary encoder
uint16_t ctrl_tab_timer = 0;

uint16_t tabbing_timeout = 1250;

void matrix_scan_user(void) {
    if (get_highest_layer(layer_state) == _NUMPAD) {
        if (last_input_activity_elapsed() > IDLE_TIMEOUT) {
            layer_off(_NUMPAD);
        }
    }
    else if (get_highest_layer(layer_state) == _FUNCTION) {
        if (last_input_activity_elapsed() > IDLE_TIMEOUT) {
            layer_off(_FUNCTION);
        }
//    else if (get_highest_layer(layer_state) == _MOUSE) {
//    }
//        if (last_input_activity_elapsed() > IDLE_TIMEOUT) {
//            layer_off(_MOUSE);
//        }
    }
    if (get_highest_layer(layer_state) == _TOUHOU) {
        if (last_input_activity_elapsed() > 900000) { //15 minute time out
            layer_off(_TOUHOU);
        }
    }
    if (is_alt_tab_active) {
        if (timer_elapsed(alt_tab_timer) > tabbing_timeout) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
        }
    }
    if (is_ctrl_tab_active) {
        if (timer_elapsed(ctrl_tab_timer) > tabbing_timeout) {
            unregister_code(KC_LCTL);
            is_ctrl_tab_active = false;
        }
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2,REP):
        case LT(3,KC_SPC):
        case LT(4,KC_BSPC):
        case MT_S:
        case MT_D:
        case MT_F:
        case MT_C:
        case MT_N:
        case MT_J:
        case MT_K:
        case MT_L:
        case MT_RBRC:
        case LT(0,MT_RPRN):
        case LT(0,MT_LPRN):
        case LT(0,MT_ASTR):
            return 0;
        default:
            return TAPPING_TERM;
    }
}

// uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
// //        case MT_A:
// //            return 250;
// //        case LT(3, KC_SPC):
// //            return 100;
// //        case LT(4, KC_BSPC):
// //            return 100;
//         case LT(0,SFT):
//             return 100;
//         default:
//             return TAPPING_TERM;
//     }
// }

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case LT(2, REP):
        // case LT(3, KC_SPC):
        case LT(4, KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}


enum combo_events {
    // CAPSLOCK,
    // SCROLLLOCK,
    NOMODS,
    TOUHOU,
    
    // LESSTHAN,
    // GREATERTHAN,
    AT,
    BAR,

    // LEFTPAREN,
    // RIGHTPAREN,
    COLON,
    SEMICOLON,
    
    L_EXPONENT,
    L_ASTERISK,
    L_COMMA,
    L_PLUS,
    L_EQUALS,
    L_MINUS,
    L_UNDERSCORE,
    L_DOT,

    R_EXPONENT,
    R_ASTERISK,
    R_COMMA,
    R_PLUS,
    R_EQUALS,
    R_MINUS,
    R_UNDERSCORE,
    R_DOT,

    // Steno
    SG_THE,
    SG_AND,
    SG_THAT,
    SG_THIS,
    SG_HERE,
    SG_HAVE,
    SG_WITH,
    SG_YOU,
    SG_EVER,
    SG_FROM,
    SG_SOME,
    SG_WHAT,
    SG_BUT,
    SG_ABOUT,
    SG_WHICH,
    SG_JUST,
    SG_LIKE,
    
    SG_OUGH,
    SG_OULD,
    SG_ION,
    SG_ING,
    
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

// const uint16_t PROGMEM capslock[]       = {MT_D, MT_K, COMBO_END};
// const uint16_t PROGMEM scrolllock[]     = {MT_F, MT_J, COMBO_END};
const uint16_t PROGMEM nomods[]         = {KC_0, CS_HASH, COMBO_END};
const uint16_t PROGMEM touhou[]         = {KC_0, CS_HASH, KC_ESC, COMBO_END};

// const uint16_t PROGMEM leftparen[]      = {MT_S, KC_E, COMBO_END};
// const uint16_t PROGMEM rightparen[]     = {KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_exponent[]     = {MT_S, KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_asterisk[]     = {MT_D, MT_C, COMBO_END};
const uint16_t PROGMEM l_comma[]        = {MT_F, KC_V, COMBO_END};

const uint16_t PROGMEM l_equals[]       = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM l_plus[]         = {MT_D, MT_F, COMBO_END};
const uint16_t PROGMEM l_underscore[]   = {KC_X, MT_C, COMBO_END};
const uint16_t PROGMEM l_minus[]        = {MT_F, KC_G, COMBO_END};
const uint16_t PROGMEM l_dot[]          = {MT_C, KC_V, COMBO_END};

const uint16_t PROGMEM at[]             = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM bar[]            = {KC_R, KC_G, COMBO_END};

// const uint16_t PROGMEM lessthan[]       = {MT_J, KC_I, COMBO_END};
// const uint16_t PROGMEM greaterthan[]    = {KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_exponent[]     = {MT_J, KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_asterisk[]     = {MT_N, MT_K, COMBO_END};
const uint16_t PROGMEM r_comma[]        = {KC_B, MT_J, COMBO_END};

const uint16_t PROGMEM r_equals[]       = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM r_plus[]         = {MT_J, MT_K, COMBO_END};
const uint16_t PROGMEM r_underscore[]   = {MT_N, KC_M, COMBO_END};
const uint16_t PROGMEM r_minus[]        = {KC_H, MT_J, COMBO_END};
const uint16_t PROGMEM r_dot[]          = {KC_B, MT_N, COMBO_END};

const uint16_t PROGMEM colon[]          = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM semicolon[]      = {KC_H, KC_U, COMBO_END};

// Steno
const uint16_t PROGMEM sg_the[]         = {LT(2,REP), KC_T, COMBO_END};
const uint16_t PROGMEM sg_and[]         = {LT(2,REP), KC_A, COMBO_END};
const uint16_t PROGMEM sg_that[]        = {LT(2,REP), KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM sg_this[]        = {LT(2,REP), KC_T, KC_I, COMBO_END};
const uint16_t PROGMEM sg_here[]        = {LT(2,REP), KC_H, COMBO_END};
const uint16_t PROGMEM sg_have[]        = {LT(2,REP), KC_H, KC_A, COMBO_END};
const uint16_t PROGMEM sg_with[]        = {LT(2,REP), KC_W, KC_I, COMBO_END};
const uint16_t PROGMEM sg_you[]         = {LT(2,REP), KC_U, COMBO_END};
const uint16_t PROGMEM sg_ever[]        = {LT(2,REP), KC_E, COMBO_END};
const uint16_t PROGMEM sg_from[]        = {LT(2,REP), MT_F, COMBO_END};
const uint16_t PROGMEM sg_some[]        = {LT(2,REP), MT_S, COMBO_END};
const uint16_t PROGMEM sg_what[]        = {LT(2,REP), KC_W, COMBO_END};
const uint16_t PROGMEM sg_but[]         = {LT(2,REP), KC_B, COMBO_END};
const uint16_t PROGMEM sg_about[]       = {LT(2,REP), KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM sg_which[]       = {LT(2,REP), KC_W, KC_H, COMBO_END};
const uint16_t PROGMEM sg_just[]        = {LT(2,REP), MT_J, COMBO_END};
const uint16_t PROGMEM sg_like[]        = {LT(2,REP), MT_K, COMBO_END};

const uint16_t PROGMEM sg_ough[]        = {LT(2,REP), KC_O, COMBO_END};
const uint16_t PROGMEM sg_ould[]        = {LT(2,REP), MT_L, COMBO_END};
const uint16_t PROGMEM sg_ion[]         = {LT(2,REP), MT_N, COMBO_END};
const uint16_t PROGMEM sg_ing[]         = {LT(2,REP), KC_I, COMBO_END};

combo_t key_combos[] = {
    // [CAPSLOCK]     = COMBO_ACTION(capslock),
    // [SCROLLLOCK]   = COMBO_ACTION(scrolllock),
    [NOMODS]         = COMBO_ACTION(nomods),
    [TOUHOU]        = COMBO_ACTION(touhou),
    
    // Manual control
    [L_ASTERISK]    = COMBO(l_asterisk,    CM_ASTR),
    [L_COMMA]       = COMBO(l_comma,       CM_COMM),
    [L_EQUALS]      = COMBO(l_equals,      CM_EQL),
    [L_PLUS]        = COMBO(l_plus,        CM_PLUS),
    [L_UNDERSCORE]  = COMBO(l_underscore,  CM_UNDS),
    [L_MINUS]       = COMBO(l_minus,       CM_MINS),
    [L_DOT]         = COMBO(l_dot,         CM_DOT),
    [R_ASTERISK]    = COMBO(r_asterisk,    CM_ASTR),
    [R_COMMA]       = COMBO(r_comma,       CM_COMM),
    [R_EQUALS]      = COMBO(r_equals,      CM_EQL),
    [R_PLUS]        = COMBO(r_plus,        CM_PLUS),
    [R_UNDERSCORE]  = COMBO(r_underscore,  CM_UNDS),
    [R_MINUS]       = COMBO(r_minus,       CM_MINS),
    [R_DOT]         = COMBO(r_dot,         CM_DOT),
    
    [COLON]         = COMBO_ACTION(colon),

    // Basic key combos
    // [LEFTPAREN]     = COMBO(leftparen, KC_LPRN),
    // [RIGHTPAREN]    = COMBO(rightparen, KC_RPRN),
    [L_EXPONENT]    = COMBO(l_exponent, KC_CIRC),
    [AT]            = COMBO(at, S(KC_QUOT)),
    [BAR]           = COMBO(bar, S(KC_NUBS)),
    // [LESSTHAN]      = COMBO(lessthan, KC_LT),
    // [GREATERTHAN]   = COMBO(greaterthan, KC_GT),
    [R_EXPONENT]    = COMBO(r_exponent, KC_CIRC),
    [SEMICOLON]     = COMBO(semicolon, KC_SCLN),

    // Steno
    [SG_THE]        = COMBO_ACTION(sg_the),
    [SG_AND]        = COMBO_ACTION(sg_and),
    [SG_THAT]       = COMBO_ACTION(sg_that),
    [SG_THIS]       = COMBO_ACTION(sg_this),
    [SG_HERE]       = COMBO_ACTION(sg_here),
    [SG_HAVE]       = COMBO_ACTION(sg_have),
    [SG_WITH]       = COMBO_ACTION(sg_with),
    [SG_YOU]        = COMBO_ACTION(sg_you),
    [SG_EVER]       = COMBO_ACTION(sg_ever),
    [SG_FROM]       = COMBO_ACTION(sg_from),
    [SG_SOME]       = COMBO_ACTION(sg_some),
    [SG_WHAT]       = COMBO_ACTION(sg_what),
    [SG_BUT]        = COMBO_ACTION(sg_but),
    [SG_ABOUT]      = COMBO_ACTION(sg_about),
    [SG_WHICH]      = COMBO_ACTION(sg_which),
    [SG_JUST]       = COMBO_ACTION(sg_just),
    [SG_LIKE]       = COMBO_ACTION(sg_like),
    
    [SG_OUGH]       = COMBO_ACTION(sg_ough),
    [SG_OULD]       = COMBO_ACTION(sg_ould),
    [SG_ION]        = COMBO_ACTION(sg_ion),
    [SG_ING]        = COMBO_ACTION(sg_ing),
    
};


void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        // case CAPSLOCK:
        //     if (pressed) {
        //         tap_code(KC_CAPS);
        //     }
        //     break;
        // case SCROLLLOCK:
        //     if (pressed) {
        //         tap_code(KC_SCRL);
        //     }
        //     break;
        case NOMODS:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_TOUHOU)) {
                    layer_move(_DEFAULT);
                }
                else if (layer_state_is(_DEFAULT)) {
                    layer_move(_BASIC);
                }
            }
            break;
        case TOUHOU:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_DEFAULT)) {
                    layer_move(_TOUHOU);
                }
                else if (layer_state_is(_TOUHOU)) {
                    layer_move(_DEFAULT);
                }
            }
            break;

        case COLON:
            if (pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_COLN);
                set_mods(mods);
            }
            break;

        // Steno
        case SG_THE:
            if (pressed) {
                SEND_STRING("the");
            }
            break;
        case SG_AND:
            if (pressed) {
                SEND_STRING("and");
            }
            break;
        case SG_THAT:
            if (pressed) {
                SEND_STRING("that");
            }
            break;
        case SG_THIS:
            if (pressed) {
                SEND_STRING("this");
            }
            break;
        case SG_HERE:
            if (pressed) {
                SEND_STRING("here");
            }
            break;
        case SG_HAVE:
            if (pressed) {
                SEND_STRING("have");
            }
            break;
        case SG_WITH:
            if (pressed) {
                SEND_STRING("with");
            }
            break;
        case SG_YOU:
            if (pressed) {
                SEND_STRING("you");
            }
            break;
        case SG_EVER:
            if (pressed) {
                SEND_STRING("ever");
            }
            break;
        case SG_FROM:
            if (pressed) {
                SEND_STRING("from");
            }
            break;
        case SG_SOME:
            if (pressed) {
                SEND_STRING("some");
            }
            break;
        case SG_WHAT:
            if (pressed) {
                SEND_STRING("what");
            }
            break;
        case SG_BUT:
            if (pressed) {
                SEND_STRING("but");
            }
            break;
        case SG_ABOUT:
            if (pressed) {
                SEND_STRING("about");
            }
            break;
        case SG_WHICH:
            if (pressed) {
                SEND_STRING("which");
            }
            break;
        case SG_JUST:
            if (pressed) {
                SEND_STRING("just");
            }
            break;
        case SG_LIKE:
            if (pressed) {
                SEND_STRING("like");
            }
            break;




        case SG_OUGH:
            if (pressed) {
                SEND_STRING("ough");
            }
            break;
        case SG_OULD:
            if (pressed) {
                SEND_STRING("ould");
            }
            break;
        case SG_ION:
            if (pressed) {
                SEND_STRING("ion");
            }
            break;
        case SG_ING:
            if (pressed) {
                SEND_STRING("ing");
            }
            break;

    }
}

// 50ms default
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (combo->keycode) {
        case REP:
            return 100; // More lenient timings for steno combos
            break;
        default:
            return 20;
    }
}

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    return true;
}

// bool get_combo_must_press_in_order(uint16_t combo_index, combo_t *combo) {
//     switch (combo->keycode) {
//         case REP:
//             return true;
//             break;
//         default:
//             return false;
//     }
// }

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case NOMODS:
        case TOUHOU:
            return true;
            break;

        default:
            if (!(layer_state_is(_BASIC) || layer_state_is(_TOUHOU) || layer_state_is(_MOUSE))) {
                return true;
            }
            break;
    }
    return false;
}


// Store last key
uint16_t lastkey = KC_NO;
// Store mute state
bool muted = false;

bool no_ctrl(void) {
    return !((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL));
}

enum { STATE_NONE, STATE_SELECTED, STATE_WORD, STATE_FIRST_LINE, STATE_LINE };
bool process_select_word(uint16_t keycode, keyrecord_t* record, uint16_t sel_keycode) {
    static uint8_t state = STATE_NONE;

    if (keycode == KC_LSFT || keycode == KC_RSFT || keycode == MO(2)) {
        return true;
    }

    if (keycode == sel_keycode && record->event.pressed) {  // On key press.
        const uint8_t mods = get_mods();
        const uint8_t all_mods = mods;
        if ((all_mods & MOD_MASK_SHIFT) == 0) {  // Select word.
            register_code(KC_LCTL);
            if (state == STATE_NONE) {
                SEND_STRING(SS_TAP(X_RGHT) SS_TAP(X_LEFT));
            }
            register_code(KC_LSFT);
            register_code(KC_RGHT);
            state = STATE_WORD;
        } else {  // Select line.
            if (state == STATE_NONE) {
                clear_mods();
                SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)));
                set_mods(mods);
                state = STATE_FIRST_LINE;
            } else {
                register_code(KC_DOWN);
                state = STATE_LINE;
            }
        }
        return false;
    }

    // `sel_keycode` was released, or another key was pressed.
    switch (state) {
        case STATE_WORD:
            unregister_code(KC_RGHT);
            unregister_code(KC_LSFT);
            unregister_code(KC_LCTL);
            state = STATE_SELECTED;
            break;

        case STATE_FIRST_LINE:
            state = STATE_SELECTED;
            break;

        case STATE_LINE:
            unregister_code(KC_DOWN);
            state = STATE_SELECTED;
            break;

        case STATE_SELECTED:
        default:
        state = STATE_NONE;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_select_word(keycode, record, SELECT)) { return false; }
    switch (keycode) {
        // Combo actions
        case CM_ASTR:
            if (record->event.pressed) {
                tap_code16(KC_ASTR);
            }
            break;
        case CM_COMM:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_COMM);
                set_mods(mods);
            }
            break;
        case CM_EQL:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_EQL);
                set_mods(mods);
            }
            break;
        case CM_PLUS:
            if (record->event.pressed) {
                tap_code16(KC_PLUS);
            }
            break;
        case CM_UNDS:
            if (record->event.pressed) {
                tap_code16(KC_UNDS);
            }
            break;
        case CM_MINS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_MINS);
                set_mods(mods);
            }
            break;
        case CM_DOT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_DOT);
                set_mods(mods);
            }
            break;

        // Edit layer mod-taps
        case LT(0,MT_RPRN):
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_MASK_SHIFT);
            } else { // On keyup
                unregister_mods(MOD_MASK_SHIFT);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_RPRN);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;

        case LT(0,MT_LPRN):
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_BIT(KC_LALT));
            } else { // On keyup
                unregister_mods(MOD_BIT(KC_LALT));
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_LPRN);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;

        case LT(0,MT_ASTR):
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_MASK_GUI);
            } else { // On keyup
                unregister_mods(MOD_MASK_GUI);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_ASTR);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;
        


        // Repeat key
        case KC_A:
        // case MT_A:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_A;
            }
            break;
        case KC_B:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_B;
            }
            break;
        case KC_C:
        case MT_C:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_C;
            }
            break;
        case KC_D:
        case MT_D:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_D;
            }
            break;
        case KC_E:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_E;
            }
            break;
        case KC_F:
        case MT_F:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_F;
            }
            break;
        case KC_G:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_G;
            }
            break;
        case KC_H:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_H;
            }
            break;
        case KC_I:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_I;
            }
            break;
        case KC_J:
        case MT_J:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_J;
            }
            break;
        case KC_K:
        case MT_K:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_K;
            }
            break;
        case KC_L:
        case MT_L:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_L;
            }
            break;
        case KC_M:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_M;
            }
            break;
        case KC_N:
        case MT_N:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_N;
            }
            break;
        case KC_O:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_O;
            }
            break;
        case KC_P:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_P;
            }
            break;
        case KC_Q:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Q;
            }
            break;
        case KC_R:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_R;
            }
            break;
        case KC_S:
        case MT_S:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_S;
            }
            break;
        case KC_T:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_T;
            }
            break;
        case KC_U:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_U;
            }
            break;
        case KC_V:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_V;
            }
            break;
        case KC_W:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_W;
            }
            break;
        case KC_X:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_X;
            }
            break;
        case KC_Y:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Y;
            }
            break;
        case KC_Z:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Z;
            }
            break;

        case REP:
            if (record->event.pressed) {
                register_code(lastkey);
            } else {
                unregister_code(lastkey);
            };
            break;

        case LT(2,REP):
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                layer_on(_EDIT);
            } else { // On keyup
                layer_off(_EDIT);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                register_code(lastkey);
            } else {
                unregister_code(lastkey);
            }
            return false; // Return true for normal processing of key
        }

        // case LT(0,SFT):
        // {
        //     if (!record->tap.count && record->event.pressed) { // Intercept holds only
        //         register_mods(MOD_MASK_SHIFT);
        //     } else { // On keyup
        //         unregister_mods(MOD_MASK_SHIFT);
        //     }
        //     if (record->tap.count && record->event.pressed) { // Intercept taps
        //         set_oneshot_mods(MOD_BIT(KC_LSFT));
        //     } else {
        //         /* intentionally empty */;
        //     }
        //     return false; // Return true for normal processing of key
        // }


//        case NEWSENT: 
//            if (record->event.pressed) {
//                SEND_STRING(". ");
//                add_oneshot_mods(MOD_BIT(KC_LSFT));  // Set one-shot mod for shift.
//            }
//        break;

        case MUTE:
            if (record->event.pressed) {
                register_code(KC_MUTE);
                muted = !muted;
            } else {
                unregister_code(KC_MUTE);
            }
            break;

        case CS_COLN:
            if (record->event.pressed) {
                tap_code16(KC_COLN);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_UNDS:
            if (record->event.pressed) {
                tap_code16(KC_UNDS);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_PIPE:
            if (record->event.pressed) {
                tap_code16(LSFT(KC_NUBS));
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_LT:
            if (record->event.pressed) {
                tap_code16(KC_LT);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_GT:
            if (record->event.pressed) {
                tap_code16(KC_GT);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_PERC:
            if (record->event.pressed) {
                tap_code16(KC_PERC);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_ASTR:
            if (record->event.pressed) {
                tap_code16(KC_ASTR);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_DLR:
            if (record->event.pressed) {
                tap_code16(KC_DLR);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_AMPR:
            if (record->event.pressed) {
                tap_code16(KC_AMPR);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_CIRC:
            if (record->event.pressed) {
                tap_code16(KC_CIRC);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_EXLM:
            if (record->event.pressed) {
                tap_code16(KC_EXLM);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_TILD:
            if (record->event.pressed) {
                tap_code16(S(KC_NUHS));
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
        case CS_PLUS:
            if (record->event.pressed) {
                tap_code16(KC_PLUS);
                unregister_mods(MOD_MASK_SHIFT);
            }
            break;
    }
    return true;
}


// bool ONESHOT_SHIFT = false;
// void oneshot_mods_changed_user(uint8_t mods) {
//     if (mods & MOD_MASK_SHIFT) {
//         ONESHOT_SHIFT = true;
//     }
//     if (!mods) {
//         ONESHOT_SHIFT = false;
//     }
// }

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM my_logo[] = {
        // 'oled', 128x32px
        0x2e, 0x01, 0xfc, 0xff, 0xff, 0x07, 0x00, 0xc0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x0c, 0x06, 0x00, 0x00, 0x80, 0x60, 0x1e, 0x60, 0x80, 0x00, 0x10, 0x60, 0x03, 0xfc, 0x08, 
        0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
        0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0xf8, 0x04, 0x03, 0x03, 0xff, 0x00, 0x00, 0xff, 0x06, 0x7d, 0xfd, 0xfd, 0x7d, 0x05, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x7c, 0xfc, 0xfc, 0x7c, 0x05, 0xfe, 0x00, 0x00, 0xff, 0x02, 
        0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 
        0x0f, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0x78, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 
        0x78, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0xf0, 0xf8, 0xf8, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x78, 
        0x00, 0x00, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf8, 0xf8, 0xf8, 0x00, 0x08, 0xf8, 
        0xf8, 0xf0, 0x70, 0x38, 0x38, 0x38, 0x38, 0x78, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 
        0x78, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x78, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x01, 0x82, 0x64, 0x07, 0x38, 0x40, 0xff, 0x88, 0x90, 0x50, 0x50, 0xf0, 0x00, 0x00, 0x20, 
        0xe0, 0x28, 0x60, 0xa0, 0xa0, 0x20, 0x20, 0x10, 0x10, 0x08, 0xfe, 0x81, 0x70, 0x0e, 0x15, 0x24, 
        0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
        0xe0, 0xff, 0x7f, 0x3f, 0x00, 0x00, 0x3f, 0x7f, 0xff, 0xe7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 
        0xe7, 0xf7, 0x77, 0x37, 0x00, 0x00, 0xe3, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xc7, 0xff, 0xff, 0x7e, 
        0x00, 0x00, 0x1f, 0x3f, 0x3f, 0x38, 0x38, 0x38, 0x38, 0x38, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0x7f, 0xff, 
        0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xf0, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x03, 0x6c, 0x93, 0x20, 0x40, 0xf0, 0x0e, 0x01, 0x02, 0x06, 0x08, 0x08, 0x11, 0x12, 0xfc, 0x22, 
        0x11, 0x08, 0x08, 0x04, 0x04, 0x0f, 0xf0, 0x80, 0x40, 0xb8, 0x41, 0x20, 0xdf, 0x18, 0x20, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
        0x00, 0x00, 0x0e, 0x1e, 0x1e, 0x1c, 0x1c, 0x1c, 0x1c, 0x1e, 0x1f, 0x0f, 0x07, 0x00, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

    oled_write_raw_P(my_logo, sizeof(my_logo));
}


//void render_mode(void) {
//    oled_write_ln_P(PSTR("MODE"), false);
//    oled_write_ln_P(PSTR(""), false);
//    if (keymap_config.swap_lctl_lgui) {
//        oled_write_ln_P(PSTR("MAC"), false);
//    } else {
//        oled_write_ln_P(PSTR("WIN"), false);
//    }
//}

void render_wpm(void) {
    //oled_write_ln_P(PSTR("WPM\n"), false);
    uint8_t n = get_current_wpm();
    //oled_set_cursor(0, 0);//column, row
    char render_str[4];
    render_str[3] = '\0';
    render_str[2] = '0' + n % 10;
    render_str[1] = '0' + (n /= 10) % 10;
    render_str[0] = '0' + n / 10;

//    char render_str0[4];
//    render_str0[3] = '\0';
//    render_str0[2] = '0'+ n%10;
//    render_str0[1] = '0' + (n /= 10)%10;
//    render_str0[0] = '0' + n/10 ;

//    char* render_str;
//    if(render_str0[0] == '0'){
//        render_str = &render_str0[1];
//        if(render_str0[1] == '0'){
//            render_str = &render_str0[1];
//            if(render_str0[2] == '0'){
//                render_str = &render_str0[1];
//            }
//        }
//    }else {render_str = render_str0;}

// Left align
//    render_str[3] = '\0';
//    if (0<=n && n<10) {
//        render_str[2] = ' ';
//        render_str[1] = ' ';
//        render_str[0] = '0' + n % 10;
//    }
//    else if (10<=n && n<100) {
//        render_str[2] = ' ';
//        render_str[1] = '0' + n % 10;
//        render_str[0] = '0' + (n /= 10) % 10;
//    }
//    else {
//        render_str[2] = '0' + n % 10;
//        render_str[1] = '0' + (n /= 10) % 10;
//        render_str[0] = '0' + n / 10;
//    }

// Left align + no output when WPM = 0
//    render_str[3] = '\0';
//    render_str[2] = '0'+ n%10;
//    render_str[1] = '0' + (n /= 10)%10;
//    render_str[0] = '0' + n/10 ;
//    
//    while(render_str[0] == '0'){
//        render_str[0] = render_str[1];
//        render_str[1] = render_str[2];
//        render_str[2] = render_str[3];
//        render_str[3] = ' ';
//    }

    oled_write(render_str, false);
    oled_write_P(PSTR("\n"), false);
}

void render_linebreak(void) {
    oled_write_P(PSTR("_____\n"), false);
}

void render_layer(void) {
    switch (get_highest_layer(layer_state)) {
        case _DEFAULT:
            oled_write_P(PSTR("Std.\n"), false);
            break;
        case _BASIC:
            oled_write_P(PSTR("Basic"), false);
            break;
        case _DATA:
            oled_write_P(PSTR("Data\n"), false);
            break;
        case _EDIT:
            oled_write_P(PSTR("Edit\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symb."), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("Mouse"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("N.Pad"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("F.Key"), false);
            break;
        case _TOUHOU:
            oled_write_P(PSTR("ToHo."), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

void render_locking_key_state(led_t led_usb_state) {
    oled_write_P(PSTR("CPSLK"), led_usb_state.caps_lock);
    oled_write_P(PSTR("NUMLK"), led_usb_state.num_lock);
    oled_write_P(PSTR("SCRLK"), led_usb_state.scroll_lock);
    oled_write_P(PSTR("MUTED"), muted);
}

void render_modifier_state(void) {
    oled_write_P(PSTR("G"), (get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI) || (get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI));
    oled_write_P(PSTR("A"), (get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT) || (get_mods() & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT));
    oled_write_P(PSTR("S"), (get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT) || (get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT));
    // oled_write_P(PSTR("S"), (get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT) || (get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT) || ONESHOT_SHIFT );
    oled_write_P(PSTR("C"), (get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL));
}

static void render_status(void) {
    oled_write_ln_P(PSTR("LAYER"), false);
    render_layer();
    render_linebreak();
    oled_write_P(PSTR("WPM:\n"), false);
    render_wpm();
    render_linebreak();
    render_locking_key_state(host_keyboard_led_state());
    render_linebreak();
    render_modifier_state();
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        render_logo();
        oled_scroll_right();
    }
    return false;
}

#endif

#ifdef ENCODER_ENABLE

static int8_t ticks = 0; // reduce sensitivity of right encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (get_highest_layer(layer_state)){
            case _EDIT:
            case _DATA:
            case _SYMBOL:
            case _MOUSE:
                if (clockwise) {
                    tap_code16(LCTL(KC_Y));
                } else {
                    tap_code16(LCTL(KC_Z));
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_VOLU);
                    muted = false;
                } else {
                    tap_code(KC_VOLD);
                    muted = false;
                }
        }
    } else if (index == 1) {
        switch (get_highest_layer(layer_state)){
            case _EDIT:
            case _DATA:
            case _SYMBOL:
            case _MOUSE:                
                if (clockwise) { ++ticks; } else { ++ticks; } {
                    if (abs(ticks) >= 2) {
                        if (!is_ctrl_tab_active) {
                            is_ctrl_tab_active = true;
                            register_code(KC_LCTL);
                        }
                        ctrl_tab_timer = timer_read();
                        tap_code16(clockwise ? S(KC_TAB) : KC_TAB);
                        ticks = 0;
                    }
                }
                break;
            default:
                if (clockwise) { ++ticks; } else { ++ticks; } {
                    if (abs(ticks) >= 2) {
                        if (!is_alt_tab_active) {
                            is_alt_tab_active = true;
                            register_code(KC_LALT);
                        }
                        alt_tab_timer = timer_read();
                        tap_code16(clockwise ? S(KC_TAB) : KC_TAB);
                        ticks = 0;
                    }
                }
        }
    }
    return false; // Stops the keyboard-level encoder code to run on top (defaults encoders to volume control)
}

#endif

