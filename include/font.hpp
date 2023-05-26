#ifndef FONT_8X8_HPP_
#define FONT_8X8_HPP_

#include <stdint.h>

#define USE_FONT_OPEN 1

#if USE_FONT_OPEN == 1
static const uint64_t font[128] = {
    0x7E7E7E7E7E7E0000, /* NUL */
    0x7E7E7E7E7E7E0000, /* SOH */
    0x7E7E7E7E7E7E0000, /* STX */
    0x7E7E7E7E7E7E0000, /* ETX */
    0x7E7E7E7E7E7E0000, /* EOT */
    0x7E7E7E7E7E7E0000, /* ENQ */
    0x7E7E7E7E7E7E0000, /* ACK */
    0x7E7E7E7E7E7E0000, /* BEL */
    0x7E7E7E7E7E7E0000, /* BS */
    0x0000000000000000, /* TAB */
    0x7E7E7E7E7E7E0000, /* LF */
    0x7E7E7E7E7E7E0000, /* VT */
    0x7E7E7E7E7E7E0000, /* FF */
    0x7E7E7E7E7E7E0000, /* CR */
    0x7E7E7E7E7E7E0000, /* SO */
    0x7E7E7E7E7E7E0000, /* SI */
    0x7E7E7E7E7E7E0000, /* DLE */
    0x7E7E7E7E7E7E0000, /* DC1 */
    0x7E7E7E7E7E7E0000, /* DC2 */
    0x7E7E7E7E7E7E0000, /* DC3 */
    0x7E7E7E7E7E7E0000, /* DC4 */
    0x7E7E7E7E7E7E0000, /* NAK */
    0x7E7E7E7E7E7E0000, /* SYN */
    0x7E7E7E7E7E7E0000, /* ETB */
    0x7E7E7E7E7E7E0000, /* CAN */
    0x7E7E7E7E7E7E0000, /* EM */
    0x7E7E7E7E7E7E0000, /* SUB */
    0x7E7E7E7E7E7E0000, /* ESC */
    0x7E7E7E7E7E7E0000, /* FS */
    0x7E7E7E7E7E7E0000, /* GS */
    0x7E7E7E7E7E7E0000, /* RS */
    0x7E7E7E7E7E7E0000, /* US */
    0x0000000000000000, /* (space) */
    0x0808080800080000, /* ! */
    0x2828000000000000, /* " */
    0x00287C287C280000, /* # */
    0x081E281C0A3C0800, /* $ */
    0x6094681629060000, /* % */
    0x1C20201926190000, /* & */
    0x0808000000000000, /* ' */
    0x0810202010080000, /* ( */
    0x1008040408100000, /* ) */
    0x2A1C3E1C2A000000, /* * */
    0x0008083E08080000, /* + */
    0x0000000000081000, /* , */
    0x0000003C00000000, /* - */
    0x0000000000080000, /* . */
    0x0204081020400000, /* / */
    0x1824424224180000, /* 0 */
    0x08180808081C0000, /* 1 */
    0x3C420418207E0000, /* 2 */
    0x3C420418423C0000, /* 3 */
    0x081828487C080000, /* 4 */
    0x7E407C02423C0000, /* 5 */
    0x3C407C42423C0000, /* 6 */
    0x7E04081020400000, /* 7 */
    0x3C423C42423C0000, /* 8 */
    0x3C42423E023C0000, /* 9 */
    0x0000080000080000, /* : */
    0x0000080000081000, /* ; */
    0x0006186018060000, /* < */
    0x00007E007E000000, /* = */
    0x0060180618600000, /* > */
    0x3844041800100000, /* ? */
    0x003C449C945C201C, /* @ */
    0x1818243C42420000, /* A */
    0x7844784444780000, /* B */
    0x3844808044380000, /* C */
    0x7844444444780000, /* D */
    0x7C407840407C0000, /* E */
    0x7C40784040400000, /* F */
    0x3844809C44380000, /* G */
    0x42427E4242420000, /* H */
    0x3E080808083E0000, /* I */
    0x1C04040444380000, /* J */
    0x4448507048440000, /* K */
    0x40404040407E0000, /* L */
    0x4163554941410000, /* M */
    0x4262524A46420000, /* N */
    0x1C222222221C0000, /* O */
    0x7844784040400000, /* P */
    0x1C222222221C0200, /* Q */
    0x7844785048440000, /* R */
    0x1C22100C221C0000, /* S */
    0x7F08080808080000, /* T */
    0x42424242423C0000, /* U */
    0x8142422424180000, /* V */
    0x4141495563410000, /* W */
    0x4224181824420000, /* X */
    0x4122140808080000, /* Y */
    0x7E040810207E0000, /* Z */
    0x3820202020380000, /* [ */
    0x4020100804020000, /* \ */
    0x3808080808380000, /* ] */
    0x1028000000000000, /* ^ */
    0x00000000007E0000, /* _ */
    0x1008000000000000, /* ` */
    0x003C023E463A0000, /* a */
    0x40407C42625C0000, /* b */
    0x00001C20201C0000, /* c */
    0x02023E42463A0000, /* d */
    0x003C427E403C0000, /* e */
    0x0018103810100000, /* f */
    0x0000344C44340438, /* g */
    0x2020382424240000, /* h */
    0x0800080808080000, /* i */
    0x0800180808080870, /* j */
    0x20202428302C0000, /* k */
    0x1010101010180000, /* l */
    0x0000665A42420000, /* m */
    0x00002E3222220000, /* n */
    0x00003C42423C0000, /* o */
    0x00005C62427C4040, /* p */
    0x00003A46423E0202, /* q */
    0x00002C3220200000, /* r */
    0x001C201804380000, /* s */
    0x00103C1010180000, /* t */
    0x00002222261A0000, /* u */
    0x0000424224180000, /* v */
    0x000081815A660000, /* w */
    0x0000422418660000, /* x */
    0x0000422214081060, /* y */
    0x00003C08103C0000, /* z */
    0x1C103030101C0000, /* { */
    0x0808080808080800, /* | */
    0x38080C0C08380000, /* } */
    0x000000324C000000, /* ~ */
    0x7E7E7E7E7E7E0000  /* DEL */
};

