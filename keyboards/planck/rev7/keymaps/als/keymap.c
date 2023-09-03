#include QMK_KEYBOARD_H

enum unicode_names { AE_L, AE_U, EURO, OE_L, OE_U, SZ, UE_L, UE_U };

const uint32_t PROGMEM unicode_map[] = {
    [AE_L] = 0x00E4, [AE_U] = 0x00C4, [EURO] = 0x20AC, [OE_L] = 0x00F6, [OE_U] = 0x00D6, [SZ] = 0x00DF, [UE_L] = 0x00FC, [UE_U] = 0x00DC,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_planck_1x2uC(
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,
    MO(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
    KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_ENT,
    KC_LCTL,        KC_LGUI,        KC_LALT,        MO(4),          MO(2),          KC_SPC,                         MO(3),          MO(4),          KC_RALT,        KC_RGUI,        KC_RCTL),

[1] = LAYOUT_planck_1x2uC(
    KC_ESC,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,
    KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        KC_NO,          KC_DEL,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO),

[2] = LAYOUT_planck_1x2uC(
    KC_GRV,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,          KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,
    KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
    KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_COMM,        KC_DOT,         KC_PMNS,        KC_PEQL,
    DB_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_TRNS,        KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO),

[3] = LAYOUT_planck_1x2uC(
    KC_TILD,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LCBR,        KC_RCBR,        KC_PIPE,
    KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_UNDS,        KC_PLUS,
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO),

[4] = LAYOUT_planck_1x2uC(
    KC_NO,          KC_NO,          UC_WINC,        UM(EURO),       KC_NO,          KC_NO,          KC_NO,          UP(UE_L, UE_U), KC_NO,          UP(OE_L, OE_U), KC_NO,          KC_NO,
    KC_NO,          UP(AE_L, AE_U), UM(SZ),         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          UC_LINX,        KC_NO,          KC_NO,
    KC_LSFT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          UC_MAC,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_TRNS,        KC_NO,          KC_NO,                          KC_NO,          KC_TRNS,        KC_NO,          KC_NO,          KC_NO)

};
// clang-format on
