/*
Copyright 2020 Álvaro "Gondolindrim" Volpato <alvaro.volpato@usp.br>

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


#define KC_CTSH C_S_T(KC_CAPS)


enum custom_keycodes {
  M_JIGL = SAFE_RANGE,
  // Other custom keys...
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_ansi_blocker(
        KC_ESC  , KC_F1  , KC_F2  , KC_F3  , KC_F4  ,          KC_F5  , KC_F6,  KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,           KC_DEL ,
        KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6,   KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC,          KC_HOME,
        KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y,   KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CTSH , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H,   KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,                   KC_PGDN,
        KC_LSFT ,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B,   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          KC_UP  , KC_END ,
        KC_LCTL , KC_LGUI, KC_LALT,                            KC_SPC,                            KC_RALT, TT(1)  ,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_ansi_blocker(
        KC_TRNS, TO(0)  , TO(1)  , TO(2)  , TO(3)  ,          KC_TRNS, KC_TRNS, KC_TRNS, M_JIGL , KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_MUTE,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_VOLD,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_MPLY,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_MPRV, KC_TRNS, KC_MNXT
    ),
    [2] = LAYOUT_ansi_blocker(
        KC_TRNS, TO(0)  , TO(1)  , TO(2)  , TO(3)  ,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_ansi_blocker(
        KC_TRNS, TO(0)  , TO(1)  , TO(2)  , TO(3)  ,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
        QK_LEAD,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    )
};


bool is_mouse_jiggle_active = false;
bool mouse_jiggle_direction = false; // used to alternate direction
uint16_t mouse_jiggle_frequency = 1000; // how often to move the mouse (1 seconds)
uint16_t mouse_jiggle_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case M_JIGL:
          if (record->event.pressed) {
              is_mouse_jiggle_active = !is_mouse_jiggle_active;
          }
          break;
    }

    return true;
}

void matrix_scan_user(void) {
    if (is_mouse_jiggle_active) {
        if (timer_elapsed(mouse_jiggle_timer) > mouse_jiggle_frequency) {
            mouse_jiggle_timer = timer_read();
            if (mouse_jiggle_direction) {
                tap_code(KC_MS_LEFT);
            } else {
                tap_code(KC_MS_RIGHT);
            }
            mouse_jiggle_direction = !mouse_jiggle_direction;
        }
    }
}


void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        // Leader, f => Types the below string
        SEND_STRING("QMK is awesome.");
    } else if (leader_sequence_two_keys(KC_A, KC_C)) {
        // Leader, a, c => Ctrl+A, Ctrl+C
        SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
    } else if (leader_sequence_two_keys(KC_A, KC_V)) {
        // Leader, a, v => Ctrl+A, Ctrl+V
        SEND_STRING(SS_LCTL("a") SS_LCTL("v"));
    // } else if (leader_sequence_two_keys(KC_A, KC_D)) {
    //     // Leader, a, d => Ctrl+A, Del
    //     SEND_STRING(SS_LCTL("a"));
    //     SEND_STRING(KC_DEL);
    // } else if (leader_sequence_three_keys(KC_D, KC_D, KC_S)) {
    //     // Leader, d, d, s => Types the below string
    //     SEND_STRING("https://start.duckduckgo.com\n");
    // } else if (leader_sequence_two_keys(KC_A, KC_S)) {
    //     // Leader, a, s => GUI+S
    //     tap_code16(LGUI(KC_S));
    }
}