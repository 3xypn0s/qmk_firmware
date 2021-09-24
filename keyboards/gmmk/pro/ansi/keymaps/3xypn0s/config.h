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

// To trigger the bootloader, you hold this key down when plugging the keyboard in. Just the single key. { 0 , 0 } --> ESC
// BOOTMAGIC_ENABLE = yes in rules.mk, You may see lite being used in place of yes.
// #define BOOTMAGIC_LITE_ROW 1
// #define BOOTMAGIC_LITE_COLUMN 3

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    // #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
    // #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
    // #define RGB_MATRIX_FRAMEBUFFER_EFFECTS // enable framebuffer effects
#endif
