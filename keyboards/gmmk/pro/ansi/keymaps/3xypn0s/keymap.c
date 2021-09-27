/* Copyright 2021 3xypn0s
 
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
 
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include QMK_KEYBOARD_H
#include "rgb_matrix_map.h"
#include "custom_keymap.h"

// clang-format off

// LAYERS
enum custom_user_layers {
    BLAN,       // Base Layer ANSI Keyboard and ANSI Layout configured in OS
    BLMA,       // Base Layer ANSI Keyboard and ANSI Layout configured in MacOS
    BLAI,       // Base Layer ANSI Keyboard and ISO (-GER) Layout configured in OS
    BMAI,       // Base Layer ANSI Keyboard and ISO (-GER) Layout configured in MacOS
    YZAI,       // Extra Layer for BLAI with switch y and z key
    WORK,       // Extra Layer for Work
    NMPD,       // NumPad Layer
    FLAN,       // FN   Layer ANSI Keyboard and ANSI Layout configured in OS
    FLMA,       // Fn   Layer ANSI Keyboard and ANSI Layout configured in MacOS
    FNAI,       // FN   Layer ANSI Keyboard and ISO (-GER) Layout configured in OS
    FMAI,       // FN   Layer ANSI Keyboard and ISO (-GER) Layout configured in MacOS
    FNLY,       // FN   Layer for switching layers
    REST,       // Reset Layer
};

// KEYCODES
enum custom_user_keycodes {
    KC_00 = SAFE_RANGE,
    KC_WINLCK,      //Toggles Win key on and off
    RGC_NITE,       // Turns off all rgb but allow rgb indicators to work
    RGC_MAKC,       // Activates rgb match keycaps mode
    RGC_SOWL,       // Show Layer State by LED (if RGB is on)
    RGN_TOG,        // Toggle RGB lighting on or off, but without write to EEPROM rgb_matrix_toggle_noeeprom()
    SL_BLAN,        // Set start_layer to BLAN
    SL_BLMA,        // Set start_layer to BLMA
    SL_BLAI,        // Set start_layer to BLAI
    SL_BMAI         // Set start_layer to BMAI
};

// User settings for EEPROM
typedef union {
  uint32_t raw;
  struct {
      uint8_t start_layer : 8;
  };
} user_config_t;

user_config_t user_config;

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//      ESC       F1        F2        F3        F4        F5        F6        F7        F8        F9        F10       F11       F12       Ins             Rotary(Mute)
//      ~         1         2         3         4         5         6         7         8         9         0          -        (=)       BackSpc             Del
//      Tab       Q         W         E         R         T         Y         U         I         O         P         [         ]         \                   PgUp
//      Caps      A         S         D         F         G         H         J         K         L         ;         "                   Enter               PgDn
//      Sh_L                Z         X         C         V         B         N         M         ,         .         ?                   Sh_R      Up        End
//      Ct_L      Win_L     Alt_L                                   SPACE                                   Alt_R     FN        Ct_R      Left      Down      Right
	
    [BLAN] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
LT(FLAN,KC_CAPS), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_PGDN,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(FLAN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
                 )
    
    ,[BLMA] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   MK_INS,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
LT(FLMA,KC_CAPS), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_PGDN,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    MK_END,
        KC_LCTL,  KC_LCMD,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(FLMA), KC_RCMD,  KC_LEFT,  KC_DOWN,  KC_RGHT
                 )
    
    ,[BLAI] = LAYOUT(
        AI_ESC,   AI_F1,    AI_F2,    AI_F3,    AI_F4,    AI_F5,    AI_F6,    AI_F7,    AI_F8,    AI_F9,    AI_F10,   AI_F11,   AI_F12,   AI_INS,             AI_MUTE,
        AI_GRV,   AI_1,     AI_2,     AI_3,     AI_4,     AI_5,     AI_6,     AI_7,     AI_8,     AI_9,     AI_0,     AI_MINS,  AI_EQL,   AI_BSPC,            AI_DEL,
        AI_TAB,   AI_Q,     AI_W,     AI_E,     AI_R,     AI_T,     AI_Y,     AI_U,     AI_I,     AI_O,     AI_P,     AI_LBRC,  AI_RBRC,  AI_BSLS,            AI_PGUP,
LT(FNAI,AI_CAPS), AI_A,     AI_S,     AI_D,     AI_F,     AI_G,     AI_H,     AI_J,     AI_K,     AI_L,     AI_SCLN,  AI_QUOT,            AI_ENT,             AI_PGDN,
        AI_LSFT,            AI_Z,     AI_X,     AI_C,     AI_V,     AI_B,     AI_N,     AI_M,     AI_COMM,  AI_DOT,   AI_SLSH,            AI_RSFT,  AI_UP,    AI_END,
        AI_LCTL,  AI_LGUI,  AI_LALT,                                AI_SPC,                                 AI_RALT,  MO(FNAI), AI_RCTL,  AI_LEFT,  AI_DOWN,  AI_RGHT
                 )
    
    ,[BMAI] = LAYOUT(
        MA_ESC,   MA_F1,    MA_F2,    MA_F3,    MA_F4,    MA_F5,    MA_F6,    MA_F7,    MA_F8,    MA_F9,    MA_F10,   MA_F11,   MA_F12,   MA_INS,             MA_MUTE,
        MA_GRV,   MA_1,     MA_2,     MA_3,     MA_4,     MA_5,     MA_6,     MA_7,     MA_8,     MA_9,     MA_0,     MA_MINS,  MA_EQL,   MA_BSPC,            MA_DEL,
        MA_TAB,   MA_Q,     MA_W,     MA_E,     MA_R,     MA_T,     MA_Y,     MA_U,     MA_I,     MA_O,     MA_P,     MA_LBRC,  MA_RBRC,  MA_BSLS,            MA_PGUP,
LT(FMAI,MA_CAPS), MA_A,     MA_S,     MA_D,     MA_F,     MA_G,     MA_H,     MA_J,     MA_K,     MA_L,     MA_SCLN,  MA_QUOT,            MA_ENT,             MA_PGDN,
        MA_LSFT,            MA_Z,     MA_X,     MA_C,     MA_V,     MA_B,     MA_N,     MA_M,     MA_COMM,  MA_DOT,   MA_SLSH,            MA_RSFT,  MA_UP,    MA_END,
        MA_LCTL,  MA_LGUI,  MA_LALT,                                MA_SPC,                                 MA_RALT,  MO(FMAI), MA_RCTL,  MA_LEFT,  MA_DOWN,  MA_RGHT
                 )
    
    ,[YZAI] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  AI_Z,     _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            AI_Y,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______
                 )
    
    ,[WORK] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  LCA(KC_DEL), _______, _______, _______
                 )
    
    ,[NMPD] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_NLCK,            _______,
        TG(NMPD), XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_P7,    KC_P8,    KC_P9,    KC_P0,    KC_PMNS,  KC_PPLS,  _______,            _______,
        _______,  KC_HOME,  KC_UP,    KC_PGUP,  KC_INS,   XXXXXXX,  KC_TAB,   KC_P4,    KC_P5,    KC_P6,    KC_PDOT,  XXXXXXX,  XXXXXXX,  KC_INS,             _______,
        _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_DEL,   XXXXXXX,  XXXXXXX,  KC_P1,    KC_P2,    KC_P3,    XXXXXXX,  KC_PAST,            KC_PENT,            _______,
        _______,            KC_END,   KC_PGDN,  KC_INS,   XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_P0,    KC_00,    KC_PDOT,  KC_PSLS,            KC_INS,  RCTL(KC_PGUP), _______,
        _______,  _______,  _______,                                KC_BSPC,                                _______,  _______,  _______,  RCTL(KC_LEFT), RCTL(KC_PGDN), RCTL(KC_RIGHT)
        )
    
	,[FLAN] = LAYOUT(
        _______,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_F23,   KC_F24,   _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            KC_INS,
        _______,  _______,  TO(BLAN), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,              _______,
        _______,  RGN_TOG,  RGC_SOWL, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            RGC_NITE, RGC_MAKC, _______,  _______,  _______,  NK_TOGG,  TO(BLMA), _______,  _______,  _______,            _______,  KC_PGUP,  KC_HOME,
        _______,  _______,  _______,                                _______,                                MO(FNLY), _______,  MO(REST), KC_HOME,  KC_PGDN,  KC_END
                 )
    
	,[FLMA] = LAYOUT(
        _______,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,            MK_INS,
        _______,  _______,  TO(BLAN), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,              _______,
        _______,  RGN_TOG,  RGC_SOWL, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            RGC_NITE, RGC_MAKC, _______,  _______,  _______,  NK_TOGG,  TO(BLMA), _______,  _______,  _______,            _______,  G(KC_UP), MK_HOME,
        _______,  _______,  _______,                                _______,                                MO(FNLY), _______,  MO(REST), MK_HOME,  G(KC_DOWN), MK_END
                 )
    
	,[FNAI] = LAYOUT(
        _______,  AI_F13,   AI_F14,   AI_F15,   AI_F16,   AI_F17,   AI_F18,   AI_F19,   AI_F20,   AI_F21,   AI_F22,   AI_F23,   AI_F24,   _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  AI_MUTE,  AI_VOLD,  AI_VOLU,  _______,            AI_INS,
        _______,  _______,  TO(BLAI), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,              _______,
        _______,  RGN_TOG,  RGC_SOWL, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            RGC_NITE, RGC_MAKC, _______,  _______,  _______,  NK_TOGG,  TO(BMAI), _______,  _______,  _______,            _______,  AI_PGUP,  KC_HOME,
        _______,  _______,  _______,                                _______,                                MO(FNLY), _______,  MO(REST), KC_HOME,  AI_PGDN,  AI_END
                 )
    
    ,[FMAI] = LAYOUT(
        _______,  AI_F13,   AI_F14,   AI_F15,   AI_F16,   AI_F17,   AI_F18,   AI_F19,   AI_F20,   _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  AI_MUTE,  AI_VOLD,  AI_VOLU,  _______,            MA_INS,
        _______,  _______,  TO(BLAI), _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,              _______,
        _______,  RGN_TOG,  RGC_SOWL, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            RGC_NITE, RGC_MAKC, _______,  _______,  _______,  NK_TOGG,  TO(BMAI), _______,  _______,  _______,            _______,  G(MA_UP), MA_HOME,
        _______,  _______,  _______,                                _______,                                MO(FNLY), _______,  MO(REST), MA_HOME,  G(KC_DOWN), MA_END
                 )
    
    ,[FNLY] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
        XXXXXXX,  TO(BLAN), TO(BLMA), TO(BLAI), TO(BMAI), TG(YZAI), TG(WORK), TG(NMPD), XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
        XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,            XXXXXXX,
        XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
                 )
    
    ,[REST] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  TO(BLAN),           XXXXXXX,
        XXXXXXX,  SL_BLAN,  SL_BLMA,  SL_BLAI,  SL_BMAI,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  EEP_RST,            XXXXXXX,
        XXXXXXX,  SL_BLAN,  SL_BLMA,  SL_BLAI,  SL_BMAI,  XXXXXXX,  NK_ON,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RESET,              CK_KOON,
        XXXXXXX,  RGB_TOG,  RGB_VAI,  RGB_SPI,  RGB_HUI,  XXXXXXX,  NK_OFF,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            DEBUG,              CK_KOOF,
        XXXXXXX,            BL_TOGG,  RGB_VAD,  RGB_SPD,  RGB_HUD,  XXXXXXX,  NK_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  RGB_MOD,  CK_KOTG,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                _______,  _______,  _______,  RGB_VAD,  RGB_RMOD, RGB_VAI
                 )
    /*
    ,[EMPTY] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______
                 )
                 */
    
};
// clang-format on


