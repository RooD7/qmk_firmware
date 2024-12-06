// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define KC_COPY LCTL(KC_C)
#define KC_PASTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ Esc  │ 1 │ 2 │ 3 │ 4 │ 5 │ - │                     │ = │ 6 │ 7 │ 8 │ 9 │ 0 │  Bsp │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │ [ │                     │ ] │ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │   `  │ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │ Ente │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B │ B │                     │ N │ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│F4 │F5 │GUI│Alt│         │CP │PT │ │Alt│Del│         │ ← │ ↓ │ ↑ │ → │GUI│
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │PgU│ │PgD│   │   │
     *                              │   │Bsp├───┤ ├───┤Ent│   │
     *                              │   │   │Hom│ │End│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    
    // 1, A = F7, B4
    //      = B3, B4
    // 
                                            
    // LEFT
    // F7, B1, B3, B2, B6, F6, F4 "rows": ["F7", "B1", "B3", "B2", "B6", "F6", "F4"]
    // B5, B4, E6, D7, C6, D4, D0, D1, F5 "cols": ["B5", "B4", "E6", "D7", "C6", "D4", "D0", "D1", "F5"]
    // "matrix_pins": {
    //     "rows": ["F7", "B1", "B3", "B2", "B6", "F6", "F4"],
    //     "cols": ["B5", "B4", "E6", "D7", "C6", "D4", "D0", "D1", "F5"]
    // },

    // RIGHT
    // F7, B1, B3, B2, B6, F6, F4 "rows": ["F7", "B1", "B3", "B2", "B6", "F6", "F4"]
    // D0, D4, C6, D7, E6, B4, B5, D1, F5 "cols": ["D0", "D4", "C6", "D7", "E6", "B4", "B5", "D1", "F5"]
    // "matrix_pins": {
    //     "rows": ["F7", "B1", "B3", "B2", "B6", "F6", "F4"],
    //     "cols": ["D0", "D4", "C6", "D7", "E6", "B4", "B5", "D1", "F5"]
    // }
    // "usb_detect": {
    //     "enabled": true
    // },

    [0] = LAYOUT(

        KC_EQL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_RBRC,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LBRC,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
                 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_RGUI,
        KC_DEL, KC_ENT,
        KC_RALT, KC_PGDN, KC_END,
        KC_SPC,


        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,
        KC_QUOT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_SCLN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    
        KC_LCTL, KC_VOLD,   KC_VOLU,   KC_LGUI, KC_LALT,
                                                     KC_COPY,   KC_BSPC,
                                                                KC_PGUP,
                                            KC_PASTE, KC_HOME,   KC_SPC
    )
};