#else

static const uint8_t font8x8[][8] = {
    // Caractere 0
    {
        0b00000000,  // --------
        0b00111100,  // --0000--
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b11011011,  // 00-00-00
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b00111100   // --0000--
    },
    // Caractere 1
    {
        0b00000000,  // --------
        0b00001100,  // ----00--
        0b00111100,  // --0000--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00111111   // --000000
    },
    // Caractere 2
    {
        0b00000000,  // --------
        0b00111100,  // --0000--
        0b11000011,  // 00----00
        0b00000011,  // ------00
        0b00001100,  // ----00--
        0b00110000,  // --00----
        0b11000000,  // 00------
        0b11111111   // 00000000
    },
    // Caractere 3
    {
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b11000011,  // 00----00
        0b00000011,  // ------00
        0b00001100,  // ----00--
        0b11000011,  // 00----00
        0b01111110,  // -000000-
        0b00000000   // --------
    },
    // Caractere 4
    {
        0b00000000,  // --------
        0b00001100,  // ----00--
        0b00011100,  // ---000--
        0b00101100,  // --0-00--
        0b01001100,  // -0--00--
        0b11111111,  // 00000000
        0b00001100,  // ----00--
        0b00001100   // ----00--
    },
    // Caractere 5
    {
        0b00000000,  // --------
        0b11111111,  // 00000000
        0b11000000,  // 00------
        0b11111100,  // 000000--
        0b00000011,  // ------00
        0b00000011,  // ------00
        0b11000011,  // 00----00
        0b00111100   // --0000--
    },
    // Caractere 6
    {
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b11000000,  // 00------
        0b11111100,  // 000000--
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b01111110,  // -000000-
        0b00000000   // --------
    },
    // Caractere 7
    {
        0b00000000,  // --------
        0b11111111,  // 00000000
        0b00000011,  // ------00
        0b00000110,  // -----00-
        0b00001100,  // ----00--
        0b00011000,  // ---00---
        0b00110000,  // --00----
        0b00110000   // --00----
    },
    // Caractere 8
    {
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b01111110,  // -000000-
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b01111110   // -000000-
    },
    // Caractere 9
    {
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b11000011,  // 00----00
        0b11000011,  // 00----00
        0b01111111,  // -0000000
        0b00000011,  // ------00
        0b11000011,  // 00----00
        0b01111110   // -000000-
    },
    // Caractere A
    {
        0b00111100,  // --0000--
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01111110,  // -000000-
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b00000000   // --------
    },
    // Caractere B
    {
        0b01111100,  // -00000--
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01111100,  // -00000--
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01111100,  // -00000--
        0b00000000   // --------
    },
    // Caractere C
    {
        0b00111100,  // --0000--
        0b01100110,  // -00--00-
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01100110,  // -00--00-
        0b00111100,  // --0000--
        0b00000000   // --------
    },
    // Caractere D
    {
        0b01111100,  // -00000--
        0b01100110,  // -00--00-
        0b01100011,  // -00---00
        0b01100011,  // -00---00
        0b01100011,  // -00---00
        0b01100110,  // -00--00-
        0b01111100,  // -00000--
        0b00000000   // --------
    },
    // Caractere E
    {
        0b01111110,  // -0000000
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01111100,  // -000000-
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01111110,  // -0000000
        0b00000000   // --------
    },
    // Caractere F
    {
        0b01111110,  // -0000000
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01111100,  // -000000-
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b00000000   // --------
    },
    // Caractere G
    {
        0b00111100,  // --0000--
        0b01100110,  // -00--00-
        0b01100000,  // -00-----
        0b01101110,  // -00-000-
        0b01101010,  // -00-0-0-
        0b01100010,  // -00---0-
        0b00111100,  // --0000--
        0b00000000   // --------
    },
    // Caractere H
    {
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01111110,  // -000000-
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b01100110,  // -00--00-
        0b00000000   // --------
    },
    // Caractere I
    {
        0b00111100,  // --0000--
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00111100,  // --0000--
        0b00000000   // --------
    },
    // Caractere J
    {
        0b00011110,  // ---0000-
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b01101100,  // -00-00--
        0b00111000,  // --000---
        0b00000000   // --------
    },
    // Caractere K
    {
        0b01100110,  // -00--00-
        0b01101100,  // -00-00--
        0b01111000,  // -0000---
        0b01110000,  // -000----
        0b01111000,  // -0000---
        0b01101100,  // -00-00--
        0b01100110,  // -00--00-
        0b00000000   // --------
    },
    // Caractere L
    {
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01111110,  // 0000000
        0b00000000   // -------
    },
    // Caractere M
    {
        0b01100011,  // 00---00
        0b01110111,  // 000-000
        0b01111111,  // 0000000
        0b01101011,  // 00-0-00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b00000000   // -------
    },
    // Caractere N
    {
        0b01100011,  // 00---00
        0b01110011,  // 000--00
        0b01111011,  // 0000-00
        0b01101111,  // 00-0000
        0b01100111,  // 00--000
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b00000000   // -------
    },
    // Caractere O
    {
        0b00011100,  // --000--
        0b01100011,  // 00---0-
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b00011100,  // --000--
        0b00000000   // -------
    },
    // Caractere P
    {
        0b01111100,  // 00000--
        0b01100110,  // 00--00-
        0b01100110,  // 00--00-
        0b01111100,  // 00000--
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b00000000   // -------
    },
    // Caractere Q
    {
        0b00111100,  // -0000--
        0b01100110,  // 00--00-
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01101011,  // 00-0-00
        0b01100110,  // 00--00-
        0b00111011,  // -000-00
        0b00000000   // -------
    },
    // Caractere R
    {
        0b01111100,  // 00000--
        0b01100110,  // 00--00-
        0b01100110,  // 00--00-
        0b01111100,  // 00000--
        0b01101100,  // 00-00--
        0b01100110,  // 00--00-
        0b01100110,  // 00--00-
        0b00000000   // -------
    },
    // Caractere S
    {
        0b00111110,  // -00000-
        0b01100000,  // 00-----
        0b01100000,  // 00-----
        0b00111100,  // -0000--
        0b00000011,  // -----00
        0b00000011,  // -----00
        0b01111100,  // -0000--
        0b00000000   // -------
    },
    // Caractere T
    {
        0b01111110,  // -000000-
        0b01111110,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00000000   // --------
    },
    // Caractere U
    {
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b00011100,  // --000--
        0b00000000   // -------
    },
    // Caractere V
    {
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b00100010,  // -0---0-
        0b00110110,  // -00-00-
        0b00011100,  // --000--
        0b00001000,  // ---0---
        0b00000000   // -------
    },
    // Caractere W
    {
        0b01100011,  // 00---00
        0b01100011,  // 00---00
        0b01101011,  // 00-0-00
        0b01101011,  // 00-0-00
        0b01111111,  // 0000000
        0b01110111,  // 000-000
        0b01100011,  // 00---00
        0b00000000   // -------
    },
    // Caractere X
    {
        0b01100011,  // 00---00
        0b00110110,  // -00-00-
        0b00011100,  // --000--
        0b00001000,  // ---0---
        0b00011100,  // --000--
        0b00110110,  // -00-00-
        0b01100011,  // 00---00
        0b00000000   // -------
    },
    // Caractere Y
    {
        0b01100011,  // 00---00
        0b00110110,  // -00-00-
        0b00011100,  // --000--
        0b00001000,  // ---0---
        0b00001000,  // ---0---
        0b00001000,  // ---0---
        0b00011100,  // --000--
        0b00000000   // -------
    },
    // Caractere Z
    {
        0b01111111,  // -0000000
        0b00000011,  // ------00
        0b00000110,  // -----00-
        0b00001100,  // ----00--
        0b00011000,  // ---00---
        0b00110000,  // --00----
        0b01111111,  // -0000000
        0b00000000   // --------
    },
    // Caractere a
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111000,  // --000---
        0b00000100,  // -----0--
        0b00111100,  // --0000--
        0b01000100,  // -0---0--
        0b00111010,  // --000-0-
        0b00000000,  // --------
    },
    // Caractere b
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01011100,  // -0-000--
        0b01100010,  // -00---0-
        0b01011100,  // -0-000--
        0b00000000,  // --------
    },
    // Caractere c
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111000,  // --000---
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b00111000,  // --000---
        0b00000000   // --------
    },
    // Caractere d
    {
        0b00000000,  // --------
        0b00000010,  // ------0-
        0b00000010,  // ------0-
        0b00111010,  // --000-0-
        0b01000110,  // -0---00-
        0b00111010,  // --000-0-
        0b00000000,  // --------
    },
    // Caractere e
    {
        0b00000000,  // -------
        0b00000000,  // -------
        0b00111000,  // --000--
        0b01000100,  // -0---0-
        0b01111100,  // -00000-
        0b01000000,  // -0-----
        0b00111000,  // --000--
        0b00000000   // -------
    },
    // Caractere f
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00011100,  // ---000--
        0b00100000,  // --0-----
        0b01111100,  // -00000--
        0b00100000,  // --0-----
        0b00100000,  // --0-----
        0b00000000   // --------
    },
    // Caractere g
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111010,  // --000-0-
        0b01000110,  // -0---00-
        0b00111110,  // --000-0-
        0b00000010,  // ------0-
        0b00111100,  // --0000--
    },
    // Caractere h
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00100000,  // --0-----
        0b00100000,  // --0-----
        0b00111100,  // --0000--
        0b00100010,  // --0---0-
        0b00100010,  // --0---0-
        0b00000000,  // --------
    },
    // Caractere i
    {
        0b00000000,  // --------
        0b00010000,  // -----0--
        0b00000000,  // --------
        0b00110000,  // ---000--
        0b00010000,  // -----0--
        0b00010000,  // -----0--
        0b01111100,  // --00000-
        0b00000000,  // --------
    },
    // Caractere j
    {
        0b00000000,  // --------
        0b00000100,  // -----0--
        0b00000000,  // --------
        0b00111100,  // --0000--
        0b00000100,  // -----0--
        0b00000100,  // -----0--
        0b00111000,  // --000---
        0b00000000,  // --------
    },
    // Caractere k
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000000,  // --0-----
        0b01001000,  // --0--0--
        0b01110000,  // --000---
        0b01001000,  // --0--0--
        0b01000100,  // --0---0-
        0b00000000,  // --------
    },
    // Caractere l
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b01100000,  // -00-----
        0b00010000,  // ---0----
        0b00010000,  // ---0----
        0b00010000,  // ---0----
        0b00001110,  // ----000-
        0b00000000   // --------
    },
    // Caractere m
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b10110110,  // 0-00-00-
        0b01001001,  // -0--0--0
        0b01001001,  // -0--0--0
        0b00000000,  // --------
    },
    // Caractere n
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01011100,  // -0-000--
        0b00100010,  // --0---0-
        0b00100010,  // --0---0-
        0b00000000,  // --------
    },
    // Caractere o
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111000,  // --000---
        0b01000100,  // -0---0--
        0b01000100,  // -0---0--
        0b00111000,  // --000---
        0b00000000,  // --------
    },
    // Caractere p
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01011100,  // -0-000--
        0b01100010,  // -00---0-
        0b01011100,  // -0-000--
        0b01000000,  // -0------
        0b00000000,  // -0------
    },
    // Caractere q
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111010,  // --000-0-
        0b01000110,  // -0---00-
        0b00111010,  // --000-0-
        0b00000010,  // ------0-
        0b00000000   // ------0-
    },
    // Caractere r
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01011100,  // -0-000--
        0b01100000,  // -00-----
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b00000000,  // --------
    },
    // Caractere s
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00111000,  // --000---
        0b01000000,  // -0------
        0b00110000,  // --000---
        0b00001000,  // -----0--
        0b01110000,  // -0000---
        0b00000000   // --------
    },
    // Caractere t
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00010000,  // ---0----
        0b01111100,  // -00000--
        0b00010000,  // ---0----
        0b00010000,  // ---0----
        0b00001100,  // ----00--
        0b00000000   // --------
    },
    // Caractere u
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000100,  // -0---0--
        0b01000100,  // -0---0--
        0b01000100,  // -0---0--
        0b00111000,  // --000---
        0b00000000   // --------
    },
    // Caractere v
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000100,  // -0---0--
        0b01000100,  // -0---0--
        0b00101000,  // --0-0---
        0b00010000,  // ---0----
        0b00000000   // --------
    },
    // Caractere w
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000100,  // -0---0--
        0b01010100,  // -0-0-0--
        0b01010100,  // -0-0-0--
        0b00101000,  // --0-0---
        0b00000000   // --------
    },
    // Caractere y
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01000100,  // -0---0--
        0b00101000,  // --0-0---
        0b00010000,  // ---0----
        0b01100000,  // -00-----
        0b00000000   // --------
    },
    // Caractere xx
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01001000,  // -0--0---
        0b00110000,  // --00----
        0b00110000,  // --00----
        0b01001000,  // -0--0---
        0b00000000   // --------
    },
    // Caractere z
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01111000,  // -0000---
        0b00010000,  // ---0----
        0b00100000,  // --0-----
        0b01111000,  // -0000---
        0b00000000   // --------
    },
    // Caractere ' '
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere !
    {
        0b00000000,  // --------
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00001100,  // ----00--
        0b00000000,  // --------
        0b00001100,  // ----00--
        0b00000000   // --------
    },
    // Caractere @
    {
        0b01111110,  // -000000-
        0b10000001,  // 0------0
        0b10001111,  // 0---0000
        0b10010001,  // 0--0---0
        0b10001110,  // 0---000-
        0b01000000,  // -0------
        0b00111100,  // --0000--
        0b00000000   // --------
    },
    // Caractere #
    {
        0b00000000,  // --------
        0b00100100,  // --0--0--
        0b01111110,  // -000000-
        0b00100100,  // --0--0--
        0b01111110,  // -000000-
        0b00100100,  // --0--0--
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere $
    {
        0b00001000,  // ----0---
        0b00111110,  // --00000-
        0b01001000,  // -0--0---
        0b00111100,  // --0000--
        0b00001010,  // ----0-0-
        0b01111100,  // -00000--
        0b00001000,  // ----0---
        0b00000000   // --------
    },
    // Caractere %
    {
        0b00000000,  // --------
        0b01100011,  // -00---00
        0b01100110,  // -00--00-
        0b00001100,  // ----00--
        0b00011000,  // ---00---
        0b00110110,  // --00-00-
        0b01100110,  // -00--00-
        0b00000000   // --------
    },
    // Caractere ^
    {
        0b00010000,  // ---0----
        0b00101000,  // --0-0---
        0b01000100,  // -0---0--
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere &
    {
        0b00111000,  // --000---
        0b01000100,  // -0---0--
        0b01000000,  // -0------
        0b00110000,  // --00----
        0b01001010,  // -0--0-0-
        0b01001100,  // -0--00--
        0b00110010,  // --00--0-
        0b00000000   // ........
    },
    // Caractere *
    {
        0b00000000,  // --------
        0b01000100,  // -0---0--
        0b00101000,  // --0-0---
        0b01111110,  // -000000-
        0b00101000,  // --0-0---
        0b01000100,  // -0---0--
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere (
    {
        0b00001100,  // ----00--
        0b00011000,  // ---00---
        0b00110000,  // --00----
        0b01100000,  // -00-----
        0b01100000,  // -00-----
        0b00110000,  // --00----
        0b00011000,  // ---00---
        0b00001100   // ----00--
    },
    // Caractere )
    {
        0b00110000,  // --00----
        0b00011000,  // ---00---
        0b00000110,  // -----00-
        0b00000110,  // -----00-
        0b00000110,  // -----00-
        0b00000110,  // -----00-
        0b00011000,  // ---00---
        0b00110000   // --00----
    },
    // Caractere -
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b01111110,  // -000000-
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere _
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000,  // --------
        0b11111111   // 00000000
    },
    // Caractere =
    {
        0b00000000,  // --------
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b00000000,  // --------
        0b01111110,  // -000000-
        0b00000000,  // --------
        0b00000000,  // --------
        0b00000000   // --------
    },
    // Caractere +
    {
        0b00000000,  // --------
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b01111110,  // -000000-
        0b01111110,  // -000000-
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00000000   // --------
    },
    // Caractere [
    {
        0b01111111,  // -000000-
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01000000,  // -0------
        0b01111111   // -000000-
    },
    // Caractere ]
    {
        0b00000000,  // -000000-
        0b00011110,  // ------0-
        0b00001001,  // ------0-
        0b00001001,  // ------0-
        0b00001001,  // ------0-
        0b00001001,  // ------0-
        0b00011110,  // ------0-
        0b00000000   // -000000-
    },
    // Caractere {
    {
        0b00000000,  // ---000--
        0b00001110,  // ---0----
        0b00001000,  // ---0----
        0b00011000,  // -00-----
        0b00001000,  // -00-----
        0b00001110,  // ---0----
        0b00000000,  // ---0----
        0b00000000   // ----00--
    },
    // Caractere }
    {
        0b00000000,  // --000---
        0b01100000,  // ----0---
        0b00010000,  // ----0---
        0b00011100,  // ----00--
        0b00010000,  // ----00--
        0b01100000,  // ----0---
        0b00000000,  // ----0---
        0b00000000   // --000---
    },
    // Caractere |
    {
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00011000   // ---00---
    },
    // Caractere '\'
    {
        0b00000000,  // --------
        0b11000000,  // 00------
        0b01100000,  // -00-----
        0b00110000,  // --00----
        0b00011000,  // ---00---
        0b00001100,  // ----00--
        0b00000110,  // -----00-
        0b00000000   // --------
    },
    // Caractere /
    {
        0b00000000,  // --------
        0b00000110,  // -----00-
        0b00001100,  // ----00--
        0b00011000,  // ---00---
        0b00110000,  // --00----
        0b01100000,  // -00-----
        0b11000000,  // 00------
        0b00000000   // --------
    },
    // Caractere ?
    {
        0b00000000,  // --------
        0b00111100,  // --00000-
        0b01100110,  // -00--00-
        0b00000110,  // -----00-
        0b00011000,  // ---00---
        0b00011000,  // ---00---
        0b00000000,  // --------
        0b00011000   // ---00---
    },
    {
        0b00000000,  // --------
        0b01100110,  // -00--00-
        0b11111111,  // 00000000
        0b11111111,  // 00000000
        0b01111110,  // -000000-
        0b00111100,  // --0000--
        0b00011000,  // ---00---
        0b00000000,  // --------
    }};
#endif

uint64_t color_char(char c);

#endif