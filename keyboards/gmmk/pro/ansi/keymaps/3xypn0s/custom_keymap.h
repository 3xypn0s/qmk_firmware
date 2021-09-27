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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "keymap.h"

/*
 * Keycodes for MacOS
 */
#define MK_INS      LAG(S(KC_V))        // paste without formatting
#define MK_RCTL     KC_RCMD             // Use right control key as cmd
#define MK_HOME     LCMD(KC_LEFT)       // HOME for MacOS
#define MK_END      LCMD(KC_RGHT)       // END for MacOS

/*
 * Keycodes for combination: ANSI - KeyLaout + ISO German Keyboard Setting on Computer
 *
 * Custom Keycodes starts with 'MA_'
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Ins│   │Mut│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgD│
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │End│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 1
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Ins│   │Mut│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 */
#define AI_ESC  KC_ESC      // Escape
#define AI_F1   KC_F1       // F1
#define AI_F2   KC_F2       // F2
#define AI_F3   KC_F3       // F3
#define AI_F4   KC_F4       // F4
#define AI_F5   KC_F5       // F5
#define AI_F6   KC_F6       // F6
#define AI_F7   KC_F7       // F7
#define AI_F8   KC_F8       // F8
#define AI_F9   KC_F9       // F9
#define AI_F10  KC_F10      // F10
#define AI_F11  KC_F11      // F11
#define AI_F12  KC_F12      // F12
#define AI_INS  KC_INS      // Insert
#define AI_MUTE KC_MUTE     // Mute

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define AI_GRV  S(KC_EQL)   // ` (dead)
#define AI_1    KC_1        // 1
#define AI_2    KC_2        // 2
#define AI_3    KC_3        // 3
#define AI_4    KC_4        // 4
#define AI_5    KC_5        // 5
#define AI_6    KC_6        // 6
#define AI_7    KC_7        // 7
#define AI_8    KC_8        // 8
#define AI_9    KC_9        // 9
#define AI_0    KC_0        // 0
#define AI_MINS KC_SLSH     // -
#define AI_EQL  S(KC_0)     // =
#define AI_BSPC KC_BSPC     // Backspace
#define AI_DEL  KC_DEL      // Delete

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
#define AI_TAB  KC_TAB          // Tab
#define AI_Q    KC_Q            // Q
#define AI_W    KC_W            // W
#define AI_E    KC_E            // E
#define AI_R    KC_R            // R
#define AI_T    KC_T            // T
#define AI_Y    KC_Z            // Y
#define AI_U    KC_U            // U
#define AI_I    KC_I            // I
#define AI_O    KC_O            // O
#define AI_P    KC_P            // P
#define AI_LBRC ALGR(KC_8)      // [
#define AI_RBRC ALGR(KC_9)      // ]
#define AI_BSLS ALGR(KC_MINS)   // Backslash
#define AI_PGUP KC_PGUP         // PageUp

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgD│
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define AI_CAPS KC_CAPS         // CapsLock
#define AI_A    KC_A            // A
#define AI_S    KC_S            // S
#define AI_D    KC_D            // D
#define AI_F    KC_F            // F
#define AI_G    KC_G            // G
#define AI_H    KC_H            // H
#define AI_J    KC_J            // J
#define AI_K    KC_K            // K
#define AI_L    KC_L            // L
#define AI_SCLN S(KC_COMM)      // ;
#define AI_QUOT S(KC_NUHS)      // '
#define AI_ENT  KC_ENT          // Enter
#define AI_PGDN KC_PGDN         // PageDown

// Row 5
/*
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │End│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 */
#define AI_LSFT KC_LSFT         // ShiftLeft
#define AI_Z    KC_Y            // Z
#define AI_X    KC_X            // X
#define AI_C    KC_C            // C
#define AI_V    KC_V            // V
#define AI_B    KC_B            // B
#define AI_N    KC_N            // N
#define AI_M    KC_M            // M
#define AI_COMM KC_COMM         // ,
#define AI_DOT  KC_DOT          // .
#define AI_SLSH S(KC_7)         // Slash
#define AI_RSFT KC_RSFT         // ShiftRight
#define AI_UP   KC_UP           // ArrowUp
#define AI_END  KC_END          // End

