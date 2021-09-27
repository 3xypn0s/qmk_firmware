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
#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
//#define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
//#define RGB_MATRIX_FRAMEBUFFER_EFFECTS // enable framebuffer effects
#define RGB_DISABLE_TIMEOUT 900000 // number of milliseconds to wait until rgb automatically turns off (900 000 ms = 15 min)
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
//#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
//#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180 // limits maximum brightness of LEDs to 180 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_JELLYBEAN_RAINDROPS // Sets the default mode, if none has been set
//#define RGB_MATRIX_STARTUP_HUE 0 // Sets the default hue value, if none has been set
//#define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
//#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS // Sets the default brightness value, if none has been set
//#define RGB_MATRIX_STARTUP_SPD 127 // Sets the default animation speed, if none has been set
#endif
