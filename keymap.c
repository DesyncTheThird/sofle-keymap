#include QMK_KEYBOARD_H




enum sofle_layers {
    _DEFAULT,
    _GAME,
    _EDIT,
    _EQUATION,
    _SYMBOL,
    _MOUSE,
    _MEDIA,
    _FUNCTION,
    _NUMPAD,
};

/*
* #define _DEFAULT 0
* #define _CONTROL 1
* #define _FUNCTION 2
*/

enum custom_keycodes {
    DEFAULT = SAFE_RANGE,
    GAME,
    EDIT,
    EQUATION,
    SYMBOL,
    MOUSE,
    MEDIA,
    FUNCTION,
    NUMPAD,
//    SELWORD,
//    REPEAT,
    MUTE
};


#define MT_A LGUI_T(KC_A)
#define MT_S LALT_T(KC_S)
#define MT_D LSFT_T(KC_D)
#define MT_F LCTL_T(KC_F)

#define MT_J RCTL_T(KC_J)
#define MT_K RSFT_T(KC_K)
#define MT_L LALT_T(KC_L)
#define MT_LBRC RGUI_T(KC_LBRC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                  KC_6,           KC_7,   KC_8,    KC_9,    KC_0, KC_NUHS,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                  KC_Y,           KC_U,   KC_I,    KC_O,    KC_P, KC_SCLN,
    KC_LSFT,    MT_A,    MT_S,    MT_D,    MT_F,    KC_G,                                  KC_H,           MT_J,   MT_K,    MT_L, MT_LBRC, KC_RBRC,
    KC_LCTL, KC_NUBS,    KC_Z,    KC_X,    KC_C,    KC_V,         TG(7),           TG(8),  KC_B,           KC_N,   KC_M, KC_COMM,  KC_DOT, KC_QUOT,
                      KC_LGUI, KC_LALT,   MO(6),   MO(2),  LT(3,KC_SPC),   LT(4,KC_BSPC), TT(5), LT(6,KC_MINS), KC_EQL, KC_SLSH),

[_GAME] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7, KC_8,    KC_9,    KC_0, KC_NUHS,
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,    KC_U, KC_I,    KC_O,    KC_P, KC_SCLN,
    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                           KC_H,    KC_J, KC_K,    KC_L, KC_LBRC, KC_RBRC,
    KC_LCTL, KC_NUBS,    KC_Z,    KC_X,    KC_C,    KC_V, KC_TRNS,       KC_TRNS,   KC_B,    KC_N, KC_M, KC_COMM,  KC_DOT, KC_QUOT,
                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS,  KC_SPC,       KC_BSPC,  KC_NO, KC_TRNS, KC_EQL, KC_SLSH),

[_EDIT] = LAYOUT(
     KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
     KC_TAB, KC_PGUP, KC_HOME,   KC_UP,  KC_END,  KC_DEL,                        KC_PLUS, KC_RCBR, KC_LCBR, KC_CIRC, KC_UNDS,  KC_DEL,
    KC_LSFT, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, CAPSWRD,                         KC_EQL, KC_RPRN, KC_LPRN, KC_ASTR, KC_DQUO,  KC_ENT,
    KC_LCTL, KC_NUBS, KC_PAUS,  KC_INS, KC_PSCR,  KC_ENT, KC_TRNS,      KC_TRNS, KC_MINS, KC_RBRC, KC_LBRC, KC_SCLN, KC_NUBS,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,    KC_0, KC_MINS,  KC_EQL, KC_SLSH),

[_EQUATION] = LAYOUT(
     KC_GRV,         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
     KC_TAB,       KC_SLSH, KC_ASTR, KC_MINS, KC_PLUS, KC_CIRC,                       KC_PLUS,    KC_7,    KC_8,    KC_9, KC_UNDS,  KC_DEL,
    KC_LSFT, LSFT(KC_NUBS), KC_COLN,  KC_DOT, KC_COMM,  KC_EQL,                        KC_EQL,    KC_4,    KC_5,    KC_6, KC_DQUO,  KC_ENT,
    KC_LCTL,       KC_NUBS, KC_COLN,  KC_DOT, KC_COMM, KC_UNDS, KC_TRNS,     KC_TRNS, KC_MINS,    KC_1,    KC_2,    KC_3, KC_NUBS,  KC_ENT,
                            KC_LGUI, KC_LALT, KC_SLSH, KC_NUBS,  KC_SPC,     KC_TRNS,    KC_0, KC_RPRN, KC_LPRN, KC_SLSH),