#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_WH_U);
    } else {
        tap_code(KC_WH_D);
    }
    return true;
}
#endif // ENCODER_ENABLE


/*
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        if (keyboard_report->mods & MOD_BIT(KC_LALT) ) {        // If you are holding L alt, Page down
            unregister_mods(MOD_BIT(KC_LALT));
            tap_code(KC_PGDN);
            register_mods(MOD_BIT(KC_LALT));
        } else if (keyboard_report->mods & MOD_BIT(KC_LSFT) ) { // If you are holding L shift, Tap right
            unregister_mods(MOD_BIT(KC_LSFT));
            tap_code(KC_RGHT);
            register_mods(MOD_BIT(KC_LSFT));
        } else if (keyboard_report->mods & MOD_BIT(KC_LCTL)) {  // if holding Left Ctrl, navigate next word
            tap_code16(LCTL(KC_RGHT));
        } else {                                                // vol up
            tap_code(KC_VOLU);
        }
    } else {
        if (keyboard_report->mods & MOD_BIT(KC_LALT) ) {        // If you are holding L alt, Page up
            unregister_mods(MOD_BIT(KC_LALT));
            tap_code(KC_PGUP);
            register_mods(MOD_BIT(KC_LALT));
        } else if (keyboard_report->mods & MOD_BIT(KC_LSFT) ) { // If you are holding L shift, Tap left
            unregister_mods(MOD_BIT(KC_LSFT));
            tap_code(KC_LEFT);
            register_mods(MOD_BIT(KC_LSFT));
        } else if (keyboard_report->mods & MOD_BIT(KC_LCTL)) {  // if holding Left Ctrl, navigate next word
            tap_code16(LCTL(KC_LEFT));
        } else {                                                // vol down
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif // ENCODER_ENABLE
*/


