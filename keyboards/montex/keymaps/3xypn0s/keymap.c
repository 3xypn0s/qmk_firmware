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

// LAYERS
enum custom_user_layers {
    _NUMPAD,
    _NUMLOCK,
    _WINDOWS,
    _TEXTEDIT,
    _BROWSER,
    _GAMING,
    _BF4,
    _BF4_FN,
    _FN,
};

    /*
     * ┌───┌───┬───┬───┬───┐
     * │ $ │ ( │ ) │FN │Nlk│
     * ├───┼───┼───┼───┼───┤
     * │Esc│Del│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Eql│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │Tab│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Cap│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │Bak│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┌───┬───┬───┬───┐
     * │Ins│ ( │ ) │MO1│Nlk│
     * ├───┼───┼───┼───┼───┤
     * │Esc│Del│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Eql│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │Tab│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Shi│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │Bak│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */
    [_NUMPAD] = LAYOUT_numpad_6x5(
        KC_INS,      S(KC_8),   S(KC_9),   MO(_FN),   KC_NLCK,
        KC_ESC,      KC_DEL,    KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_PEQL,     KC_P7,     KC_P8,     KC_P9,
        KC_TAB,      KC_P4,     KC_P5,     KC_P6,     KC_PPLS,
        KC_LSHIFT,   KC_P1,     KC_P2,     KC_P3,
        KC_BSPC,     KC_P0,                KC_PDOT,   KC_PENT
    )


    /*
     * ┌───┌───┐───┬───┬───┐
     * │Rst│ ` │Tab│MO1│Bsp│
     * ├───┼───┘───┼───┼───┤
     * │ , │Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │Gui│Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤ + │
     * │Alt│ ← │   │ → │   │
     * ├───┼───┼───┼───┤───┤
     * │Shi│End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │Ctr│Insert │Del│   │
     * └───┴───────┴───┘───┘
     */
    ,[_NUMLOCK] = LAYOUT_numpad_6x5(
        _______,   _______,   _______,   _______,   _______,
        _______,   KC_DEL,    _______,   _______,   _______,
        _______,   KC_HOME,   KC_UP,     KC_PGUP,
        _______,   KC_LEFT,   XXXXXXX,   KC_RGHT,   _______,
        _______,   KC_END,    KC_DOWN,   KC_PGDN,
        _______,   KC_HOME,              KC_INS,    _______
    )


    /*
     * ┌───┌───┐───┬───┬───┐
     * │APE│SGL│SGR│   │LOC│
     * ├───┼───┘───┼───┼───┤
     * │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┤
     * │   │Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤MoU│
     * │   │ ← │   │ → │   │
     * ├───┼───┼───┼───┤───┤
     * │   │End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤MoD│
     * │   │       │Del│   │
     * └───┴───────┴───┘───┘
     */
	,[_WINDOWS] = LAYOUT_numpad_6x5(
        C(A(KC_DEL)),  C(G(KC_LEFT)),  C(G(KC_RGHT)),  _______,  G(KC_L),
        _______,       KC_DEL,         _______,        _______,  _______,
        _______,       KC_HOME,        KC_UP,          KC_PGUP,
        _______,       KC_LEFT,        KC_DOWN,        KC_RGHT,  KC_WH_U,
        _______,       KC_END,         KC_DOWN,        KC_PGDN,
        _______,       _______,                        _______,  KC_WH_D
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
        KC_ESC,   KC_H,     KC_MUTE,  _______,  TG(_BF4_FN),
        KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
        KC_R,     KC_G,     KC_W,     KC_E,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,
        KC_LSFT,  KC_X,     KC_C,     KC_Z,
        KC_LCTL,  KC_F,               KC_Q,     KC_SPC
    )
    ,[_BF4_FN] = LAYOUT_numpad_6x5(
        _______,  _______,  _______,  _______,  _______,
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
        RESET,    _______,       _______,        _______,       TG(_NUMLOCK),
        _______,  _______,       _______,        _______,       _______,
        _______,  TG(_GAMING),   TG(_BF4),       XXXXXXX,
        _______,  XXXXXXX,       XXXXXXX,        XXXXXXX,       _______,
        RGB_TOG,  TG(_WINDOWS),  XXXXXXX,        XXXXXXX,
        BL_TOGG,  TO(_NUMPAD),                   TG(_NUMLOCK),  _______
    )
};