[_SYMBOL] = LAYOUT(
     KC_GRV,       KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
     KC_TAB,       KC_PERC, KC_ASTR,  KC_DLR, KC_AMPR, KC_CIRC,                         KC_PLUS, KC_RCBR, KC_LCBR, KC_CIRC, KC_UNDS,  KC_DEL,
    KC_LSFT, LSFT(KC_NUBS),   KC_LT, KC_MINS,   KC_GT,  KC_EQL,                          KC_EQL, KC_RPRN, KC_LPRN, KC_ASTR, KC_DQUO,  KC_ENT,
    KC_LCTL,       KC_NUBS, KC_COLN,  KC_DOT, KC_COMM, KC_UNDS, KC_TRNS,       KC_TRNS, KC_MINS, KC_RBRC, KC_LBRC, KC_SCLN, KC_NUBS,  KC_ENT,
                            KC_LGUI, KC_LALT, KC_SLSH, KC_NUBS,  KC_SPC,       KC_TRNS, KC_TRNS, KC_MINS,  KC_EQL, KC_SLSH),

[_MOUSE] = LAYOUT(
     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DEL,
     KC_TAB, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS,  KC_DEL,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_DEL,
    KC_LSFT, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_ENT,
    KC_LCTL, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,  KC_ENT,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_ENT,
                      KC_LGUI, KC_LALT, KC_BTN3, KC_BTN2,  KC_BTN1,          KC_TRNS,   TG(5), KC_TRNS, KC_TRNS, KC_TRNS),

[_MEDIA] = LAYOUT(
     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TAB, KC_TRNS, KC_MSTP, KC_VOLU, KC_MPLY, KC_TRNS,                       KC_TRNS, KC_MPLY, KC_VOLU, KC_MSTP, KC_TRNS, KC_TRNS,
    KC_LSFT, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, KC_TRNS,                       KC_TRNS, KC_MNXT, KC_VOLD, KC_MPRV, KC_TRNS, KC_TRNS,
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_LGUI, KC_LALT, KC_MSTP,    MUTE, KC_MPLY,     KC_MPLY,    MUTE, KC_MSTP, KC_TRNS, KC_TRNS),

[_FUNCTION] = LAYOUT(
    KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[_NUMPAD] = LAYOUT(
     KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,  KC_NUM, KC_SLSH, KC_ASTR, KC_MINS, KC_TRNS,
     KC_TAB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,   KC_P7,   KC_P8,   KC_P9, KC_PLUS, KC_TRNS,
    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,   KC_P4,   KC_P5,   KC_P6, KC_COMM, KC_TRNS,
    KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,   KC_P1,   KC_P2,   KC_P3,  KC_EQL, KC_TRNS,
                      KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_P0,  KC_DOT, KC_TRNS, KC_TRNS),

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


#define NUM_LAYER_TIMEOUT 10000  //idle timeout in milliseconds

bool is_alt_tab_active = false; //alt tabbing on rotary encoder
uint16_t alt_tab_timer = 0;

bool is_ctrl_tab_active = false; //ctrl tabbing on rotary encoder
uint16_t ctrl_tab_timer = 0;

uint16_t tabbing_timeout = 1250;

void matrix_scan_user(void) {
    if (get_highest_layer(layer_state) == _NUMPAD) {
        if (last_input_activity_elapsed() > NUM_LAYER_TIMEOUT) {
            layer_off(_NUMPAD);
        }
    }
    else if (get_highest_layer(layer_state) == _FUNCTION) {
        if (last_input_activity_elapsed() > NUM_LAYER_TIMEOUT) {
            layer_off(_FUNCTION);
        }
    }
    else if (get_highest_layer(layer_state) == _MOUSE) {
        if (last_input_activity_elapsed() > NUM_LAYER_TIMEOUT) {
            layer_off(_MOUSE);
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

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPC):
        case LT(4, KC_BSPC):
//        case TT(6):
        case MT_A:
        case MT_S:
        case MT_D:
        case MT_F:
        case MT_J:
        case MT_K:
        case MT_L:
        case MT_LBRC:
            return true;
        default:
            return false;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPC):
            return true;
        case LT(4, KC_BSPC):
            return true;
        default:
            return false;
    }
}