// RGB NIGHT MODE
#ifdef RGB_MATRIX_ENABLE
static bool rgb_nightmode = false;
static bool rgb_layer_state = true;
static bool rgb_match_keycaps_gpbt_pastel = false;

void activate_rgb_nightmode (bool turn_on) {
    if (rgb_nightmode != turn_on) {
        rgb_nightmode = !rgb_nightmode;
    }
}

void activate_rgb_layer_state (bool turn_on) {
    if (rgb_layer_state != turn_on) {
        rgb_layer_state = !rgb_layer_state;
    }
}

void activate_rgb_match_gpbt_pastel (bool turn_on) {
    if (rgb_match_keycaps_gpbt_pastel != turn_on) {
        rgb_match_keycaps_gpbt_pastel = !rgb_match_keycaps_gpbt_pastel;
    }
}

bool get_rgb_nightmode(void) {
    return rgb_nightmode;
}

bool get_rgb_layer_state(void) {
    return rgb_layer_state;
}
    
bool get_rgb_match_gpbt_pastel(void) {
    return rgb_match_keycaps_gpbt_pastel;
}
#endif // RGB_MATRIX_ENABLE

#ifdef RGB_MATRIX_ENABLE
    void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        if (get_rgb_nightmode()) {
            rgb_matrix_set_color_all(RGB_OFF);
        } else {
            if (get_rgb_match_gpbt_pastel()) {
                for (uint8_t i=0; i<ARRAYSIZE(LED_KEYCAPS_GPBT_PASTEL_BLUE); i++) {
                    rgb_matrix_set_color(LED_KEYCAPS_GPBT_PASTEL_BLUE[i], RGB_GP_BLUE);
                }
                for (uint8_t i=0; i<ARRAYSIZE(LED_KEYCAPS_GPBT_PASTEL_GREEN); i++) {
                    rgb_matrix_set_color(LED_KEYCAPS_GPBT_PASTEL_GREEN[i], RGB_GP_GREEN);
                }
                for (uint8_t i=0; i<ARRAYSIZE(LED_KEYCAPS_GPBT_PASTEL_RED); i++) {
                    rgb_matrix_set_color(LED_KEYCAPS_GPBT_PASTEL_RED[i], RGB_GP_RED);
                }
            }
        }
        
        if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
            rgb_matrix_set_color(LED_CAPS, RGB_CORAL);
            rgb_matrix_set_color(LED_LSFT, RGB_CORAL);
            rgb_matrix_set_color(LED_LCTL, RGB_CORAL);
        }
        
        if (get_rgb_layer_state()) {
            switch(get_highest_layer(layer_state)){  // special handling per layer
                case BLAN:
                    break;
                case BLMA:
                    break;
                case FLAN:
                    break;
                case FLMA:
                    break;
                case BLAI:
                    break;
                case BMAI:
                    break;
                case YZAI:
                    break;
                case WORK:
                    break;
                case FNAI:
                    break;
                case FMAI:
                    break;
                case FNLY:
                    rgb_matrix_set_color_all(RGB_OFF);
                    break;
                case NMPD:
                    for (uint8_t i=0; i<ARRAYSIZE(LED_LIST_NUMPAD); i++) {
                        rgb_matrix_set_color(LED_LIST_NUMPAD[i], RGB_MAGENTA);
                    }
                    rgb_matrix_set_color(LED_INS, RGB_MAGENTA);
                    break;
                case REST:
                    rgb_matrix_set_color_all(RGB_OFF);
                    for (uint8_t i=0; i<ARRAYSIZE(LED_SIDE_RIGHT); i++) {
                        rgb_matrix_set_color(LED_SIDE_RIGHT[i], RGB_RED);
                    }
                    for (uint8_t i=0; i<ARRAYSIZE(LED_SIDE_LEFT); i++) {
                        rgb_matrix_set_color(LED_SIDE_LEFT[i], RGB_RED);
                    }
                    // Show active start_layer
                    switch(user_config.start_layer) {
                        case BLAN:
                            rgb_matrix_set_color(LED_Q, RGB_GREEN);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BLMA:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_GREEN);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BLAI:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_GREEN);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BMAI:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_GREEN);
                            break;
                        default:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                    }
                    break;
                default:
                    break;
            }
            
            show_layer_by_rgb();
        } else {
            switch(get_highest_layer(layer_state)){
                case FNLY:
                    rgb_matrix_set_color_all(RGB_OFF);
                    show_layer_by_rgb();
                    break;
                case REST:
                    rgb_matrix_set_color_all(RGB_OFF);
                    show_layer_by_rgb();
                    for (uint8_t i=0; i<ARRAYSIZE(LED_SIDE_RIGHT); i++) {
                        rgb_matrix_set_color(LED_SIDE_RIGHT[i], RGB_RED);
                    }
                    for (uint8_t i=0; i<ARRAYSIZE(LED_SIDE_LEFT); i++) {
                        rgb_matrix_set_color(LED_SIDE_LEFT[i], RGB_RED);
                    }
                    // Show active start_layer
                    switch(user_config.start_layer) {
                        case BLAN:
                            rgb_matrix_set_color(LED_Q, RGB_GREEN);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BLMA:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_GREEN);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BLAI:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_GREEN);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                        case BMAI:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_GREEN);
                            break;
                        default:
                            rgb_matrix_set_color(LED_Q, RGB_RED);
                            rgb_matrix_set_color(LED_W, RGB_RED);
                            rgb_matrix_set_color(LED_E, RGB_RED);
                            rgb_matrix_set_color(LED_R, RGB_RED);
                            break;
                    }
                    break;
                default:
                    break;
            }
        }
    }
