#include QMK_KEYBOARD_H

enum unicode_names { AE_L, AE_U, EURO, OE_L, OE_U, SZ, UE_L, UE_U };

const uint32_t PROGMEM unicode_map[] = {
    [AE_L] = 0x00E4, [AE_U] = 0x00C4, [EURO] = 0x20AC, [OE_L] = 0x00F6, [OE_U] = 0x00D6, [SZ] = 0x00DF, [UE_L] = 0x00FC, [UE_U] = 0x00DC,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   [  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Arrw |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Umlt |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  Win | Alt  | Nmbr |Shift |    Space    | Ctrl | Nmbr | Alt  | Win  |      |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_1x2uC(
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,
    MO(1),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,
    MO(3),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_ENT,
    KC_NO,          KC_LGUI,        KC_LALT,        MO(2),          KC_LSFT,        KC_SPC,                         KC_RCTL,        MO(2),          KC_RALT,        KC_RGUI,        KC_NO),

/* Arrw
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty| F11  | F12  |      |      | Home | Left | Down |  Up  |Right | End  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Debug | Boot |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_planck_1x2uC(
    KC_ESC,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_BSPC,
    KC_TRNS,        KC_F11,         KC_F12,         KC_NO,          KC_NO,          KC_HOME,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        KC_END,         KC_DEL,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    DB_TOGG,        QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO),

/* Nmbr
 * ,-----------------------------------------------------------------------------------.
 * |  ~   |  !   |  @   |  #   |  $   |  %   |  ^   |  &   |  *   |  (   |  )   |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  `   |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  +   |  -   |      |  {   |  [   |  ]   |  }   |      |  _   |  =   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Win  | Alt  |Qwerty|Shift |    Space    | Ctrl |Qwerty| Alt  | Win  |      |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_planck_1x2uC(
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_PIPE,
    KC_GRV,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,
    KC_NO,          KC_PLUS,        KC_PMNS,        KC_NO,          KC_LCBR,        KC_LBRC,        KC_RBRC,        KC_RCBR,        KC_NO,          KC_UNDS,        KC_EQL,         KC_NO,
    KC_NO,          KC_LGUI,        KC_LALT,        KC_TRNS,        KC_LSFT,        KC_SPC,                         KC_RCTL,        KC_TRNS,        KC_RALT,        KC_RGUI,        KC_NO),

/* Umlt
 * ,-----------------------------------------------------------------------------------.
 * |      |      |UcWin | Euro |      |      |      |  Ue  |      |  Oe  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  Ae  |  Sz  |      |      |      |      |      |      |UcLin |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Qwerty|      |      |      |      |      |      |UcMac |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Shift |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_planck_1x2uC(
    KC_NO,          KC_NO,          UC_WINC,        UM(EURO),       KC_NO,          KC_NO,          KC_NO,          UP(UE_L, UE_U), KC_NO,          UP(OE_L, OE_U), KC_NO,          KC_NO,
    KC_NO,          UP(AE_L, AE_U), UM(SZ),         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          UC_LINX,        KC_NO,          KC_NO,
    KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          UC_MAC,         KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_LSFT,        KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO)

};
// clang-format on

/* Brckt
to delete
 */
