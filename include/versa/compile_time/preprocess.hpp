#pragma once

#include <array>

#define VERSA_EXPAND(X) X

#define VERSA_GET_NTH_ARG(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, NAME, ...) NAME

#define VERSA_FE0(MAC, ...)
#define VERSA_FE1(MAC,  A, B) MAC(A, B)
#define VERSA_FE2(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE1(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE3(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE2(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE4(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE3(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE5(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE4(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE6(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE5(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE7(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE6(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE8(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE7(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE9(MAC,  A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE8(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE10(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE9(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE11(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE10(MAC, A, ##__VA_ARGS__))
#define VERSA_FE12(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE11(MAC, A, ##__VA_ARGS__))
#define VERSA_FE13(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE12(MAC, A, ##__VA_ARGS__))
#define VERSA_FE14(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE13(MAC, A, ##__VA_ARGS__))
#define VERSA_FE15(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE14(MAC, A, ##__VA_ARGS__))
#define VERSA_FE16(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE15(MAC, A, ##__VA_ARGS__))
#define VERSA_FE17(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE16(MAC, A, ##__VA_ARGS__))
#define VERSA_FE18(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE17(MAC, A, ##__VA_ARGS__))
#define VERSA_FE19(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE18(MAC, A, ##__VA_ARGS__))
#define VERSA_FE20(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE19(MAC, A, ##__VA_ARGS__))
#define VERSA_FE21(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE20(MAC, A, ##__VA_ARGS__))
#define VERSA_FE22(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE21(MAC, A, ##__VA_ARGS__))
#define VERSA_FE23(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE22(MAC, A, ##__VA_ARGS__))
#define VERSA_FE24(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE23(MAC, A, ##__VA_ARGS__))
#define VERSA_FE25(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE24(MAC, A, ##__VA_ARGS__))
#define VERSA_FE26(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE25(MAC, A, ##__VA_ARGS__))
#define VERSA_FE27(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE26(MAC, A, ##__VA_ARGS__))
#define VERSA_FE28(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE27(MAC, A, ##__VA_ARGS__))
#define VERSA_FE29(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE28(MAC, A, ##__VA_ARGS__))
#define VERSA_FE30(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE29(MAC, A, ##__VA_ARGS__))
#define VERSA_FE31(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE30(MAC, A, ##__VA_ARGS__))
#define VERSA_FE32(MAC, A, B, ...) MAC(A, B) VERSA_EXPAND(VERSA_FE31(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA2(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE1(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA3(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA2(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA4(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA3(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA5(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA4(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA6(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA5(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA7(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA6(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA8(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA7(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA9(MAC,  A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA8(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA10(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA9(MAC,  A, ##__VA_ARGS__))
#define VERSA_FE_COMMA11(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA10(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA12(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA11(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA13(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA12(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA14(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA13(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA15(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA14(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA16(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA15(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA17(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA16(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA18(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA17(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA19(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA18(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA20(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA19(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA21(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA20(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA22(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA21(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA23(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA22(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA24(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA23(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA25(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA24(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA26(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA25(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA27(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA26(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA28(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA27(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA29(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA28(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA30(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA29(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA31(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA30(MAC, A, ##__VA_ARGS__))
#define VERSA_FE_COMMA32(MAC, A, B, ...) MAC(A, B), VERSA_EXPAND(VERSA_FE_COMMA31(MAC, A, ##__VA_ARGS__))

#define VERSA_FOREACH_NO_COMMA(MAC, D, ...)        \
   VERSA_GET_NTH_ARG("ignored", ##__VA_ARGS__,     \
      VERSA_FE32,VERSA_FE31,VERSA_FE30,VERSA_FE29,VERSA_FE28,VERSA_FE27,VERSA_FE26,VERSA_FE25,VERSA_FE24,VERSA_FE23,VERSA_FE22,VERSA_FE21,VERSA_FE20,VERSA_FE19,VERSA_FE18,VERSA_FE17,VERSA_FE16,VERSA_FE15,VERSA_FE14,VERSA_FE13,VERSA_FE12,VERSA_FE11,VERSA_FE10,VERSA_FE9,VERSA_FE8,VERSA_FE7,VERSA_FE6,VERSA_FE5,VERSA_FE4,VERSA_FE3,VERSA_FE2,VERSA_FE1,VERSA_FE0)(MAC, D, ##__VA_ARGS__)

#define VERSA_FOREACH(MAC, D, ...)                        \
   VERSA_GET_NTH_ARG("ignored", ##__VA_ARGS__,            \
      VERSA_FE_COMMA32,VERSA_FE_COMMA31,VERSA_FE_COMMA30,VERSA_FE_COMMA29,VERSA_FE_COMMA28,VERSA_FE_COMMA27,VERSA_FE_COMMA26,VERSA_FE_COMMA25,VERSA_FE_COMMA24,VERSA_FE_COMMA23,VERSA_FE_COMMA22,VERSA_FE_COMMA21,VERSA_FE_COMMA20,VERSA_FE_COMMA19,VERSA_FE_COMMA18,VERSA_FE_COMMA17,VERSA_FE_COMMA16,VERSA_FE_COMMA15,VERSA_FE_COMMA14,VERSA_FE_COMMA13,VERSA_FE_COMMA12,VERSA_FE_COMMA11,VERSA_FE_COMMA10,VERSA_FE_COMMA9,VERSA_FE_COMMA8,VERSA_FE_COMMA7,VERSA_FE_COMMA6,VERSA_FE_COMMA5,VERSA_FE_COMMA4,VERSA_FE_COMMA3,VERSA_FE_COMMA2,VERSA_FE1,VERSA_FE0)(MAC, D, ##__VA_ARGS__)

#define VERSA_EXPAND_STR(ignore, X) #X

#define VERSA_VA_ARGS_SIZE(...)   \
   (std::array{ VERSA_FOREACH( VERSA_EXPAND_STR, "ignore", ##__VA_ARGS__)}.size())