#endif // RGB_MATRIX_ENABLE


// PROCESS KEY CODES
__attribute__ ((weak))  bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keymap(keycode, record)) { return false; }
     switch (keycode) {
        case KC_00:
            if (record->event.pressed) {
                // when keycode KC_00 is pressed
                SEND_STRING("00");
            } else unregister_code16(keycode);
            break;
        case KC_WINLCK:
            if (record->event.pressed) {
                keymap_config.no_gui = !keymap_config.no_gui; //toggle status
            } else  unregister_code16(keycode);
            break;
         case SL_BLAN:
             if (record->event.pressed) {
                 set_start_layer(BLAN); // Set start_layer to BLAN
             } else  unregister_code16(keycode);
             break;
         case SL_BLMA:
             if (record->event.pressed) {
                 set_start_layer(BLMA); // Set start_layer to BLMA
             } else  unregister_code16(keycode);
             break;
         case SL_BLAI:
             if (record->event.pressed) {
                 set_start_layer(BLAI); // Set start_layer to BLAI
             } else  unregister_code16(keycode);
             break;
         case SL_BMAI:
             if (record->event.pressed) {
                 set_start_layer(BMAI); // Set start_layer to BMAI
             } else  unregister_code16(keycode);
             break;
#ifdef RGB_MATRIX_ENABLE
        case RGC_NITE:
            if(record->event.pressed) {
                rgb_nightmode = !rgb_nightmode;
            } else  unregister_code16(keycode);
            break;
         case RGC_MAKC:
             if(record->event.pressed) {
                 rgb_match_keycaps_gpbt_pastel = !rgb_match_keycaps_gpbt_pastel;
             } else  unregister_code16(keycode);
             break;
        case RGC_SOWL:
             if(record->event.pressed) {
                 rgb_layer_state = !rgb_layer_state;
             } else  unregister_code16(keycode);
             break;
         case RGN_TOG:
              if(record->event.pressed) {
                  rgb_matrix_toggle_noeeprom();     // Toggle effect range LEDs between on and off (not written to EEPROM)
              } else  unregister_code16(keycode);
              break;
#endif // RGB_MATRIX_ENABLE
    default:
             /*
              // Activates RGB every KeyPress
        if (record->event.pressed) {
            #ifdef RGB_MATRIX_ENABLE
                rgb_matrix_enable();
            #endif
        }
              */
        break;
    }
    return true;
};



