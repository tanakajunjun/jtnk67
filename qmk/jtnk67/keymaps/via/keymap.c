/*
Copyright 2021 Salicylic_Acid

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
//#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_INT3, KC_BSPC,KC_VOLU,        
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_ENT,          KC_VOLD,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, KC_BSLS,                   KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_INT1,          KC_RSFT,   KC_UP,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC,                                                       KC_RALT,   MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [1] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, KC_DEL, RGB_MOD,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_RMOD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, _______, _______, _______, _______, _______, _______, _______,         RGB_RMOD,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   RGB_TOG,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_PAGE_UP,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                                       _______, _______, _______, KC_HOME, KC_PAGE_DOWN, KC_END
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [2] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                                       _______, _______, _______, _______, _______, _______
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [3] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                                       _______, _______, _______, _______, _______, _______
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   {  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_LOWER] =  {  ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_RAISE] =  {  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [_ADJUST] = {  ENCODER_CCW_CW(KC_UP, KC_DOWN) },
};
#endif

#ifdef RGB_MATRIX_ENABLE

  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
  //   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_JYEN, KC_BSPC,        
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,  KC_ENT,                  
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //  KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, KC_BSLS,                   KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //  KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_RO,         KC_RSFT,   KC_UP,         
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  // KC_LCTRL, KC_LGUI, KC_LALT,  KC_SPC,                                                       KC_RALT,   MO(1),KC_RCTRL,KC_LEFT,  KC_DOWN, KC_RGHT
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'

  // Logical Layout
  // Columns
  // Left
  // 0  1  2  3  4  5  6  7 ROWS
  //60 59 51 50 43 42 34 33
  //61 58 52 49 44 41 35 32
  //62 57 53 48 45 40 36 31
  //63 56 54 47 46 39 37 30
  //65 64 55 38 __ __ __ __
  
  //
  // Right
  // 0  1  2  3  4  5  6  7 ROWS
  //27 26 18 17 16  7  6 __
  //28 25 19 15  8  5 __ __
  //29 24 20 14  9 __ __ __
  //23 21 13 10 __  4  2 __
  //__ 22 12 11 __  3  1  0

  //
  // Physical Layout
  // 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 ROWS
  //60 59 51 50 43 42 34 33 27 26 18 17 16  7  6 __   0
  //61 58 52 49 44 41 35 32 28 25 19 15  8  5 __ __   1
  //62 57 53 48 45 40 36 31 29 24 20 14  9 __ __ __   2
  //63 56 54 47 46 39 37 30 23 21 13 10 __  4  2 __   3
  //65 64 55 38 __ __ __ __ __ 22 12 11 __  3  1  0   4

led_config_t g_led_config = { {
	{ 60, 59, 51, 50, 43, 42, 34, 33 },
	{ 61, 58, 52, 49, 44, 41, 35, 32 },
	{ 62, 57, 53, 48, 45, 40, 36, 31 },
	{ 63, 56, 54, 47, 46, 39, 37, 30 },
    { 65, 64, 55, 38, NO_LED,NO_LED,NO_LED},

	{ 27, 26, 18, 17, 16,  7,  6, NO_LED },
	{ 28, 25, 19, 15,  8,  5,  NO_LED, NO_LED },
	{ 29, 24, 20, 14,  9,  NO_LED,  NO_LED, NO_LED },
	{ 23, 21, 13, 10,NO_LED,  4,  2, NO_LED },
	{ NO_LED, 22, 12, 11,NO_LED,  3,  1, 0}
    
}, {
   	{224, 64},{209, 64},{209, 48},{194, 64},{194, 48},{194, 16},{209,  0},{194,  0},{179, 16},{179, 32},
   	{164, 48},{164, 64},{149, 64},{149, 48},{164, 32},{164, 16},{179,  0},{164,  0},{149,  0},{149, 16},
   	{149, 32},{134, 48},{134, 64},{119, 48},{134, 32},{134, 16},{134,  0},{119,  0},{119, 16},{119, 32},
   	{104, 48},{104, 32},{104, 16},{104,  0},{ 89,  0},{ 89, 16},{ 89, 32},{ 89, 48},{ 44, 64},{ 74, 48},
   	{ 74, 32},{ 74, 16},{ 74,  0},{ 59,  0},{ 59, 16},{ 59, 32},{ 59, 48},{ 44, 48},{ 44, 32},{ 44, 16},
   	{ 44,  0},{ 29,  0},{ 29, 16},{ 29, 32},{ 29, 48},{ 29, 64},{ 14, 48},{ 14, 32},{ 14, 16},{ 14,  0},
   	{  0,  0},{  0, 16},{  0, 32},{  0, 48},{ 14, 64},{  0, 64}
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4
} };

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif
