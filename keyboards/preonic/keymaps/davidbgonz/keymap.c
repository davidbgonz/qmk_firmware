/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _COLEMAK,
  _COLEMAK_DH,
  //_DVORAK,
  _LOWER,
  _RAISE,
  _FUNCTION,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  COLEMAK_DH,
  //DVORAK,
  LOWER,
  RAISE,
  FUNCTION,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Sh/En |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Func | Caps | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,   \
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,    \
  KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,   \
  KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT, \
  FUNCTION, KC_CAPS, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT    \
),

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Sh/En |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Func | Caps | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_preonic_grid( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,   \
  KC_TAB,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_DEL,    \
  KC_LCTL,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,   \
  KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT, \
  FUNCTION, KC_CAPS, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT    \
),

/* Colemak DH
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |   /  |Sh/En |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Func | Caps | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK_DH] = LAYOUT_preonic_grid( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,   \
  KC_TAB,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_DEL,    \
  KC_LCTL,  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,   \
  KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT, \
  FUNCTION, KC_CAPS, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT    \
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Sh/En |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Func | Caps | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
/*
[_DVORAK] = LAYOUT_preonic_grid( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,   \
  KC_TAB,   KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL,    \
  KC_LCTL,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,   \
  KC_LSFT,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_SFTENT, \
  FUNCTION, KC_CAPS, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT    \
),
*/

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  | Alt 1| Alt 2| Alt 3| Alt 4| Alt 5| Alt 6| Alt 7| Alt 8| Alt 9| Alt 0| Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |MseMid|  F1  |      |Meta D|      |      |      |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Trns |      |      |CtlShC|CtlShV|      |      |      |      | Home | End  | Trns |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Trns | Trns | Trns | Trns | Trns |    Trns     | Trns | Play | Vol- | Vol+ | Next |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid( \
  KC_GRV,  LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), KC_BSPC, \
  KC_TILD, KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_DEL,  \
  KC_BTN3, KC_F1,      XXXXXXX,    LGUI(KC_D), XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_PIPE, \
  _______, XXXXXXX,    XXXXXXX,    C(S(KC_C)), C(S(KC_V)), XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_HOME,    KC_END,     _______, \
  _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_MPLY,    KC_VOLD,    KC_VOLU,    KC_MNXT  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |Meta 1|Meta 2|Meta 3|Meta 4|Meta 5|Meta 6|Meta 7|Meta 8|Meta 9|Meta 0| Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |  F1  |  F2  |  F3  |  F4  |      |      |      |      |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F5  |  F6  |  F7  |  F8  |      |      |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Trns |  F9  |  F10 |  F11 |  F12 |      |      |   :  |      |Pg Up |Pg Dn | Trns |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Trns | Trns | Trns | Trns | Trns |     Trns    | Trns |MseLf |MseDn |MseUp |MseRt |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid( \
  KC_TILD, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_BSPC, \
  KC_GRV,  KC_F1,      KC_F2,      KC_F3,      KC_F4,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_LPRN,    KC_RPRN,    KC_DEL,  \
  KC_DEL,  KC_F5,      KC_F6,      KC_F7,      KC_F8,      XXXXXXX,    XXXXXXX,    KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_BSLS, \
  _______, KC_F9,      KC_F10,     KC_F11,     KC_F12,     XXXXXXX,    XXXXXXX,    KC_COLN,    XXXXXXX,    KC_PGUP,    KC_PGDN,    _______, \
  _______, _______,    _______,    _______,    _______,    _______,    _______,    _______,    KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R  \
),

/* Function
 * ,-----------------------------------------------------------------------------------.
 * |Ctrl `|      |      |      |      |      | Num  |  /   |  *   |      |      |Insert|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |  7   |  8   |  9   |  -   |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |  4   |  5   |  6   |  +   |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |CtlShC|CtlShV|      |  1   |  2   |  3   |  =   |      |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Trns |      |      |      |      |      0      |  .   | Home |Pg Dn |Pg Up | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_FUNCTION] = LAYOUT_preonic_grid( \
  C(KC_GRV), XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX, KC_NLCK, KC_PSLS, KC_PAST, XXXXXXX, XXXXXXX, KC_INS,  \
  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, XXXXXXX, XXXXXXX, \
  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, XXXXXXX, XXXXXXX, \
  XXXXXXX,   XXXXXXX, XXXXXXX, C(S(KC_C)), C(S(KC_V)), XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, XXXXXXX, KC_PENT, \
  _______,   XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    KC_P0,   KC_P0,   KC_PDOT, KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Reset |Debug |      |      |      |      |Trm On|Trm Of|      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|Qwerty|Colemk|ClmkDH|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | Trns |     Trns    | Trns |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,  KC_F12,  \
  XXXXXXX, RESET,   DEBUG,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TERM_ON, TERM_OFF, XXXXXXX,    XXXXXXX, XXXXXXX,  \
  XXXXXXX, XXXXXXX, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK,  COLEMAK_DH, XXXXXXX, XXXXXXX, \
  XXXXXXX, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  XXXXXXX, XXXXXXX,  XXXXXXX,    XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX,  XXXXXXX,    XXXXXXX, XXXXXXX  \
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
            break;
//      case DVORAK:
//          if (record->event.pressed) {
//              set_single_persistent_default_layer(_DVORAK);
//          }
//          return false;
//          break;
        case COLEMAK_DH:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK_DH);
            }
            return false;
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case FUNCTION:
            if (record->event.pressed) {
                layer_on(_FUNCTION);
            } else {
                layer_off(_FUNCTION);
            }
            return false;
            break;
        case BACKLIT:
            if (record->event.pressed) {
                register_code(KC_RSFT);
                #ifdef BACKLIGHT_ENABLE
                backlight_step();
                #endif
                #ifdef __AVR__
                writePinLow(E6);
                #endif
            } else {
                unregister_code(KC_RSFT);
                #ifdef __AVR__
                writePinHigh(E6);
                #endif
            }
            return false;
            break;
        }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
