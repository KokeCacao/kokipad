#include QMK_KEYBOARD_H

#define FIRST_LAYER 0
#define SECOND_LAYER 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [FIRST_LAYER] = LAYOUT(
      KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM,
      KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM,
      KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM,
      KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM,
      KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM, KC_NUM,
      KC_NUM, KC_NUM, KC_NUM, KC_NUM
  )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {
  
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

