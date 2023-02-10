// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2
#define _MK 3
#define _FC 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    KC_ESC, KC_TAB, KC_LGUI,  KC_LSFT, KC_BSPC,  MO(_RS), KC_LCTL, KC_SPC,  KC_LALT, KC_MINS, KC_EQUAL, KC_ENT
  ),

  /*
   *  1       2     3     4    5         ||       6     7     8     9    0
   *                  function           ||     left   down  up   right  
   *              copy  paste  undo      ||                                     
   * lower  insert cap search mark       ||               
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
      KC_1 ,  KC_2,    KC_3,    KC_4 ,   KC_5  ,                     KC_6  , KC_7 ,    KC_8,   KC_9, KC_0 ,
    _______, _______, _______, MO(_FC), _______,                    KC_LEFT,KC_DOWN, KC_UP, KC_RIGHT,_______,
    _______, _______, KC_COPY, KC_PSTE, KC_UNDO,                   _______,_______,_______,_______,_______,
    MO(_LW), KC_INS,  KC_CAPS, KC_WSCH, MO(_MK), _______,_______, _______, _______,_______,_______,_______ ),
  /*
   *                            RESET    ||                                     
   *                                     ||                                     
   *                                     ||                                     
   *                                     ||                                     
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    _______, _______,_______,  RESET , _______,                   _______, _______, _______, _______, _______  ,
    _______, _______,_______, _______, _______,                   _______, _______, _______, _______, _______  ,
    _______, _______,_______, _______, _______,                   _______, _______, _______, _______, _______  ,
    _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______ ),


/*
   *    !     @     #     $     %    ||   ^    &    *    (    )                      
   *    `     {     [     ]     }    ||                  '    "             
   *    ~                 \     |    ||                                     
   *                                 ||                                     
   */


  [_MK] = LAYOUT( /* [> MARK <] */
    KC_EXLM,  KC_AT ,KC_HASH, KC_DLR, KC_PERC,                    KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN  ,
    KC_GRV , KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR,                  _______, _______, _______, KC_QUOT, KC_DQUO,
    KC_TILD, _______, _______, KC_BSLS, KC_PIPE,                   _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ ),

/*
   *   f1    f2    f3     f4     f5    ||   f6    f7    f8   f9   f10                      
   *   f11   f12                       ||                                       
   *                                   ||                                     
   *                                   ||                                     
   */


  [_FC] = LAYOUT( /* [> FUNCTION <] */
     KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,  KC_F5 ,                    KC_F6 , KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
     KC_F11, KC_F12 , _______, _______, _______,                   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______ ,
    _______, _______, _______, _______, _______,                   _______, KC_MUTE, KC_MPLY, _______, _______ ,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  ),
};
