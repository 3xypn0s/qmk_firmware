/* Copyright 2021 3xypn0s
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.
*/

#include QMK_KEYBOARD_H

enum custom_keycodes {
    WM_ONED = SAFE_RANGE,
    WM_TWOD,
};

// LAYERS
enum custom_user_layers {
    _NUMPAD,
    _WINDOWS,
    _NUMLOCK,
    _CHESS,
    _TEXTEDIT,
    _BROWSER,
    _GAMING,
    _BF4,
    _BF4_FN,
    _FN,
};

    /*
     * ┌───┌───┬───┬───┬───┐
     * │ESC│Brk│ScL│PrS│Ins│
     * ├───┼───┼───┼───┼───┤
     * │Del│Nlk│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │ - │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │ + │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Sup│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │App│   0   │ . │   │
     * └───┴───────┴───┴───┘
     */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┌───┬───┬───┬───┐
     * │Esc│Brk│ScL│PrS│Ins│
     * ├───┼───┼───┼───┼───┤
     * │Bak│Nlk│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Del│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │OSL│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │TTN│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │MOF│   0   │ . │   │
     * └───┴───────┴───┴───┘
     */
    [_NUMPAD] = LAYOUT_numpad_6x5(
        KC_ESC,      KC_PAUS,   KC_SLCK,   KC_PSCR,   KC_INS,
        KC_BSPC,     KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_DEL,      KC_P7,     KC_P8,     KC_P9,
        OSL(_NUMLOCK),KC_P4,    KC_P5,     KC_P6,     KC_PPLS,
        TT(_NUMLOCK),KC_P1,     KC_P2,     KC_P3,
        MO(_FN),     KC_P0,                KC_PDOT,   KC_PENT
    )
    
    
    /*
     * ┌───┌───┐───┬───┬───┐
     * │Esc│LOC│XXX│XXX│XXX│
     * ├───┼───┘───┼───┼───┤
     * │XXX│XXX│XXX│XXX│XXX│
     * ├───┼───┼───┼───┼───┤
     * │1SC│XXX│XXX│MoU│   │
     * ├───┼───┼───┼───┤XXX│
     * │2SC│SGL│XXX│SGR│   │
     * ├───┼───┼───┼───┤───┤
     * │MON│XXX│XXX│MoD│   │
     * ├───┼───┴───┼───┤APE│
     * │MOF│  XXX  │XXX│   │
     * └───┴───────┴───┘───┘
     */
    ,[_WINDOWS] = LAYOUT_numpad_6x5(
        KC_ESC,        G(KC_L),         XXXXXXX,        XXXXXXX,        XXXXXXX,
        XXXXXXX,       XXXXXXX,         XXXXXXX,        XXXXXXX,        XXXXXXX,
        WM_ONED,       XXXXXXX,         XXXXXXX,        KC_WH_U,
        WM_TWOD,       C(G(KC_LEFT)),   XXXXXXX,        C(G(KC_RGHT)),  XXXXXXX,
        MO(_NUMLOCK),  XXXXXXX,         XXXXXXX,        KC_WH_D,
        MO(_FN),       XXXXXXX,                         XXXXXXX,        C(A(KC_DEL))
    )


    /*
     * ┌───┌───┐───┬───┬───┐
     * │   │   │   │   │   │
     * ├───┼───┘───┼───┼───┤
     * │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┤
     * │   │Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤   │
     * │   │ ← │XXX│ → │   │
     * ├───┼───┼───┼───┤───┤
     * │   │End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤   │
     * │   │Insert │Del│   │
     * └───┴───────┴───┘───┘
     */
    ,[_NUMLOCK] = LAYOUT_numpad_6x5(
        _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,
        _______,   KC_HOME,   KC_UP,     KC_PGUP,
        _______,   KC_LEFT,   XXXXXXX,   KC_RGHT,   _______,
        _______,   KC_END,    KC_DOWN,   KC_PGDN,
        _______,   KC_INS,               KC_DEL,    _______
    )
    
    
    /*
     * ┌───┌───┐───┬───┬───┐
     * │Esc│LOC│XXX│XXX│XXX│
     * ├───┼───┘───┼───┼───┤
     * │Bak│XXX│XXX│SGL│SGR│
     * ├───┼───┼───┼───┼───┤
     * │1SC│Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤ + │
     * │2SC│ ← │XXX│ → │   │
     * ├───┼───┼───┼───┤───┤
     * │XXX│End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │MOF│Insert │Del│   │
     * └───┴───────┴───┘───┘
     */
    ,[_CHESS] = LAYOUT_numpad_6x5(
        KC_ESC,    G(KC_L),   XXXXXXX,   XXXXXXX,   XXXXXXX,
        KC_BSPC,   XXXXXXX,   XXXXXXX,   C(G(KC_LEFT)),C(G(KC_RGHT)),
        WM_ONED,   KC_HOME,   KC_UP,     KC_PGUP,
        WM_TWOD,   KC_LEFT,   XXXXXXX,   KC_RGHT,   KC_PPLS,
        XXXXXXX,   KC_END,    KC_DOWN,   KC_PGDN,
        MO(_FN),   KC_INS,               KC_DEL,    KC_PENT
    )
    ,[_TEXTEDIT] = LAYOUT_numpad_6x5(
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,
      _______,  _______,            _______,  _______
     )
    ,[_BROWSER] = LAYOUT_numpad_6x5(
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,  _______,
      _______,  _______,  _______,  _______,
      _______,  _______,            _______,  _______
     )
	,[_GAMING] = LAYOUT_numpad_6x5(
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,
        _______,  _______,            _______,  _______
    )
	,[_BF4] = LAYOUT_numpad_6x5(
        KC_ESC,   KC_H,     KC_MUTE,  MO(_FN),  TG(_BF4_FN),
        KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
        KC_TAB,   KC_Q,     KC_W,     KC_E,
        KC_T,     KC_A,     KC_S,     KC_D,     KC_F,
        KC_LSFT,  KC_Y,     KC_X,     KC_C,
        KC_LCTL,  KC_I,               KC_O,     KC_SPC
    )
    ,[_BF4_FN] = LAYOUT_numpad_6x5(
        KC_F6,    KC_F7,    _______,  _______,  _______,
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,
        _______,  _______,            _______,  _______
    )
	/*,[EMPTY] = LAYOUT_numpad_6x5(
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,
        _______,  _______,            _______,  _______
    )*/
	,[_FN] = LAYOUT_numpad_6x5(
        _______,  _______,       _______,        _______,       RESET,
        _______,  TG(_NUMLOCK),  _______,        _______,       _______,
        RGB_TOG,  TG(_GAMING),   TG(_BF4),       XXXXXXX,
        BL_TOGG,  XXXXXXX,       XXXXXXX,        XXXXXXX,       _______,
        _______,  TG(_WINDOWS),  TG(_CHESS),     XXXXXXX,
        _______,  TO(_NUMPAD),                   _______,       _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WM_ONED:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("s"));
                _delay_ms(500);
                SEND_STRING("cmd" SS_DELAY(10) SS_TAP(X_ENT));
                _delay_ms(500);
                //SEND_STRING("C:\\Windows\\System32\\DisplaySwitch.exe /clone"SS_TAP(X_ENT));
                SEND_STRING("C>");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("Windows");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("Szstem32");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("DisplazSwitch.exe ");
                SEND_STRING(SS_LSFT("7"));
                SEND_STRING("clone");
                _delay_ms(10);
                SEND_STRING(SS_TAP(X_ENT));
                _delay_ms(3000);
                SEND_STRING("exit" SS_DELAY(10) SS_TAP(X_ENT));
            } else {
                // when keycode WM_ONED is released
            }
            break;
        case WM_TWOD:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("s"));
                _delay_ms(500);
                SEND_STRING("cmd" SS_DELAY(10) SS_TAP(X_ENT));
                _delay_ms(500);
                //SEND_STRING("C:\\Windows\\System32\\DisplaySwitch.exe /extend"SS_TAP(X_ENT));
                SEND_STRING("C>");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("Windows");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("Szstem32");
                SEND_STRING(SS_RALT("-"));
                SEND_STRING("DisplazSwitch.exe ");
                SEND_STRING(SS_LSFT("7"));
                SEND_STRING("extend");
                _delay_ms(10);
                SEND_STRING(SS_TAP(X_ENT));
                _delay_ms(3000);
                SEND_STRING("exit" SS_DELAY(10) SS_TAP(X_ENT));
            } else {
                // when keycode WM_TWOD is released
            }
            break;
    }
    return true;
};