// Row 6
/*
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */
#define AI_LCTL KC_LCTL         // ControlLeft
#define AI_LGUI KC_LGUI         // MetaLeft
#define AI_LALT KC_LALT         // AltLeft
#define AI_SPC  KC_SPC          // Space
#define AI_RALT KC_RALT         // AltRight
#define AI_RGUI KC_RGUI         // MetaRight
#define AI_RCTL KC_RCTL         // ControlRight
#define AI_LEFT KC_LEFT         // ArrowLeft
#define AI_DOWN KC_DOWN         // ArrowDown
#define AI_RGHT KC_RGHT         // ArrowRight

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │ : │ " │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define AIS_GRV     ALGR(KC_RBRC)   // ~
//#define AIS_1       S(KC_1)         // !
#define AIS_2       ALGR(KC_Q)      // @
#define AIS_3       KC_NUHS         // #
//#define AIS_4       S(KC_4)         // $
//#define AIS_5       S(KC_5)         // %
#define AIS_6       KC_GRV          // ^ (dead)
#define AIS_7       S(KC_6)         // &
#define AIS_8       S(KC_RBRC)      // *
#define AIS_9       S(KC_8)         // (
#define AIS_0       S(KC_9)         // )
#define AIS_MINS    S(KC_SLSH)      // _
#define AIS_EQL     KC_RBRC         // +

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
#define AIS_LBRC    ALGR(KC_7)      // {
#define AIS_RBRC    ALGR(KC_0)      // }
#define AIS_BSLS    ALGR(KC_NUBS)   // |

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │ : │ " │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define AIS_SCLN    S(KC_DOT)       // :
#define AIS_QUOT    S(KC_2)         // "

// Row 5
/*
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 */
#define AIS_COMM    KC_NUBS         // <
#define AIS_DOT     S(KC_NUBS)      // >
#define AIS_SLSH    S(KC_MINS)      // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │   │ ° │ ² │ ³ │   │   │   │   │   │   |   │   │   │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ @ │   │ € │   │   │   │ Ü │   │ Ö │   │   |   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │ Ä │   │   │   │   │   │   │   │   │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │ µ │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ´ │ ° │ ² │ ³ │   │   │   │   │   │   |   │   │   │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define AIAG_GRV    KC_EQL      // ´ (dead)
#define AIAG_1      S(KC_GRV)   // °
#define AIAG_2      ALGR(KC_2)  // ²
#define AIAG_3      ALGR(KC_3)  // ³

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ @ │   │ € │   │   │   │ Ü │   │ Ö │   │   |   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
//#define AIAG_Q      ALGR(KC_Q)  // @
//#define AIAG_E      ALGR(KC_E)  // €
#define AIAG_U      KC_LBRC     // Ü
//#define AIAGS_U     S(AIAG_U)   // Ü
#define AIAG_O      KC_SCLN     // Ö
//#define AIAGS_O     S(AIAG_O)   // Ö

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │ Ä │ ß │   │   │   │   │   │   │   │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define AIAG_A  KC_QUOT     // Ä
//#define AIAGS_A S(AIAG_A)   // Ä
#define AIAG_S  KC_MINS     // ß

// Row 5
/*
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │ µ │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 */
//#define AIAG_M  ALGR(KC_M)  // µ


// Other Keycodes:

#define AI_F13  KC_F13      // F13
#define AI_F14  KC_F14      // F14
#define AI_F15  KC_F15      // F15
#define AI_F16  KC_F16      // F16
#define AI_F17  KC_F17      // F17
#define AI_F18  KC_F18      // F18
#define AI_F19  KC_F19      // F19
#define AI_F20  KC_F20      // F20
#define AI_F21  KC_F21      // F21
#define AI_F22  KC_F22      // F22
#define AI_F23  KC_F23      // F23
#define AI_F24  KC_F24      // F24
#define AI_VOLD KC_VOLD     // Volume Down
#define AI_VOLU KC_VOLU     // Volume Up



