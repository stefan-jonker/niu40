#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENTER,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_BSLASH,   KC_SLASH,
        KC_LCTL, KC_LGUI, KC_LALT, MO(1), _______,     KC_SPC,     _______, MO(2), _______, _______, _______
    ),

    [1] = LAYOUT_planck_mit(
        KC_GRV, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, KC_LBRACKET, KC_RBRACKET, _______, KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_QUOTE, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MINUS, KC_EQUAL, _______, _______, _______,
        _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT_planck_mit(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,
        _______, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, _______, _______, _______,  _______,  KC_F11, KC_F12, _______,
        _______, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, _______, _______, _______, _______, _______, _______, _______,
        _______,   _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    )
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}

