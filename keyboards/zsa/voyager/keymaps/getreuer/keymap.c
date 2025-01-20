// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file keymap.c
 * @brief Pascal's keymap for the ZSA Voyager.
 *
 * This file defines what keycode is performed by each key position. See also
 * getreuer.c for definitions of macros, etc. used in my keymap.
 */

#include QMK_KEYBOARD_H

#include "voyager.h"
#include "layout.h"
#include "getreuer.c"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* [BASE] = LAYOUT_LR(  // Base layer: Magic Sturdy. */
  /*   KC_GRV , G(KC_TAB), SELLINE, KC_DOWN, KC_UP  , KC_BTN1, */
  /*   KC_TAB , KC_V   , KC_M   , KC_L   , KC_C   , KC_P   , */
  /*   KC_BSPC, HOME_X , HOME_C , HOME_B , HOME_V , KC_Y   , */
  /*   WIN_COL, HOME_C , KC_K   , KC_J   , NUM_G  , KC_W   , */
  /*                                                KC_UNDS, KC_SPC , */
  /**/
  /*                     KC_HOME, KC_LEFT, KC_RGHT , KC_END , KC_DEL , KC_MPLY, */
  /*                     KC_B   , MAGIC  , KC_U   , KC_O   , KC_Q   , KC_SLSH, */
  /*                     KC_F   , HOME_M , HOME_VOMM , HOME_DOT , HOME_SCLN , KC_QUOT, */
  /*                     KC_Z   , KC_H   , KC_COMM, KC_DOT , HOME_A, KC_ENT , */
  /*            QK_REP , KC_ESC */
  /* ), */

  [BASE] = LAYOUT_LR(  // Base layer: Magic Sturdy.
    KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,
    CKC_CAPS, HOME_A , HOME_S , KC_D   , KC_F   , NUM_G  ,
    KC_LSFT , KC_Z   , HOME_X , HOME_C , HOME_V , KC_B   ,
                                                 KC_ENT, QK_REP,

                      KC_6   , KC_7   , KC_8    , KC_9   , KC_0     , KC_MINS,
                      KC_Y   , KC_U   , KC_I    , KC_O   , KC_P     , KC_BSLS,
                      KC_H   , KC_J   , KC_K    , KC_L   , HOME_SCLN, KC_QUOT,
                      KC_N   , HOME_M , HOME_COMM, HOME_DOT, KC_SLSH, MAGIC  ,
             KC_BSPC, KC_SPC
  ),

  [SYM] = LAYOUT_LR(  // Symbol layer.
    _______, C(KC_Z), C(KC_V), C(KC_A), C(KC_C), C(KC_X),
    TMUXESC, MO(FUN), KC_LABK, KC_RABK, KC_BSLS, KC_GRV ,
    _______, KC_LSFT, KC_MINS, KC_PLUS, KC_EQL , KC_HASH,
    _______, _______, RCTL(KC_RSFT), KC_LALT, KC_LCTL, USRNAME,
                                                 _______, _______,

                      C(KC_PGUP), C(KC_PGDN),  KC_PGDN, KC_PGUP,   _______, KC_MUTE,
                      KC_AMPR, KC_LBRC, KC_RBRC, KC_PIPE, SRCHSEL, _______,
                      KC_DLR , KC_LPRN, KC_RPRN, KC_PERC, KC_COLN,  KC_DQUO,
                      KC_TILD, KC_LCBR, KC_RCBR, _______, KC_QUES,  _______,
             _______, _______
  ),

  [NUM] = LAYOUT_LR(  // Number layer.
    _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,
    _______, KC_LGUI, XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX,
                                                 TO(BASE), _______,

                      _______, _______, _______, _______, _______, _______,
                      KC_TAB , KC_8   , KC_9   , KC_4   , KC_PLUS, KC_SLSH,
                      KC_COLN, KC_1   , KC_2   , KC_3   , KC_MINS, KC_ASTR,
                      KC_COMM, KC_7   , KC_6   , KC_5   , KC_DOT , _______,
             KC_0   , QK_LLCK
  ),

  [WIN] = LAYOUT_LR(  // Window management layer.
    RM_TOGG, RGB_DEF, RM_NEXT, RM_HUEU, RM_SATU, RM_VALU,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,
    XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 XXXXXXX, G(KC_SPC),

                      XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,
                      G(KC_TAB), G(KC_8), G(KC_9), G(KC_4), XXXXXXX, XXXXXXX,
                      G(S(KC_LEFT)), G(KC_1), G(KC_2), G(KC_3), G(S(KC_RGHT)), XXXXXXX,
                      XXXXXXX, G(KC_7), G(KC_6), G(KC_5), KC_VOLD , KC_VOLU,
             QK_REP , XXXXXXX
  ),

  [FUN] = LAYOUT_LR(  // Funky fun layer.
    _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,
    _______, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 TO(BASE), _______,

                      _______, _______, _______, _______, _______, QK_BOOT,
                      XXXXXXX, KC_F8  , KC_F9  , KC_F4  , KC_F10 , XXXXXXX,
                      XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F11 , XXXXXXX,
                      XXXXXXX, KC_F7  , KC_F6  , KC_F5  , KC_F12 , _______,
             XXXXXXX, QK_LLCK
  ),
};