/*
 * Keycodes for combination: ANSI - KeyLaout + ISO German Keyboard Setting on MacOS
 *
 * Custom Keycodes starts with 'MA_'
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Ins│   │Mut│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgD│
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │End│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 1
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│Ins│   │Mut│
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 */
#define MA_ESC  KC_ESC          // Escape
#define MA_F1   KC_F1           // F1
#define MA_F2   KC_F2           // F2
#define MA_F3   KC_F3           // F3
#define MA_F4   KC_F4           // F4
#define MA_F5   KC_F5           // F5
#define MA_F6   KC_F6           // F6
#define MA_F7   KC_F7           // F7
#define MA_F8   KC_F8           // F8
#define MA_F9   KC_F9           // F9
#define MA_F10  KC_F10          // F10
#define MA_F11  KC_F11          // F11
#define MA_F12  KC_F12          // F12
#define MA_INS  MK_INS          // Insert
#define MA_MUTE KC_MUTE         // Mute

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define MA_GRV  S(KC_EQL)   // ` (dead)
#define MA_1    KC_1        // 1
#define MA_2    KC_2        // 2
#define MA_3    KC_3        // 3
#define MA_4    KC_4        // 4
#define MA_5    KC_5        // 5
#define MA_6    KC_6        // 6
#define MA_7    KC_7        // 7
#define MA_8    KC_8        // 8
#define MA_9    KC_9        // 9
#define MA_0    KC_0        // 0
#define MA_MINS KC_SLSH     // -
#define MA_EQL  S(KC_0)     // =
#define MA_BSPC KC_BSPC     // Backspace
#define MA_DEL  KC_DEL      // Delete

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │PgU│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
#define MA_TAB  KC_TAB          // Tab
#define MA_Q    KC_Q            // Q
#define MA_W    KC_W            // W
#define MA_E    KC_E            // E
#define MA_R    KC_R            // R
#define MA_T    KC_T            // T
#define MA_Y    KC_Z            // Y
#define MA_U    KC_U            // U
#define MA_I    KC_I            // I
#define MA_O    KC_O            // O
#define MA_P    KC_P            // P
#define MA_LBRC ALGR(KC_5)      // [
#define MA_RBRC ALGR(KC_6)      // ]
#define MA_BSLS ALGR(S(KC_7))   // Backslash
#define MA_PGUP KC_PGUP         // PageUp

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │PgD│
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define MA_CAPS KC_CAPS         // CapsLock
#define MA_A    KC_A            // A
#define MA_S    KC_S            // S
#define MA_D    KC_D            // D
#define MA_F    KC_F            // F
#define MA_G    KC_G            // G
#define MA_H    KC_H            // H
#define MA_J    KC_J            // J
#define MA_K    KC_K            // K
#define MA_L    KC_L            // L
#define MA_SCLN S(KC_COMM)      // ;
#define MA_QUOT S(KC_NUHS)      // '
#define MA_ENT  KC_ENT          // Enter
#define MA_PGDN KC_PGDN         // PageDown

// Row 5
/*
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │End│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 */
#define MA_LSFT KC_LSFT         // ShiftLeft
#define MA_Z    KC_Y            // Z
#define MA_X    KC_X            // X
#define MA_C    KC_C            // C
#define MA_V    KC_V            // V
#define MA_B    KC_B            // B
#define MA_N    KC_N            // N
#define MA_M    KC_M            // M
#define MA_COMM KC_COMM         // ,
#define MA_DOT  KC_DOT          // .
#define MA_SLSH S(KC_7)         // Slash
#define MA_RSFT KC_RSFT         // ShiftRight
#define MA_UP   KC_UP           // ArrowUp
#define MA_END  MK_END          // End

// Row 6
/*
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */
#define MA_LCTL KC_LCTL         // ControlLeft
#define MA_LGUI KC_LGUI         // MetaLeft
#define MA_LALT KC_LALT         // AltLeft
#define MA_SPC  KC_SPC          // Space
#define MA_RALT KC_RALT         // AltRight
#define MA_RGUI KC_RGUI         // MetaRight
#define MA_RCTL KC_RGUI         // ControlRight, Override RCtl with RGUI on MacOS to get right command key
#define MA_LEFT KC_LEFT         // ArrowLeft
#define MA_DOWN KC_DOWN         // ArrowDown
#define MA_RGHT KC_RGHT         // ArrowRight