/*
\\ has problems with arrow keys
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPC):
            return 100;
        case LT(4, KC_BSPC):
            return 100;
        default:
            return TAPPING_TERM;
    }
}

// has problems with spaces when typing quickly
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_SPC):
            return true;
        case LT(4, KC_BSPC):
            return true;
        default:
            return false;
    }
}
*/


enum combo_events {
    CAPSLOCK,
    SCROLLLOCK,
    HOMEROWMODTAPS,
    LESSTHAN,
    GREATERTHAN,
    L_EXPONENT,
    L_ASTERISK,
    L_COMMA,
    L_PLUS,
    L_EQUALS,
    L_MINUS,
    L_UNDERSCORE,
    L_DOT,
    BAR,
    AT,
    LEFTPAREN,
    RIGHTPAREN,
    R_EXPONENT,
    R_ASTERISK,
    R_COMMA,
    R_PLUS,
    R_EQUALS,
    R_MINUS,
    R_UNDERSCORE,
    R_DOT,
    COLON,
    SEMICOLON,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM capslock[] = {MT_D, MT_K, COMBO_END};
const uint16_t PROGMEM scrolllock[] = {MT_F, MT_J, COMBO_END};
const uint16_t PROGMEM homerowmodtaps[] = {KC_EQL, KC_SLSH, COMBO_END};

const uint16_t PROGMEM lessthan[] = {MT_S, KC_E, COMBO_END};
const uint16_t PROGMEM greaterthan[] = {KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_exponent[] = {MT_S, KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_asterisk[] = {MT_D, KC_C, COMBO_END};
const uint16_t PROGMEM l_comma[] = {MT_F, KC_V, COMBO_END};

//const uint16_t PROGMEM forwardslash[] = {MT_S, KC_E, KC_R, COMBO_END};
//const uint16_t PROGMEM backslash[] = {KC_W, KC_E, MT_F, COMBO_END};

const uint16_t PROGMEM l_equals[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM l_plus[] = {MT_D, MT_F, COMBO_END};
const uint16_t PROGMEM l_underscore[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM l_minus[] = {MT_F, KC_G, COMBO_END};
const uint16_t PROGMEM l_dot[] = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM bar[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM at[] = {KC_R, KC_G, COMBO_END};

//const uint16_t PROGMEM l_at[] = {KC_W, KC_E, KC_R, COMBO_END};
//const uint16_t PROGMEM [] = {MT_S, MT_D, MT_F, COMBO_END};

const uint16_t PROGMEM leftparen[] = {MT_J, KC_I, COMBO_END};
const uint16_t PROGMEM rightparen[] = {KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_exponent[] = {MT_J, KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_asterisk[] = {KC_N, MT_K, COMBO_END};
const uint16_t PROGMEM r_comma[] = {KC_B, MT_J, COMBO_END};

//const uint16_t PROGMEM dot[] = {MT_J, KC_I, KC_O, COMBO_END};
//const uint16_t PROGMEM comma[] = {KC_U, KC_I, MT_L, COMBO_END};

const uint16_t PROGMEM r_equals[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM r_plus[] = {MT_J, MT_K, COMBO_END};
const uint16_t PROGMEM r_underscore[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM r_minus[] = {KC_H, MT_J, COMBO_END};
const uint16_t PROGMEM r_dot[] = {KC_B, KC_N, COMBO_END};

const uint16_t PROGMEM colon[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM semicolon[] = {KC_H, KC_U, COMBO_END};

//const uint16_t PROGMEM r_at[] = {KC_U, KC_I, KC_O, COMBO_END};
//const uint16_t PROGMEM [] = {MT_J, MT_K, MT_L, COMBO_END};

/*
combo_t key_combos[] = {
    COMBO(capslock, KC_CAPS),
    COMBO(scrolllock, KC_SCRL),
    COMBO(homerowmodtaps, TG(1)),
    COMBO(lessthan, KC_LT),
    COMBO(greaterthan, KC_GT),
    COMBO(l_exponent, KC_CIRC),
    COMBO(l_asterisk, KC_ASTR),
    COMBO(at, LSFT(KC_QUOT)),
    COMBO(l_plus, KC_PLUS),
    COMBO(l_equals, KC_EQL),
    COMBO(l_minus, KC_MINS),
    COMBO(l_underscore, KC_UNDS),
    COMBO(deleteback, LCTL(KC_LEFT)),
    COMBO(leftparen, KC_LPRN),
    COMBO(rightparen, KC_RPRN),
    COMBO(r_exponent, KC_CIRC),
    COMBO(r_asterisk, KC_ASTR),
    COMBO(dot, KC_DOT),
    COMBO(r_plus, KC_PLUS),
    COMBO(r_equals, KC_EQL),
    COMBO(r_minus, KC_MINS),
    COMBO(r_underscore, KC_UNDS),
    COMBO(deleteforward, LCTL(KC_RIGHT)),
};
*/

combo_t key_combos[] = {
    [CAPSLOCK] = COMBO_ACTION(capslock),
    [SCROLLLOCK] = COMBO_ACTION(scrolllock),
    [HOMEROWMODTAPS] = COMBO_ACTION(homerowmodtaps),
    [LESSTHAN] = COMBO_ACTION(lessthan),
    [GREATERTHAN] = COMBO_ACTION(greaterthan),
    [L_EXPONENT] = COMBO_ACTION(l_exponent),
    [L_ASTERISK] = COMBO_ACTION(l_asterisk),
    [L_COMMA] = COMBO_ACTION(l_comma),
    [L_EQUALS] = COMBO_ACTION(l_equals),
    [L_PLUS] = COMBO_ACTION(l_plus),
    [L_UNDERSCORE] = COMBO_ACTION(l_underscore),
    [L_MINUS] = COMBO_ACTION(l_minus),
    [L_DOT] = COMBO_ACTION(l_dot),
    [AT] = COMBO_ACTION(bar),
    [BAR] = COMBO_ACTION(at),
    [LEFTPAREN] = COMBO_ACTION(leftparen),
    [RIGHTPAREN] = COMBO_ACTION(rightparen),
    [R_EXPONENT] = COMBO_ACTION(r_exponent),
    [R_ASTERISK] = COMBO_ACTION(r_asterisk),
    [R_COMMA] = COMBO_ACTION(r_comma),
    [R_EQUALS] = COMBO_ACTION(r_equals),
    [R_PLUS] = COMBO_ACTION(r_plus),
    [R_UNDERSCORE] = COMBO_ACTION(r_underscore),
    [R_MINUS] = COMBO_ACTION(r_minus),
    [R_DOT] = COMBO_ACTION(r_dot),
    [COLON] = COMBO_ACTION(colon),
    [SEMICOLON] = COMBO_ACTION(semicolon),
};


void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case CAPSLOCK:
            if (pressed) {
                tap_code(KC_CAPS);
            }
            break;
        case SCROLLLOCK:
            if (pressed) {
                tap_code(KC_SCRL);
            }
            break;
        case HOMEROWMODTAPS:
            if (pressed) {
                layer_invert(_GAME);
            }
            break;
        case LESSTHAN:
            if (pressed) {
                tap_code16(KC_LT);
            }
            break;
        case GREATERTHAN:
            if (pressed) {
                tap_code16(KC_GT);
            }
            break;
        case L_EXPONENT:
            if (pressed) {
                tap_code16(KC_CIRC);
            }
            break;
        case L_ASTERISK:
            if (pressed) {
                tap_code16(KC_ASTR);
            }
            break;
        case L_COMMA:
            if (pressed) {
                tap_code(KC_COMM);
            }
            break;
        case L_PLUS:
            if (pressed) {
                tap_code16(KC_PLUS);
            }
            break;
        case L_EQUALS:
            if (pressed) {
                tap_code(KC_EQL);
            }
            break;
        case L_UNDERSCORE:
            if (pressed) {
                tap_code16(KC_UNDS);
            }
            break;
        case L_MINUS:
            if (pressed) {
                tap_code(KC_MINS);
            }
            break;
        case L_DOT:
            if (pressed) {
                tap_code(KC_DOT);
            }
            break;
        case BAR:
            if (pressed) {
                tap_code16(S(KC_NUBS));
            }
            break;
        case AT:
            if (pressed) {
                tap_code16(S(KC_QUOT));
            }
            break;
        case LEFTPAREN:
            if (pressed) {
                tap_code16(KC_LPRN);
            }
            break;
        case RIGHTPAREN:
            if (pressed) {
                tap_code16(KC_RPRN);
            }
            break;
        case R_EXPONENT:
            if (pressed) {
                tap_code16(KC_CIRC);
            }
            break;
        case R_ASTERISK:
            if (pressed) {
                tap_code16(KC_ASTR);
            }
            break;
        case R_COMMA:
            if (pressed) {
                tap_code(KC_COMM);
            }
            break;
        case R_PLUS:
            if (pressed) {
                tap_code16(KC_PLUS);
            }
            break;
        case R_EQUALS:
            if (pressed) {
                tap_code(KC_EQL);
            }
            break;
        case R_UNDERSCORE:
            if (pressed) {
                tap_code16(KC_UNDS);
            }
            break;
        case R_MINUS:
            if (pressed) {
                tap_code(KC_MINS);
            }
            break;
        case R_DOT:
            if (pressed) {
                tap_code(KC_DOT);
            }
            break;
        case COLON:
            if (pressed) {
                tap_code16(KC_COLN);
            }
            break;
        case SEMICOLON:
            if (pressed) {
                tap_code(KC_SCLN);
            }
            break;
    }
}



bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case CAPSLOCK:
        case SCROLLLOCK:
        //left hand
        case LESSTHAN:
        case GREATERTHAN:
        case L_EXPONENT:
        case L_ASTERISK:
        case L_COMMA:
        case L_EQUALS:
        case L_PLUS:
        case L_MINUS:
        case L_UNDERSCORE:
        case L_DOT:
        //right hand
        case LEFTPAREN:
        case RIGHTPAREN:
        case R_EXPONENT:
        case R_ASTERISK:
        case R_COMMA:
        case R_EQUALS:
        case R_PLUS:
        case R_MINUS:
        case R_UNDERSCORE:
        case R_DOT:
            if (layer_state_is(_GAME) || layer_state_is(_EDIT) || layer_state_is(_SYMBOL) || layer_state_is(_MEDIA) || layer_state_is(_MOUSE)) {
                return false;
            }
            break;
        case HOMEROWMODTAPS:
            return true;
            break;
    }
    return true;
}




bool muted = false;
//#include "features/repeat_key.h"
//#include "features/select_word.h"
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
//    if (!process_select_word(keycode, record, REPEAT)) {
//        return false;
//    }
//    if (!process_select_word(keycode, record, SELWORD)) {
//        return false;
//    }
    switch (keycode) {
        case MUTE:
            if (record->event.pressed) {
                register_code(KC_MUTE);
                muted = !muted;
            } else {
                unregister_code(KC_MUTE);
            }
            break;
    }
    return true;
}


//layer_state_t layer_state_set_user(layer_state_t state) {
//    switch (get_highest_layer(state)) {
//        case _DEFAULT:
//            autoshift_enable();
//            break;
//        default:
//            autoshift_disable();
//            break;
//    }
//    return state;
//}



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


static void print_status_narrow(void) {
    // Print current mode
//    oled_write_ln_P(PSTR("MODE"), false);
//    oled_write_ln_P(PSTR(""), false);
//    if (keymap_config.swap_lctl_lgui) {
//        oled_write_ln_P(PSTR("MAC"), false);
//    } else {
//        oled_write_ln_P(PSTR("WIN"), false);
    //    }

    // wpm counter 
    //oled_write_ln_P(PSTR("WPM\n"), false);
    uint8_t n = get_current_wpm();
    char    wpm_str[4];
    oled_set_cursor(0, 0);//column, row
    wpm_str[3] = '\0';
    wpm_str[2] = '0' + n % 10;
    wpm_str[1] = '0' + (n /= 10) % 10;
    wpm_str[0] = '0' + n / 10;
    oled_write(wpm_str, false);




    oled_write_P(PSTR("\n_____\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _DEFAULT:
            oled_write_P(PSTR("Std.\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("Basic"), false);
            break;
//        case _NAVIGATION:
//            oled_write_P(PSTR("Nav.\n"), false);
//            break;
        case _EQUATION:
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
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("_____\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(PSTR("CPSLK"), led_usb_state.caps_lock);
    oled_write_P(PSTR("NUMLK"), led_usb_state.num_lock);
    oled_write_P(PSTR("SCRLK"), led_usb_state.scroll_lock);
    
    oled_write_P(PSTR("MUTED"), muted);

    oled_write_P(PSTR("_____\n"), false);
    oled_write_P(PSTR("G"), (get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI) || (get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI));
    oled_write_P(PSTR("A"), (get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT) || (get_mods() & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT));
    oled_write_P(PSTR("S"), (get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT) || (get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT));
    oled_write_P(PSTR("C"), (get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL));
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
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
            case _EQUATION:
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
                } else {
                    tap_code(KC_VOLD);
                }
        }
    } else if (index == 1) {
        switch (get_highest_layer(layer_state)){
            case _EDIT:
            case _EQUATION:
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
    return true;
}

#endif

