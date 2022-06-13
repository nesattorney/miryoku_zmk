// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


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
#define U_CFG    10 //Added new layer here


//QWERTY LAYER TO BE ADDED
#define XXX &none

//custom layer, but only 5 col
#define MIRYOKU_LAYER_CFG \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,        \
&hm A,             &hm S,             &hm D,             &hm F,             &kp G,             &kp H,             &hm J,             &hm K,             &hm L,             &hm SQT,      \
&lt Z,             &hm X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &hm DOT,           &lt SLASH,    \
U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

// #define MIRYOKU_LAYER_CFG \
// &mo 10,            &none,             &none,             &none,             &none,             &reset,            &mo 10,            &none,             &none, &none, &none, &tog 1,\
// &none,             &none,             &none,             &none,             &none,             &none,             &none,             &none,             &none, &none, &none, &tog 2,\
// &bt BT_CLR,        &bt BT_SEL 0,      &bt BT_SEL 1,      &bt BT_SEL 2,      &bt BT_SEL 3,     &bt BT_SEL 4,       &none,             &none,             &none, &none, &none, &none,\
//                                                              &none, &none, &none,           &none, &none, &none

// #define MIRYOKU_LAYER_BASE \
// &kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
// &hm LGUI A,        &hm LALT R,        &hm LCTRL S,       &hm LSHFT T,       &kp G,             &kp M,             &hm LSHFT N,       &hm LCTRL E,       &hm LALT I,        &hm LGUI O,        \
// &lt U_BUTTON Z,    &hm RALT X,        &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &hm RALT DOT,      &lt U_BUTTON SLASH,\
// U_NP,              U_NP,              &lt U_MEDIA ESC,   &lt U_NAV SPC,     &lt U_MOUSE TAB,   &lt U_SYM RET,     &lt U_NUM BSPC,    &lt U_FUN DEL,     U_NP,              U_NP

// #define MIRYOKU_LAYER_CFG \
// XXX,            XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,      \
// XXX,            XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,      \
// XXX,            XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             XXX,      \
// U_NP,           U_NP,            XXX,             XXX,             XXX,             XXX,             XXX,             XXX,             U_NP,            U_NP,     \
// &mo 10          XXX,             XXX,             XXX,             XXX,             XXX


#define MIRYOKU_LAYERMAPPING_CFG MIRYOKU_MAPPING

//MIRYOKU LAYOUTMAPPING CORNE
// Works, but only for 5 column
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&mo 10     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
&kp RA(L)  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RA(W) \
XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RA(Z) \
                     K32  K33  K34       K35  K36  K37

// #define MIRYOKU_LAYOUTMAPPING_CORNE( \
//      K00, K01, K02, K03, K04, K05,    K06, K07, K08, K09, K10, K11, \
//      K12, K13, K14, K15, K16, K17,    K18, K19, K20, K21, K22, K23, \
//      K24, K25, K26, K27, K28, K29,    N30, N31, K32, K33, K34, K35, \
//                     K36, K37, N38,    N39, N40, N41 \
// ) \
// &mo 10     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// &kp RA(L)  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RA(W) \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RA(Z) \
//                      K32  K33  K34       K35  K36  K37

// #define MIRYOKU_LAYOUTMAPPING_CORNE( \
//      K00, K01, K02, K03, K04, K05,      K06, K07, K08, K09, K10, K11,\
//      K12, K13, K14, K15, K16, K17,      K18, K19, K20, K21, K22, K23,\
//      K23, K24, K25, K26, K27, K28,      K29, K30, K31, K32, K33, K34,\
//      K35, K36, K37, N38, N39, K40,      K41, K42, K43, K44, K45, K46\
// ) \
// &mo 10     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// &kp RA(L)  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RA(W) \
// XXX        K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RA(Z) \
//                      K38  K39  K40       K41  K42  K43


// #define MIRYOKU_LAYOUTMAPPING_CORNE( \
// K40, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K43,\
// K41, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, K44,\
// K42, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, K45,\
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// K40  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K43 \
// K41  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K44 \
// K42  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K45 \
//                K32  K33  K34       K35  K36  K37


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