/* Shifted symbols MacOS
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │ : │ " │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define MAS_GRV     ALGR(KC_N)   // ~
//#define MAS_1       S(KC_1)         // !
#define MAS_2       ALGR(KC_L)      // @
#define MAS_3       KC_NUHS         // #
//#define MAS_4       S(KC_4)         // $
//#define MAS_5       S(KC_5)         // %
#define MAS_6       KC_NUBS         // ^ (dead)
#define MAS_7       S(KC_6)         // &
#define MAS_8       S(KC_RBRC)      // *
#define MAS_9       S(KC_8)         // (
#define MAS_0       S(KC_9)         // )
#define MAS_MINS    S(KC_SLSH)      // _
#define MAS_EQL     KC_RBRC         // +

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
#define MAS_LBRC    ALGR(KC_8)      // {
#define MAS_RBRC    ALGR(KC_9)      // }
#define MAS_BSLS    ALGR(KC_7)      // |

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │   │   │   │   │   │   │   │   │   │ : │ " │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define MAS_SCLN    S(KC_DOT)       // :
#define MAS_QUOT    S(KC_2)         // "

// Row 5
/*
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 */
#define MAS_COMM    KC_GRV          // <
#define MAS_DOT     S(KC_GRV)       // >
#define MAS_SLSH    S(KC_MINS)      // ?

/* AltGr symbols MacOS
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │   │ ° │   │   │   │   │   │   │   │   |   │   │   │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ @ │   │ € │   │   │   │ Ü │   │ Ö │   │   |   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │ Ä │   │   │   │   │   │   │   │ @ │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │        │   │   │   │   │   │   │   │   │   │   │      │   │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │    │    │    │                        │   │   │   │   │   │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */

// Row 2
/*
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
 * │ ´ │ ° │   │   │   │   │   │   │   │   |   │   │   │       │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 */
#define MAAG_GRV    KC_EQL      // ´ (dead)
#define MAAG_1      S(KC_NUBS)  // °

// Row 3
/*
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │     │ @ │   │ € │   │   │   │ Ü │   │ Ö │   │   |   │     │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 */
#define MAAG_Q      ALGR(KC_L)  // @
//#define MAAG_E      ALGR(KC_E)  // €
#define MAAG_U      KC_LBRC     // Ü
//#define AIAGS_U     S(MAAG_U)   // Ü
#define MAAG_O      KC_SCLN     // Ö
//#define AIAGS_O     S(MAAG_O)   // Ö

// Row 4
/*
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │      │ Ä │ ß │   │   │   │   │   │   │   │   │   │        │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 */
#define MAAG_A  KC_QUOT     // Ä
//#define AIAGS_A S(MAAG_A)   // Ä
#define MAAG_S  KC_MINS     // ß

// Other Keycodes for Mac:
#define MA_HOME     MK_HOME     // HOME Key for Mac



/*
 * Other KeyCodes
 *
 * Custom Keycodes starts with 'CK_'
 */

// Key Overrides
#define CK_KOON KEY_OVERRIDE_ON     // Turns on Key Override feature - key_override_on(void)
#define CK_KOOF KEY_OVERRIDE_OFF    // Turns off Key Override feature - key_override_off(void)
#define CK_KOTG KEY_OVERRIDE_TOGGLE // Toggles Key Override feature on and off - key_override_toggle(void)

 
/*
 * Unicodes
 * activate: rules.mk: UNICODEMAP_ENABLE = yes
 *
 * enum unicode_names {
 *     BANG,
 *     IRONY,
 *     SNEK
 * };
 *
 * const uint32_t PROGMEM unicode_map[] = {
 *     [BANG]  = 0x203D,  // ‽
 *     [IRONY] = 0x2E2E,  // ⸮
 *     [SNEK]  = 0x1F40D, // 🐍
 * };
 *
 * Then you can use X(BANG), X(SNEK) etc. in your keymap.
 * Characters often come in lower and upper case pairs, such as å and Å. To make inputting these characters easier, you can use XP(i, j) in your keymap, where i and j are the mapping table indices of the lower and upper case character, respectively.
 */

// Functions:

#define ARRAYSIZE(arr) sizeof(arr)/sizeof(arr[0])

void set_start_layer(uint8_t layer);
#ifdef RGB_MATRIX_ENABLE
void activate_rgb_nightmode (bool turn_on);
void activate_rgb_layer_state (bool turn_on);
void activate_rgb_match_gpbt_pastel (bool turn_on);
bool get_rgb_nightmode(void);
bool get_rgb_layer_state(void);
bool get_rgb_match_gpbt_pastel(void);
void show_layer_by_rgb(void);
#endif