// Key Overrides based in custom keycodes in file 'keymap.h'
// ko_make_with_layers(modifiers, key, replacement, layers)
// ko_make_basic(modifiers, key, replacement)
// Overrides for 'AI_' custom keycodes, Keyboard Layout ANSI but ISO German is configured on computer
// Shift Key Override
const key_override_t ai_grv_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, AI_GRV, AIS_GRV, (1 << BLAI));
const key_override_t ai_2_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_2, AIS_2, (1 << BLAI));
const key_override_t ai_3_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_3, AIS_3, (1 << BLAI));
const key_override_t ai_6_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_6, AIS_6, (1 << BLAI));
const key_override_t ai_7_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_7, AIS_7, (1 << BLAI));
const key_override_t ai_8_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_8, AIS_8, (1 << BLAI));
const key_override_t ai_9_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_9, AIS_9, (1 << BLAI));
const key_override_t ai_0_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, AI_0, AIS_0, (1 << BLAI));
const key_override_t ai_mins_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_MINS, AIS_MINS, (1 << BLAI));
const key_override_t ai_eql_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, AI_EQL, AIS_EQL, (1 << BLAI));

const key_override_t ai_lbrc_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_LBRC, AIS_LBRC, (1 << BLAI));
const key_override_t ai_rbrc_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_RBRC, AIS_RBRC, (1 << BLAI));
const key_override_t ai_bsls_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_BSLS, AIS_BSLS, (1 << BLAI));

