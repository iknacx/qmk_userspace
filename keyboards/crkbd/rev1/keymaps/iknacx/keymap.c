/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
#include "keymap_spanish_latin_america.h"

const uint16_t PROGMEM esc_combo[] = { LSFT_T(ES_F), RSFT_T(ES_J), COMBO_END };
const uint16_t PROGMEM cwt_combo[] = { ES_V, ES_M, COMBO_END };

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(cwt_combo, CW_TOGG),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
  //,------ ---------------------------------------------------------------.                   ,--------------------------------------------------------------------------.
              ES_Q,         ES_W,         ES_E,         ES_R,          ES_T,                               ES_Y,         ES_U,         ES_I,         ES_O,            ES_P,
  //|-------------+-------------+-------------+-------------+--------------|                   |---------------+-------------+-------------+-------------+----------------|
      LGUI_T(ES_A), LALT_T(ES_S), LCTL_T(ES_D), LSFT_T(ES_F),   LT(3, ES_G),                        LT(3, ES_H), RSFT_T(ES_J), RCTL_T(ES_K), RALT_T(ES_L), RGUI_T(ES_NTIL),
  //|-------------+-------------+-------------+-------------+--------------|                   |---------------+-------------+-------------+-------------+----------------|
      RALT_T(ES_Z),         ES_X,         ES_C,         ES_V,   LT(4, ES_B),                        LT(4, ES_N),         ES_M,      ES_COMM,       ES_DOT, LALT_T(ES_MINS),
  //|-------------+-------------+-------------+-------------+--------------+--------|  |-------+---------------+-------------+-------------+-------------+----------------|
                                                     XXXXXXX, LT(1, KC_TAB),  KC_SPC,    KC_ENT, LT(2, KC_BSPC),      XXXXXXX
                                                 //`--------------------------------'  `-------------------------------------'
    ),


    [1] = LAYOUT_split_3x5_3(
  //,----------------------------------------------------------------.                    ,------------------------------------------------------------------------.
           ES_PLUS,      ES_MINS,      ES_ASTR,      ES_SLSH, ES_PERC,                       ES_NOT,      ES_AMPR,         ES_PIPE,        ES_TILD,         ES_CIRC,
  //|-------------+-------------+-------------+-------------+--------|                    |--------+-------------+----------------+---------------+----------------|
      LGUI_T(ES_1), LALT_T(ES_2), LCTL_T(ES_3), LSFT_T(ES_4),    ES_5,                         ES_6, RSFT_T(ES_7),    RCTL_T(ES_8),   RALT_T(ES_9),    RGUI_T(ES_0),
  //|-------------+-------------+-------------+-------------+--------|                    |--------+-------------+----------------+---------------+----------------|
             ES_AT,      ES_MORD,      ES_UNDS,      ES_COMM, ES_SCLN,                      ES_COLN,       ES_DOT,          ES_EQL,         ES_DLR,         ES_NUMB,
  //|-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+----------------+---------------+----------------|
                                                     XXXXXXX, _______,  KC_SPC,     KC_ENT, KC_BSPC, XXXXXXX
                                                 //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
      ES_IEXL, ES_EXLM,   ES_AT, ES_QUES, ES_IQUE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      ES_LABK, ES_LBRC, ES_LCBR, ES_LPRN, ES_ACUT,                      XXXXXXX, ES_RPRN, ES_RCBR, ES_RBRC, ES_RABK,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      ES_QUOT,  ES_GRV, ES_BSLS, ES_DQUO, ES_DIAE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 XXXXXXX,  KC_TAB,  KC_SPC,     KC_ENT, _______, XXXXXXX
                             //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x5_3(
  //,-------------------------------------.                    ,--------------------------------------------.
      KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, MS_WHLU,
  //|-------+------+------+------+--------|                    |--------+--------+--------+--------+--------|
      KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, MS_WHLD,
  //|-------+------+------+------+--------|                    |--------+--------+--------+--------+--------|
      KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX,                      MS_LEFT, MS_DOWN,   MS_UP, MS_RGHT, MS_BTN3,
  //|-------+------+------+------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                          XXXXXXX, _______,  KC_SPC,    MS_BTN1, MS_BTN2, XXXXXXX
                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x5_3(
  //,---------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX, RGB_RMOD, RGB_TOG, RGB_MOD, XXXXXXX,                      XXXXXXX, KC_BRID,   KC_F8, KC_BRIU, XXXXXXX,
  //|--------+---------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      RGB_SPI,  RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX,                      KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, XXXXXXX,
  //|--------+---------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      RGB_SPD,  RGB_HUD, RGB_SAD, RGB_VAD, _______,                      _______, KC_VOLD,   KC_F2, KC_VOLU, XXXXXXX,
  //|--------+---------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  XXXXXXX,  KC_ESC,  KC_SPC,     KC_ENT,  KC_DEL, XXXXXXX
                              //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
