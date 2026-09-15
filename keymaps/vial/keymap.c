#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x15(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_P7, KC_P8, KC_P9, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_P4, KC_P5, KC_P6, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_P1, KC_P2, KC_P3, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LALT, KC_P0, KC_RALT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_SENT, KC_LCTL, KC_LGUI, KC_LBRC, KC_MINS, TT(1), TT(1), TT(2), KC_NUM, TT(2), KC_SPC, KC_SPC, KC_EQL, KC_RBRC, KC_BSLS, KC_RCTL),
    [1] = LAYOUT_ortho_5x15(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F10, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT_ortho_5x15(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_NO, RM_TOGG, RM_NEXT, RM_HUEU, KC_NO, MS_BTN1, MS_UP, MS_BTN2, MS_WHLU, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RM_SATU, RM_VALU, RM_SPDU, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_BTN3, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
{29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15},
{30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44},
{59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45},
{60, 61, 62, 63, 64, 65, 66, 67, 68, 69 ,70, 71, 72, 73, 74}
},

{
{0, 0}, {16, 0}, {32, 0}, {48, 0}, {64, 0}, {80, 0}, {96, 0}, {112, 0}, {128, 0}, {144, 0}, {160, 0}, {176, 0}, {192, 0},{208, 0},{224, 0},
{224, 16}, {208, 16}, {192, 16}, {176, 16}, {160, 16}, {144, 16}, {128, 16}, {112, 16}, {96, 16}, {80, 16}, {64, 16}, {48, 16}, {32, 16}, {16, 16}, {0, 16},
{0, 32}, {16, 32}, {32, 32}, {48, 32}, {64, 32}, {80, 32}, {96, 32}, {112, 32}, {128, 32}, {144, 32}, {160, 32}, {176, 32}, {192, 32},{208, 32},{224, 32},
{224, 48}, {208, 48}, {192, 48}, {176, 48}, {160, 48}, {144, 48}, {128, 48}, {112, 48}, {96, 48}, {80, 48}, {64, 48}, {48, 48}, {32, 48}, {16, 48}, {0, 48},
{0, 64}, {16, 64}, {32, 64}, {48, 64}, {64, 64}, {80, 64}, {96, 64}, {112, 64}, {128, 64}, {144, 64}, {160, 64}, {176, 64}, {192, 64},{208, 64},{224, 64},

{232, 56}, {184, 56}, {136, 56}, {88, 56}, {40, 56}, {8, 56},
{8, 8}, {40, 8}, {88, 8}, {136, 8}, {184, 8}, {232, 8}
},

{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
 
 2, 2, 2, 2, 2, 2,
 2, 2, 2, 2, 2, 2 
}
};
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    //                  Encoder 1                                     Encoder 2
};
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    hsv_t hsv = {234, 128, 130};
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 1:
                if (get_highest_layer(layer_state) > 0) {
                    hsv = (hsv_t){213, 255, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
                for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
                for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(1, (keypos_t){col,row}) > KC_TRNS) {
                rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
                }
                }
                }
                break;
            case 2:
                if (get_highest_layer(layer_state) > 0) {
                    hsv = (hsv_t){128, 255, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
                for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
                for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(2, (keypos_t){col,row}) > KC_TRNS) {
                rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
                }
                }
                }
                break;
            case 3:
                if (get_highest_layer(layer_state) > 0) {
                    hsv = (hsv_t){43, 255, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
                for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
                for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(3, (keypos_t){col,row}) > KC_TRNS) {
                rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
                }
                }
                }
                break;
            case 4:
                if (get_highest_layer(layer_state) > 0) {
                    hsv = (hsv_t){85, 255, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
                for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
                for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(4, (keypos_t){col,row}) > KC_TRNS) {
                rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
                }
                }
                }
                break;
        }
        //caps lock indicator
            if (host_keyboard_led_state().caps_lock) {
                    hsv = (hsv_t){0, 0, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
            RGB_MATRIX_INDICATOR_SET_COLOR(59, rgb.r, rgb.g, rgb.b);
        }
        //num lock indicator
            if (host_keyboard_led_state().num_lock) {
                    hsv = (hsv_t){0, 0, 130};
                if (hsv.v > rgb_matrix_get_val()) {
                    hsv.v = rgb_matrix_get_val();
                }
                rgb_t rgb = hsv_to_rgb(hsv);
            RGB_MATRIX_INDICATOR_SET_COLOR(67, rgb.r, rgb.g, rgb.b);
        }
        return false;
}