const key_override_t ai_scln_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_SCLN, AIS_SCLN, (1 << BLAI));
const key_override_t ai_quot_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_QUOT, AIS_QUOT, (1 << BLAI));

const key_override_t ai_comm_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_COMM, AIS_COMM, (1 << BLAI));
const key_override_t ai_dot_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, AI_DOT, AIS_DOT, (1 << BLAI));
const key_override_t ai_slsh_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, AI_SLSH, AIS_SLSH, (1 << BLAI));

// AltGr Key Override
const key_override_t ai_grv_altgr_key_override  = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_GRV, AIAG_GRV, (1 << BLAI));
const key_override_t ai_1_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_1, AIAG_1, (1 << BLAI));
const key_override_t ai_2_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_2, AIAG_2, (1 << BLAI));
const key_override_t ai_3_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_3, AIAG_3, (1 << BLAI));

//const key_override_t ai_q_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_Q, AIAG_Q, (1 << BLAI));
//const key_override_t ai_e_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_E, AIAG_E, (1 << BLAI));
const key_override_t ai_u_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_U, AIAG_U, (1 << BLAI));
const key_override_t ai_o_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_O, AIAG_O, (1 << BLAI));

const key_override_t ai_a_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_A, AIAG_A, (1 << BLAI));
const key_override_t ai_s_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), AI_S, AIAG_S, (1 << BLAI));


