#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L| ;|  '|Enter    |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|Slash|Shift   |
     * |-----------------------------------------------------------|
     * |Caps |Alt |Gui  |       Space            |Gui   |Alt |Ctrl |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_AEK( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC, RBRC, BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, ENT, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT, \
        CAPS,LALT,LGUI,          FN0,                  RGUI,RALT, RCTL),

    /* SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |
     * |-----------------------------------------------------------|
     * |     |   |   |VOLU|PGUP|   |   |Home|End|  |Psc|Slk|Pau|Ins|
     * |-----------------------------------------------------------|
     * |     |   |   |VOLD|PGDN|   |Left|Down|Up|Rght|   |   |     |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|`  |~  |   |   |   |          |
     * |-----------------------------------------------------------|
     * |     |    |     |       Space            |      |    |     |
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP_AEK( \
        GRV,   F1,    F2,    F3,    F4,    F5,    F6,    F7,   F8,    F9,    F10,   F11,  F12,   DEL, \
        TRNS,  TRNS,  TRNS,  VOLU,  PGUP,  TRNS,  TRNS,  HOME, END,   TRNS,  PSCR,  SLCK, PAUS,  INS, \
        TRNS,  TRNS,  TRNS,  VOLD,  PGDN,  TRNS,  LEFT,  DOWN, UP  ,  RIGHT, TRNS,  TRNS, TRNS, \
        TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  SPC,   GRV,   FN1,  TRNS,  TRNS,  TRNS,  TRNS, \
        TRNS,  TRNS,  TRNS,                TRNS,                             TRNS,  TRNS,  TRNS),
};

/*
 * Fn action definition
 */
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
