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
  /*   KC_BSPC, MOD_ALT2 , MOD_CTL1 , HOME_B , LAY_ARR1 , KC_Y   , */
  /*   LAY_WIN2, MOD_CTL1 , KC_K   , KC_J   , LAY_NUM  , KC_W   , */
  /*                                                KC_UNDS, KC_SPC , */
  /**/
  /*                     KC_HOME, KC_LEFT, KC_RGHT , KC_END , KC_DEL , KC_MPLY, */
  /*                     KC_B   , MAGIC  , KC_U   , KC_O   , KC_Q   , KC_SLSH, */
  /*                     KC_F   , MOD_ALT1 , LAY_NAV , LAY_WIN1, MOD_SFT2 , KC_QUOT, */
  /*                     KC_Z   , KC_H   , KC_COMM, KC_DOT , CKC_S, KC_ENT , */
  /*            QK_REP , KC_ESC */
  /* ), */

  [GRAPHITE] = LAYOUT_LR(  // Base layer: Graphite
    KC_GRV  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5   ,
    LAY_NAV , KC_B     , KC_L     , gMOD_ALT1, gMOD_CTL1, KC_Z   ,
    CKC_CAPS, gMOD_SFT1, KC_R     , KC_T     , gLAY_NUM , LAY_QUICK,
    KC_LSFT , gMOD_GUI1, KC_Q     , KC_X     , gLAY_WIN1, KC_V   ,
                               LEFT_THUMB_SMALL   , LEFT_THUMB_BIG,
  
                      KC_6   , KC_7     , KC_8      , KC_9     , KC_0     , KC_EQL ,
                      KC_QUOT, gMOD_CTL2, gMOD_ALT2 , KC_U     , KC_J     , KC_SCLN,
                      KC_Y   , KC_H     , KC_A      , KC_E     , gMOD_SFT2, KC_COMM,
                      KC_K   , gLAY_WIN2, KC_DOT    , KC_MINS  , MOD_GUI2 , TO(BASE),
             RIGHT_THUMB_BIG , RIGHT_THUMB_SMALL 
  ),

  [BASE] = LAYOUT_LR(  // Base layer: QWERTY
    KC_GRV  , KC_1    , KC_2     , KC_3     , KC_4     , KC_5   ,
    LAY_NAV , KC_Q    , KC_W     , MOD_ALT1 , MOD_CTL1 , KC_T   ,
    CKC_CAPS, MOD_SFT1, KC_S     , KC_D     , LAY_NUM  , LAY_QUICK,
    KC_LSFT , MOD_GUI1, KC_X     , KC_C     , LAY_WIN1 , KC_B   ,
                                   LEFT_THUMB_SMALL    , LEFT_THUMB_BIG,

                      KC_6    , KC_7     , KC_8      , KC_9     , KC_0     , KC_MINS,
                      KC_Y    , MOD_CTL2 , MOD_ALT2  , KC_O     , KC_P     , KC_BSLS,
                      KC_H    , KC_J     , KC_K      , KC_L     , MOD_SFT2 , KC_QUOT,
                      KC_N    , LAY_WIN2 , KC_COMM   , KC_DOT   , MOD_GUI2 , TO(GRAPHITE),
             RIGHT_THUMB_BIG  , RIGHT_THUMB_SMALL
  ),

  [SYM1] = LAYOUT_LR(  // Symbol layer.
    XXXXXXX, KC_F1  , KC_F2  , KC_F3     , KC_F4  , KC_F5  ,
    XXXXXXX, XXXXXXX, KC_AT  , KC_HASH   , KC_ASTR, G(S(KC_S)),
    TMUXESC, KC_AMPR, KC_EXLM, KC_KP_PLUS, KC_MINS, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_TILD, KC_PIPE   , C(S(KC_V)), XXXXXXX,
                                                 _______, _______,

                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
                      KC_EQL , KC_LBRC, KC_RBRC, KC_UNDS, XXXXXXX, XXXXXXX,
                      KC_CIRC, KC_LPRN, KC_RPRN, KC_DLR , KC_QUES, QK_LLCK,
                      KC_PERC, KC_LCBR, KC_RCBR, KC_BSLS, XXXXXXX, XXXXXXX,
             C(KC_BSPC), C(KC_F)
  ),

  [QUICKMENU] = LAYOUT_LR(  // Symbol layer.
    _______, C(KC_Z), C(KC_V), C(KC_A), C(KC_C), C(KC_X),
    _______, MO(FUN), _______, _______, _______, _______,
    TMUXESC, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, USRNAME,
                                                 _______, _______,

                      KC_SCRL, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
                      KC_HOME, KC_PGDN, KC_PGUP, KC_END  , XXXXXXX, XXXXXXX,
                      KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT, XXXXXXX, QK_LLCK,
                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
             _______, _______
  ),

  [NUM] = LAYOUT_LR(  // Number layer.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 _______, _______,

                      XXXXXXX, KC_7   , KC_8   , KC_9   , XXXXXXX, KC_MINS,
                      KC_EQL , KC_4   , KC_5   , KC_6   , KC_LPRN, KC_RPRN,
                      KC_PLUS, KC_1   , KC_2   , KC_3   , KC_ASTR, QK_LLCK,
                      KC_PERC, KC_0   , KC_MINS, KC_DOT , KC_SLSH, XXXXXXX,
             _______, _______
  ),

  [WIN] = LAYOUT_LR(  // Window management layer.
    RM_TOGG  , RGB_DEF   , RM_NEXT      , RM_HUEU      , RM_SATU       , RM_VALU,
    G(KC_TAB), C(A(KC_Q)), XXXXXXX      , C(A(KC_UP))  , XXXXXXX       , C(A(KC_T)),
    XXXXXXX  , XXXXXXX   , C(A(KC_LEFT)), C(A(KC_DOWN)), C(A(KC_RIGHT)), G(S(KC_S)),
    XXXXXXX  , XXXXXXX   , LALT(KC_F4)  , XXXXXXX      , XXXXXXX       , XXXXXXX,
                                                         _______     , _______,

                      C(A(KC_Y)), C(A(KC_7)), C(A(KC_8)), C(A(KC_9)), KC_VOLD, KC_VOLU,
                      C(A(KC_H)), C(A(KC_4)), C(A(KC_5)), C(A(KC_6)), XXXXXXX, XXXXXXX,
                      C(A(KC_N)), C(A(KC_1)), C(A(KC_2)), C(A(KC_3)), XXXXXXX, QK_LLCK,
                      XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX, XXXXXXX,
             KC_DEL , G(KC_SPC)
  ),

  [FUN] = LAYOUT_LR(  // Funky fun layer.
    _______, _______, _______, _______, _______, _______,
    _______, XXXXXXX, XXXXXXX, KC_LALT, KC_LCTL, XXXXXXX,
    _______, KC_LGUI, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 _______, _______,

                      KC_SCRL, KC_F7  , KC_F8  , KC_F9  , XXXXXXX, XXXXXXX,
                      XXXXXXX, KC_F4  , KC_F5  , KC_F6  , XXXXXXX, XXXXXXX,
                      XXXXXXX, KC_F1  , KC_F2  , KC_F3  , XXXXXXX, QK_LLCK,
                      XXXXXXX, KC_F10 , KC_F11 , KC_F12 , XXXXXXX, XXXXXXX,
             _______, _______
  ),

  [NAV] = LAYOUT_LR(  // Mouse layer.
    _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP, _______,
    _______, XXXXXXX, XXXXXXX, KC_UP  , XXXXXXX, XXXXXXX,
    _______, KC_DEL , KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 _______, _______,

                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      MS_WHLL, MS_WHLU, MS_WHLD, MS_WHLR, XXXXXXX, XXXXXXX,
                      MS_LEFT, MS_UP  , MS_DOWN, MS_RGHT, XXXXXXX, QK_LLCK,
                      KC_MUTE, KC_VOLU, KC_VOLD, XXXXXXX, XXXXXXX, TO(BASE),
             MS_BTN2, MS_BTN1
  ),

  [ARR] = LAYOUT_LR(  // Arrow layer.
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                 _______, _______,

                      XXXXXXX, XXXXXXX     , XXXXXXX  , XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, C(S(KC_TAB)), C(KC_TAB), XXXXXXX, XXXXXXX, XXXXXXX,
                      XXXXXXX, XXXXXXX     , XXXXXXX  , XXXXXXX, XXXXXXX, QK_LLCK,
                      XXXXXXX, XXXXXXX     , XXXXXXX  , XXXXXXX, XXXXXXX, TO(BASE),
             _______, _______
  ),


};

