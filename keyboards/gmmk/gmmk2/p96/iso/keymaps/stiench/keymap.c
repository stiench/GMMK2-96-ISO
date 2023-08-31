/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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

#include QMK_KEYBOARD_H

#include "macros.h"
#include "sides.h"
#include "helpers.h"

#define PINK_RGB 128,0,128
#define PINK_LIGHT 255,0,255
#define ORANGE_RGB 120,26,0

#define ARROW_KEY_COLORS ORANGE_RGB
#define RESET_KEY_COLORS RGB_RED
#define RGB_KEY_COLORS RGB_PURPLE
#define LAYER_KEY_COLORS RGB_GOLD

int ARROW_KEYS[] =  {83, 95, 96, 97};
int RGB_KEYS[]   =  {72, 73, 74, 75};
int LAYER_KEYS[] =  {84, 85, 98};
int RESET_KEY    =  49;

int SIZE_OF_ARROW_KEYS = sizeof(ARROW_KEYS)/sizeof(int);
int SIZE_OF_RGB_KEYS = sizeof(RGB_KEYS)/sizeof(int);
int SIZE_OF_LAYER_KEYS = sizeof(LAYER_KEYS)/sizeof(int);

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _1L 1
#define _2L 2
#define _FL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

[_1L] = LAYOUT(
  QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

[_2L] = LAYOUT(
  QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,            KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _FL: Function Layer
   */
[_FL] = LAYOUT(
  QK_BOOT,  KC_BRID,  KC_BRIU,  KC_CALC,  KC_MSEL,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
  _______,  _______,  RGB_HUI,  RGB_HUD,  RGB_SPD,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   RGB_VAI,  TO(_1L),  TO(_2L),  _______,  _______,
  _______,  UC_WIN,   _______,                      _______,                                _______,  _______,  _______,  RGB_RMOD,  RGB_VAD,  RGB_MOD,  TO(_BL),  _______)
};


enum LEDLAYER {
    L0 = 0x1,
    L1 = 0x2,
    L2 = 0x4,
    L3 = 0x8,
};

layer_state_t layer_state_set_user(layer_state_t state) {
    if ((state & L3) == L3) {
      rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    }
    else if ((state & L2) == L2) {
      rgb_matrix_mode_noeeprom(RGB_MATRIX_TYPING_HEATMAP);
    }
    else if ((state & L1) == L1) {
      rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_MULTISPLASH);
    }
    else if ((state & L0) == L0) {
      rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    }
    else {
      rgb_matrix_mode_noeeprom(RGB_MATRIX_TYPING_HEATMAP);
    }
    rgb_matrix_sethsv_noeeprom(HSV_PINK);
    return state;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
  uint8_t layer = biton32(layer_state);
  switch (layer) {
    case 0:
    //rgb_matrix_set_color_all(PINK_RGB); 
    break;

    case 1:
    //rgb_matrix_set_color_all(PINK_RGB); 
    break;

    case 2:
    //rgb_matrix_set_color_all(PINK_RGB); 
    break;

    case 3:
      for(int i = 0; i < SIZE_OF_ARROW_KEYS; i++) {
        rgb_matrix_set_color(ARROW_KEYS[i], ARROW_KEY_COLORS);
      }
      rgb_matrix_set_color(RESET_KEY, RESET_KEY_COLORS);  
      for(int i = 0; i < SIZE_OF_RGB_KEYS; i++) {
        rgb_matrix_set_color(RGB_KEYS[i], RGB_KEY_COLORS);
      }
      for(int i = 0; i < SIZE_OF_LAYER_KEYS; i++) {
        rgb_matrix_set_color(LAYER_KEYS[i], LAYER_KEY_COLORS);
      }
    break;
  }
  
  if (is_caps_lock_on()) {
    RGB_MATRIX_INDICATOR_SET_COLOR(54, 120 ,26 ,0); //capslock key
  }

  if (is_caps_lock_on()) {
    set_side_color('l', ORANGE_RGB);
    set_side_color('r', ORANGE_RGB);
  } else {
    set_side_color('l', PINK_RGB);
    set_side_color('r', PINK_RGB);
  }
  return true;
}

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_set_speed(25);
  rgblight_sethsv_noeeprom(PINK_LIGHT);
}
