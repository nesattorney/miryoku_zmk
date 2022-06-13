// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

//QWERTY LAYER TO BE ADDED
#define MIRYOKU_LAYER_CFG \
XXX,               XXX,               XXX,               XXX,               &reset,                  &tog 10,           &tog 10,           XXX,               XXX,               XXX,   \
XXX,               XXX,               XXX,               XXX,               XXX,                     XXX,               XXX,               XXX,               XXX,               XXX,   \
&bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_SEL 3,      &bt BT_SEL 4,            XXX,               XXX,               XXX,               XXX,               XXX,   \
XXX,               &bt BT_CLR,        XXX,               XXX,               XXX,                     XXX,               XXX,               XXX,               XXX,               XXX


// #define MIRYOKU_LAYER_FGC \
// &kpN1,             &kpN2,             &kpN3,             &kpN4,             &kpN5,                   &kpN6,             &kp KP_NLCK,       &kp KP_SLASH,      &kp KP_ASTERISK,   &kp U,   \
// &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,                   &kp Y,             &kp KP_N7,         &kp KP_N8,         &kp KP_N9,         &kp Y,   \
// &kp A,             &kp S,             &kp D,             &kp F,             &kp G,                   &kp H,             &kp KP_N4,         &kp KP_N5,         &kp KP_N6,         &kp KP_DOT,   \
// &kp TAB,           &kp LSHFT,         &kp LALT,          &kp SPC,           &kp DOWN,                &kp UP,            &kp RIGHT,         &kp F13,           &kp J,              &kp ENTER

//Colemak mod DH with norwegian letters
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
&lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
&kp RA(L),         U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     &kp RA(W),         &kp RA(Z)


// #define MIRYOKU_LAYER_QWERTY \
// &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
// &hm LGUI A,        &hm LALT S,        &hm LCTRL D,       &hm LSHFT F,       &kp G,             &kp H,             &hm LSHFT J,       &hm LCTRL K,       &hm LALT L,        &hm LGUI SQT,      \
// &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
// &kp RA(L),         U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     &kp RA(W),         &kp RA(Z)


#define MIRYOKU_LAYERMAPPING_CFG MIRYOKU_MAPPING
// #define MIRYOKU_LAYERMAPPING_FGC MIRYOKU_MAPPING
// #define MIRYOKU_LAYERMAPPING_QWERTY MIRYOKU_MAPPING


//MIRYOKU LAYOUTMAPPING CORNE

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     K30, K31, K32, K33, K34,      K35, K36, K37, K38, K39 \
) \
&mo 10   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp KP_MINUS \
K30      K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K38 \
K31      K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K39 \
                   K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40


//LIST OF LAYERS
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(CFG,    "Config") \
// MIRYOKU_X(FGC,    "FGC") \
// MIRYOKU_X(QWERTY, "QWERTY") \

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_CFG    10
// #define U_FGC    11
// #define U_QWERTY 12