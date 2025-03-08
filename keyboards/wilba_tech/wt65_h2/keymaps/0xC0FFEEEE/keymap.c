// Copyright 2024 Jason Williams (@wilba)
// SPDX-License-Identifier: GPL-2.0-or-later

// Default layout for WT65-H2
#include QMK_KEYBOARD_H

#define KC_CTSH C_S_T(KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Default layer
    [0] = LAYOUT_65_ansi_blocker_wkl(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CTSH, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,   MO(1),
        KC_LCTL,          KC_LALT,                            KC_SPC,                                      KC_RALT,          KC_LEFT, KC_DOWN, KC_RGHT),

    // Fn1 Layer
    [1] = LAYOUT_65_ansi_blocker_wkl(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,          KC_INS,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SCRL, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_EJCT, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
        KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_PGDN, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS,
        KC_TRNS,          KC_TRNS,                            KC_TRNS,                                     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),
};
