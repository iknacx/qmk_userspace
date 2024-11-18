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

#define L_QWER 0
#define L_MATH 1
#define L_WRIT 2
#define L_NAV  3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌──────────────┬──────────────┬──────────────┬──────────────┬─────────────────┐               ┌──────────────────┬──────────────┬──────────────┬──────────────┬──────────────┐
//    │     ES_Q     │     ES_W     │     ES_E     │     ES_R     │      ES_T       │               │       ES_Y       │     ES_U     │     ES_I     │     ES_O     │     ES_P     │
//    ├──────────────┼──────────────┼──────────────┼──────────────┼─────────────────┤               ├──────────────────┼──────────────┼──────────────┼──────────────┼──────────────┤
//    │ LGUI_T(ES_A) │ LALT_T(ES_S) │ LSFT_T(ES_D) │ LCTL_T(ES_F) │ LT(L_NAV, ES_G) │               │ LT(L_NAV, ES_H)  │ RCTL_T(ES_J) │ RSFT_T(ES_K) │ RALT_T(ES_L) │ RGUI_T(ES_S) │
//    ├──────────────┼──────────────┼──────────────┼──────────────┼─────────────────┤               ├──────────────────┼──────────────┼──────────────┼──────────────┼──────────────┤
//    │     ES_Z     │     ES_X     │     ES_C     │     ES_V     │      ES_B       │               │       ES_N       │     ES_M     │   ES_COMM    │    ES_DOT    │   ES_MINS    │
//    └──────────────┴──────────────┴──────────────┼──────────────┼─────────────────┼─────┐   ┌─────┼──────────────────┼──────────────┼──────────────┴──────────────┴──────────────┘
//                                                 │      no      │ LT(L_MATH, tab) │ spc │   │ ent │ LT(L_WRIT, bspc) │      no      │
//                                                 └──────────────┴─────────────────┴─────┘   └─────┴──────────────────┴──────────────┘
[L_QWER] = LAYOUT_split_3x5_3(
  ES_Q         , ES_W         , ES_E         , ES_R         , ES_T               ,                       ES_Y                , ES_U         , ES_I         , ES_O         , ES_P        ,
  LGUI_T(ES_A) , LALT_T(ES_S) , LSFT_T(ES_D) , LCTL_T(ES_F) , LT(L_NAV, ES_G)    ,                       LT(L_NAV, ES_H)     , RCTL_T(ES_J) , RSFT_T(ES_K) , RALT_T(ES_L) , RGUI_T(ES_S),
  ES_Z         , ES_X         , ES_C         , ES_V         , ES_B               ,                       ES_N                , ES_M         , ES_COMM      , ES_DOT       , ES_MINS     ,
                                               XXXXXXX      , LT(L_MATH, KC_TAB) , KC_SPC ,     KC_ENT , LT(L_WRIT, KC_BSPC) , XXXXXXX
),

