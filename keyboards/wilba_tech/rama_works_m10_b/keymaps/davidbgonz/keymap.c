#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Workspaces
 * ,--------------------.
 * |      |      |      |
 * |--------------------|
 * |      |      |      |
 * |--------------------|
 * |      |      |      |
 * `--------------------|
 *        |             |
 *        `-------------'
 */
LAYOUT(
  KC_KP_7, KC_KP_8, KC_KP_9, \
  KC_KP_4, KC_KP_5, KC_KP_6, \
  KC_KP_1, KC_KP_2, KC_KP_3, \
                    KC_KP_0  \
),

/* Macro
 * ,--------------------.
 * |      |      |      |
 * |--------------------|
 * |      |      |      |
 * |--------------------|
 * |      |      |      |
 * `--------------------|
 *        |             |
 *        `-------------'
 */
LAYOUT(
  KC_KP_7, KC_KP_8, KC_KP_9, \
  KC_KP_4, KC_KP_5, KC_KP_6, \
  KC_KP_1, KC_KP_2, KC_KP_3, \
                    KC_KP_0  \
)

};
