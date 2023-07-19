#pragma once
#include "quantum.h"
/*QMK uses KC_NO to designate places in the switch matrix where there is no switch.
Sometimes, XXX, ___ or ____ are used as shorthand */
#define XXX KC_NO

#define LAYOUT( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, \
    K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,       K314, \
    K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,       K413, K414, \
    K500, K501, K502,             K505                  , K509, K510, K511, K512, K513, K514  \
    ) \
{ \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, XXX  }, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114 }, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214 }, \
    { K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,  XXX, K314 }, \
    { K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,  XXX, K413, K414 }, \
    { K500, K501, K502,  XXX,  XXX, K505,  XXX,  XXX,  XXX, K509, K510, K511, K512, K513, K514 }  \
}