// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT(KC_ESCAPE, KC_ENTER, KC_MUTE, KC_COPY, KC_CUT, KC_PASTE),

    #ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { 
    return OLED_ROTATION_180; 
}

bool oled_task_user(void) {

    oled_set_cursor(7, 1); 
    oled_write_P(PSTR("=^._.^="), false);
    
    
    return true; 
}
#endif

};