// Shift Key Override MacOS
const key_override_t ma_grv_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, MA_GRV, MAS_GRV, (1 << BMAI));
const key_override_t ma_2_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_2, MAS_2, (1 << BMAI));
const key_override_t ma_3_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_3, MAS_3, (1 << BMAI));
const key_override_t ma_6_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_6, MAS_6, (1 << BMAI));
const key_override_t ma_7_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_7, MAS_7, (1 << BMAI));
const key_override_t ma_8_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_8, MAS_8, (1 << BMAI));
const key_override_t ma_9_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_9, MAS_9, (1 << BMAI));
const key_override_t ma_0_shift_key_override    = ko_make_with_layers(MOD_MASK_SHIFT, MA_0, MAS_0, (1 << BMAI));
const key_override_t ma_mins_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_MINS, MAS_MINS, (1 << BMAI));
const key_override_t ma_eql_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, MA_EQL, MAS_EQL, (1 << BMAI));

const key_override_t ma_lbrc_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_LBRC, MAS_LBRC, (1 << BMAI));
const key_override_t ma_rbrc_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_RBRC, MAS_RBRC, (1 << BMAI));
const key_override_t ma_bsls_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_BSLS, MAS_BSLS, (1 << BMAI));

const key_override_t ma_scln_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_SCLN, MAS_SCLN, (1 << BMAI));
const key_override_t ma_quot_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_QUOT, MAS_QUOT, (1 << BMAI));

const key_override_t ma_comm_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_COMM, MAS_COMM, (1 << BMAI));
const key_override_t ma_dot_shift_key_override  = ko_make_with_layers(MOD_MASK_SHIFT, MA_DOT, MAS_DOT, (1 << BMAI));
const key_override_t ma_slsh_shift_key_override = ko_make_with_layers(MOD_MASK_SHIFT, MA_SLSH, MAS_SLSH, (1 << BMAI));

// AltGr Key Override MacOS
const key_override_t ma_grv_altgr_key_override  = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_GRV, MAAG_GRV, (1 << BMAI));
const key_override_t ma_1_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_1, MAAG_1, (1 << BMAI));
//const key_override_t ma_2_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_2, MAAG_2, (1 << BMAI));
//const key_override_t ma_3_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_3, MAAG_3, (1 << BMAI));

const key_override_t ma_q_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_Q, MAAG_Q, (1 << BMAI));
//const key_override_t ma_e_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_E, MAAG_E, (1 << BMAI));
const key_override_t ma_u_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_U, MAAG_U, (1 << BMAI));
const key_override_t ma_o_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_O, MAAG_O, (1 << BMAI));

const key_override_t ma_a_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_A, MAAG_A, (1 << BMAI));
const key_override_t ma_s_altgr_key_override    = ko_make_with_layers(MOD_BIT(KC_ALGR), MA_S, MAAG_S, (1 << BMAI));


// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &ai_grv_shift_key_override,
    &ai_2_shift_key_override,
    &ai_3_shift_key_override,
    &ai_6_shift_key_override,
    &ai_7_shift_key_override,
    &ai_8_shift_key_override,
    &ai_9_shift_key_override,
    &ai_0_shift_key_override,
    &ai_mins_shift_key_override,
    &ai_eql_shift_key_override,
    &ai_lbrc_shift_key_override,
    &ai_rbrc_shift_key_override,
    &ai_bsls_shift_key_override,
    &ai_scln_shift_key_override,
    &ai_quot_shift_key_override,
    &ai_comm_shift_key_override,
    &ai_dot_shift_key_override,
    &ai_slsh_shift_key_override,
    &ai_grv_altgr_key_override,
    &ai_1_altgr_key_override,
    &ai_2_altgr_key_override,
    &ai_3_altgr_key_override,
    //&ai_q_altgr_key_override,
    //&ai_e_altgr_key_override,
    &ai_u_altgr_key_override,
    &ai_o_altgr_key_override,
    &ai_a_altgr_key_override,
    &ai_s_altgr_key_override,
    &ma_grv_shift_key_override,
    &ma_2_shift_key_override,
    &ma_3_shift_key_override,
    &ma_6_shift_key_override,
    &ma_7_shift_key_override,
    &ma_8_shift_key_override,
    &ma_9_shift_key_override,
    &ma_0_shift_key_override,
    &ma_mins_shift_key_override,
    &ma_eql_shift_key_override,
    &ma_lbrc_shift_key_override,
    &ma_rbrc_shift_key_override,
    &ma_bsls_shift_key_override,
    &ma_scln_shift_key_override,
    &ma_quot_shift_key_override,
    &ma_comm_shift_key_override,
    &ma_dot_shift_key_override,
    &ma_slsh_shift_key_override,
    &ma_grv_altgr_key_override,
    &ma_1_altgr_key_override,
    &ma_q_altgr_key_override,
    &ma_u_altgr_key_override,
    &ma_o_altgr_key_override,
    &ma_a_altgr_key_override,
    &ma_s_altgr_key_override,
    NULL // Null terminate the array of overrides!
};