//    ┌─────────────────┬─────────┬─────────────────┬─────────┬─────────┐               ┌──────┬──────┬──────┬──────┬──────┐
//    │     ES_AMPR     │ ES_PIPE │     ES_TILD     │ ES_CIRC │ ES_NUMB │               │ ES_C │ ES_7 │ ES_8 │ ES_9 │ ES_F │
//    ├─────────────────┼─────────┼─────────────────┼─────────┼─────────┤               ├──────┼──────┼──────┼──────┼──────┤
//    │ LGUI_T(ES_PLUS) │ ES_MINS │ LSFT_T(ES_ASTR) │ ES_SLSH │ ES_PERC │               │ ES_B │ ES_4 │ ES_5 │ ES_6 │ ES_E │
//    ├─────────────────┼─────────┼─────────────────┼─────────┼─────────┤               ├──────┼──────┼──────┼──────┼──────┤
//    │     ES_MORD     │ ES_DLR  │     ES_EQL      │ ES_DOT  │ ES_COMM │               │ ES_A │ ES_1 │ ES_2 │ ES_3 │ ES_D │
//    └─────────────────┴─────────┴─────────────────┼─────────┼─────────┼─────┐   ┌─────┼──────┼──────┼──────┴──────┴──────┘
//                                                  │ QK_BOOT │         │ spc │   │ ent │ bspc │ ES_0 │
//                                                  └─────────┴─────────┴─────┘   └─────┴──────┴──────┘
[L_MATH] = LAYOUT_split_3x5_3(
  ES_AMPR         , ES_PIPE , ES_TILD         , ES_CIRC , ES_NUMB ,                       ES_C    , ES_7 , ES_8 , ES_9 , ES_F,
  LGUI_T(ES_PLUS) , ES_MINS , LSFT_T(ES_ASTR) , ES_SLSH , ES_PERC ,                       ES_B    , ES_4 , ES_5 , ES_6 , ES_E,
  ES_MORD         , ES_DLR  , ES_EQL          , ES_DOT  , ES_COMM ,                       ES_A    , ES_1 , ES_2 , ES_3 , ES_D,
                                                QK_BOOT , _______ , KC_SPC ,     KC_ENT , KC_BSPC , ES_0
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────────┐               ┌─────┬─────────┬─────────┬─────────┬─────────┐
//    │ ES_IEXL │  ES_AT  │ ES_QUOT │ ES_EXLM │ ES_GRV  │               │ no  │ ES_NOT  │ ES_DQUO │   no    │   no    │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┤               ├─────┼─────────┼─────────┼─────────┼─────────┤
//    │ ES_LABK │ ES_LBRC │ ES_LCBR │ ES_LPRN │ ES_ACUT │               │ no  │ ES_RPRN │ ES_RCBR │ ES_RBRC │ ES_RABK │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┤               ├─────┼─────────┼─────────┼─────────┼─────────┤
//    │ ES_IQUE │ ES_SCLN │ ES_COLN │ ES_QUES │ ES_DIAE │               │ no  │ ES_NOT  │ ES_UNDS │ ES_BSLS │   no    │
//    └─────────┴─────────┴─────────┼─────────┼─────────┼─────┐   ┌─────┼─────┼─────────┼─────────┴─────────┴─────────┘
//                                  │   no    │  MO(4)  │ spc │   │ ent │     │   no    │
//                                  └─────────┴─────────┴─────┘   └─────┴─────┴─────────┘
[L_WRIT] = LAYOUT_split_3x5_3(
  ES_IEXL , ES_AT   , ES_QUOT , ES_EXLM , ES_GRV  ,                       XXXXXXX , ES_NOT  , ES_DQUO , XXXXXXX , XXXXXXX,
  ES_LABK , ES_LBRC , ES_LCBR , ES_LPRN , ES_ACUT ,                       XXXXXXX , ES_RPRN , ES_RCBR , ES_RBRC , ES_RABK,
  ES_IQUE , ES_SCLN , ES_COLN , ES_QUES , ES_DIAE ,                       XXXXXXX , ES_NOT  , ES_UNDS , ES_BSLS , XXXXXXX,
                                XXXXXXX , MO(4)   , KC_SPC ,     KC_ENT , _______ , XXXXXXX
),

//    ┌────┬──────┬──────┬──────┬─────┐             ┌─────┬──────┬──────┬────┬──────┐
//    │ no │  no  │  up  │  no  │ no  │             │ no  │  no  │  no  │ no │  no  │
//    ├────┼──────┼──────┼──────┼─────┤             ├─────┼──────┼──────┼────┼──────┤
//    │ no │ left │ down │ rght │     │             │     │ left │ down │ up │ rght │
//    ├────┼──────┼──────┼──────┼─────┤             ├─────┼──────┼──────┼────┼──────┤
//    │ no │  no  │  no  │  no  │ no  │             │ no  │  no  │  no  │ no │  no  │
//    └────┴──────┴──────┼──────┼─────┼────┐   ┌────┼─────┼──────┼──────┴────┴──────┘
//                       │  no  │ no  │ no │   │ no │ no  │  no  │
//                       └──────┴─────┴────┘   └────┴─────┴──────┘
[L_NAV] = LAYOUT_split_3x5_3(
  XXXXXXX , XXXXXXX , KC_UP   , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  XXXXXXX , KC_LEFT , KC_DOWN , KC_RGHT , _______ ,                         _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT,
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
                                XXXXXXX , XXXXXXX , XXXXXXX ,     XXXXXXX , XXXXXXX , XXXXXXX
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────┐             ┌─────┬────┬────┬────┬────┐
//    │   no    │   no    │   no    │   no    │ no  │             │ no  │ no │ no │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────┤             ├─────┼────┼────┼────┼────┤
//    │ RGB_HUI │ RGB_SAI │ RGB_VAI │ RGB_TOG │ no  │             │ no  │ no │ no │ no │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────┤             ├─────┼────┼────┼────┼────┤
//    │ RGB_HUD │ RGB_SAD │ RGB_VAD │ RGB_MOD │ no  │             │ no  │ no │ no │ no │ no │
//    └─────────┴─────────┴─────────┼─────────┼─────┼────┐   ┌────┼─────┼────┼────┴────┴────┘
//                                  │   no    │     │ no │   │ no │     │ no │
//                                  └─────────┴─────┴────┘   └────┴─────┴────┘
[4] = LAYOUT_split_3x5_3(
  XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  RGB_HUI , RGB_SAI , RGB_VAI , RGB_TOG , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
  RGB_HUD , RGB_SAD , RGB_VAD , RGB_MOD , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX,
                                XXXXXXX , _______ , XXXXXXX ,     XXXXXXX , _______ , XXXXXXX
)
};
