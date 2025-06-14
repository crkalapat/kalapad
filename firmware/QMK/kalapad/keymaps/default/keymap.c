// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MPRV,   KC_MPLY,   KC_MNXT,
        KC_VOLD,   KC_MUTE,   KC_VOLU,
        KC_MCTL,   KC_LPAD,   KC_EJCT
    )
};