void show_layer_by_rgb(void) {
    
    #ifdef RGB_MATRIX_ENABLE
        if (IS_LAYER_ON(BLAN)) {
            rgb_matrix_set_color(LED_1, RGB_SPRINGGREEN);
        }

        if (IS_LAYER_ON(FLAN)) {
            rgb_matrix_set_color(LED_F1, RGB_SPRINGGREEN);
        }

        if (IS_LAYER_ON(BLMA)) {
            rgb_matrix_set_color(LED_2, RGB_SPRINGGREEN);
        }

        if (IS_LAYER_ON(FLMA)) {
            rgb_matrix_set_color(LED_F2, RGB_SPRINGGREEN);
        }

        if (IS_LAYER_ON(BLAI)) {
            rgb_matrix_set_color(LED_3, RGB_AZURE);
        }

        if (IS_LAYER_ON(FNAI)) {
            rgb_matrix_set_color(LED_F3, RGB_AZURE);
        }

        if (IS_LAYER_ON(BMAI)) {
            rgb_matrix_set_color(LED_4, RGB_AZURE);
        }

        if (IS_LAYER_ON(FMAI)) {
            rgb_matrix_set_color(LED_F4, RGB_AZURE);
        }

        if (IS_LAYER_ON(YZAI)) {
            rgb_matrix_set_color(LED_5, RGB_BLUE);
        }

        if (IS_LAYER_ON(WORK)) {
            rgb_matrix_set_color(LED_6, RGB_CORAL);
        }

        if (IS_LAYER_ON(NMPD)) {
            rgb_matrix_set_color(LED_7, RGB_CYAN);
        }

        if (IS_LAYER_ON(FNLY)) {
            rgb_matrix_set_color(LED_F9, RGB_GREEN);
            rgb_matrix_set_color(LED_F10, RGB_GREEN);
        }

        if (IS_LAYER_ON(REST)) {
            rgb_matrix_set_color(LED_F11, RGB_RED);
            rgb_matrix_set_color(LED_F12, RGB_RED);
        }
    #endif
}

void set_start_layer(uint8_t layer) {
    // Only update, if new layer is not equal to stored variable (to protect EEPROM)
    if (user_config.start_layer != layer) {
        user_config.start_layer = layer;        // set new value
        eeconfig_update_user(user_config.raw);  // write new status to EEPROM
    }
}

// INITIAL STARTUP

void keyboard_post_init_user(void) {
    #ifdef RGB_MATRIX_ENABLE
        // rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_set_color_all(RGB_GREENYELLOW); // Default startup color
        activate_rgb_nightmode(true);  // Set to true if you want to startup in nightmode, otherwise use Fn + Z to toggle
    #endif
        user_config.raw = eeconfig_read_user();     // Read the user config from EEPROM
        layer_move(user_config.start_layer);        // Turns specified start layer on, and all other layers off.
}

// Set default values for EEPROM
void eeconfig_init_user(void) { // EEPROM is getting reset!
    user_config.raw         = 0;
    user_config.start_layer = BLAI;         // Default start_layer
    eeconfig_update_user(user_config.raw);  // Write default value to EEPROM
}
