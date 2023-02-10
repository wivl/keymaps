#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_GRAVE,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BACKSLASH,
                         KC_APP,KC_WSCH,                                                       KC_LBRC, KC_RBRC,
                                         KC_LCMD,KC_SPC,                        KC_ENTER, KC_EQUAL,
                                         KC_LSFT,LOWER,                         RAISE,  KC_BACKSPACE,
                                         KC_RIGHT, KC_LEFT_CTRL,                KC_LEFT_CTRL, KC_LALT
    ),

    [_LOWER] = LAYOUT_5x6(
        _______,DM_PLY1,DM_PLY2,_______,_______,_______,                        DM_REC1,DM_REC2,DM_RSTP,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

    ),

    [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
          _______,_______,_______,_______,_______,KC_MPLY,      

                            KC_MPRV,KC_VOLD,KC_VOLU,KC_MNXT,_______,_______,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    )
};
