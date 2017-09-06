/*
 * $Id: icon.h,v 1.1.1.1 2012/04/24 02:28:27 thki81 Exp $
 *
 * Copyright (c) 1990,1994 Regents of The University of Michigan.
 * All Rights Reserved.  See COPYRIGHT.
 */

#ifndef AFPD_ICON_H
#define AFPD_ICON_H 1

#include <sys/cdefs.h>
#include <atalk/globals.h>

static const unsigned char apple_atalk_icon[] = { /* default appletalk icon */
    0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
    0x00,  0x01,  0x00,  0x00,  0x00,  0x02,  0x9F,  0xE0,
    0x00,  0x04,  0x50,  0x30,  0x00,  0x08,  0x30,  0x28,
    0x00,  0x10,  0x10,  0x3C,  0x07,  0xA0,  0x08,  0x04,
    0x18,  0x7F,  0x04,  0x04,  0x10,  0x00,  0x82,  0x04,
    0x10,  0x00,  0x81,  0x04,  0x10,  0x00,  0x82,  0x04,
    0x10,  0x00,  0x84,  0x04,  0x10,  0x00,  0x88,  0x04,
    0x10,  0x00,  0x90,  0x04,  0x10,  0x00,  0xB0,  0x04,
    0x10,  0x00,  0xD0,  0x04,  0xFF,  0xFF,  0xFF,  0xFF,
    0x40,  0x00,  0x00,  0x02,  0x3F,  0xFF,  0xFF,  0xFC,
    0x00,  0x00,  0x07,  0x00,  0x00,  0x00,  0x05,  0x00,
    0x00,  0x00,  0x05,  0x00,  0x00,  0x00,  0x05,  0x00,
    0x00,  0x00,  0x0F,  0x80,  0x00,  0x00,  0x08,  0x80,
    0x00,  0x00,  0x08,  0x80,  0x00,  0x00,  0x0F,  0x80,
    0x00,  0x00,  0x0A,  0x80,  0xBF,  0xFF,  0xF2,  0x74,
    0x00,  0x00,  0x05,  0x00,  0xBF,  0xFF,  0xF8,  0xF4,
    0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,
    0x00,  0x01,  0x00,  0x00,  0x00,  0x03,  0x9F,  0xE0,
    0x00,  0x07,  0xDF,  0xF0,  0x00,  0x0F,  0xFF,  0xF8,
    0x00,  0x1F,  0xFF,  0xFC,  0x07,  0xBF,  0xFF,  0xFC,
    0x1F,  0xFF,  0xFF,  0xFC,  0x1F,  0xFF,  0xFF,  0xFC,
    0x1F,  0xFF,  0xFF,  0xFC,  0x1F,  0xFF,  0xFF,  0xFC,
    0x1F,  0xFF,  0xFF,  0xFC,  0x1F,  0xFF,  0xFF,  0xFC,
    0x1F,  0xFF,  0xFF,  0xFC,  0x1F,  0xFF,  0xFF,  0xFC,
    0x1F,  0xFF,  0xFF,  0xFC,  0xFF,  0xFF,  0xFF,  0xFF,
    0x7F,  0xFF,  0xFF,  0xFE,  0x3F,  0xFF,  0xFF,  0xFC,
    0x00,  0x00,  0x07,  0x00,  0x00,  0x00,  0x07,  0x00,
    0x00,  0x00,  0x07,  0x00,  0x00,  0x00,  0x07,  0x00,
    0x00,  0x00,  0x0F,  0x80,  0x00,  0x00,  0x0F,  0x80,
    0x00,  0x00,  0x0F,  0x80,  0x00,  0x00,  0x0F,  0x80,
    0x00,  0x00,  0x0F,  0x80,  0xBF,  0xFF,  0xFF,  0xF4,
    0xBF,  0xFF,  0xFD,  0xF4,  0xBF,  0xFF,  0xF8,  0xF4
};

static const unsigned char apple_tcp_icon[] = { /* default asip icon */
    0x30,  0x00,  0x8f,  0xf8,  0xcc,  0x01,  0x48,  0x0c,
    0xb3,  0x32,  0x28,  0x0a,  0x8c,  0xcc,  0x7c,  0x0f,
    0x83,  0x02,  0xff,  0x01,  0x80,  0xc3,  0xc3,  0x81,
    0x80,  0x33,  0xe3,  0xc1,  0x80,  0x0b,  0xd3,  0xc1,
    0x80,  0x0b,  0xb1,  0x61,  0x80,  0x0b,  0xe0,  0xe1,
    0x80,  0x0b,  0xe1,  0xe1,  0x80,  0x0b,  0xd1,  0xe1,
    0xc0,  0x0a,  0xc0,  0xe1,  0x70,  0x0b,  0x78,  0xc1,
    0x1c,  0x0b,  0x79,  0xc1,  0x17,  0x0b,  0x33,  0xff,
    0x21,  0xcb,  0xff,  0xc4,  0x40,  0x7f,  0xff,  0x02,
    0x80,  0x1e,  0x00,  0x01,  0xff,  0xff,  0xff,  0xff,
    0x80,  0x00,  0x00,  0x01,  0xff,  0xff,  0xff,  0xff,
    0x00,  0x02,  0x80,  0x00,  0x00,  0x02,  0x80,  0x00,
    0x00,  0x07,  0xc0,  0x00,  0x00,  0x04,  0x40,  0x00,
    0x00,  0x04,  0x40,  0x00,  0x00,  0x07,  0xc0,  0x00,
    0x00,  0x05,  0x40,  0x00,  0x0f,  0xf9,  0x3f,  0xfc,
    0x00,  0x02,  0x80,  0x00,  0x0f,  0xfc,  0x7f,  0xfc,
    0x30,  0x00,  0x8f,  0xf8,  0xfc,  0x01,  0xcf,  0xfc,
    0xff,  0x33,  0xef,  0xfe,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0x7f,  0xff,  0xff,  0xff,
    0x1f,  0xff,  0xff,  0xff,  0x1f,  0xff,  0xff,  0xff,
    0x3f,  0xff,  0xff,  0xfc,  0x7f,  0xff,  0xff,  0xfe,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,  0xff,
    0x00,  0x03,  0x80,  0x00,  0x00,  0x03,  0x80,  0x00,
    0x00,  0x07,  0xc0,  0x00,  0x00,  0x07,  0xc0,  0x00,
    0x00,  0x07,  0xc0,  0x00,  0x00,  0x07,  0xc0,  0x00,
    0x00,  0x07,  0xc0,  0x00,  0xff,  0xff,  0xff,  0xff,
    0x3f,  0xfe,  0xff,  0xff,  0xff,  0xfc,  0x7f,  0xff
};

#if defined( ultrix )
static const unsigned char icon[] = { /* declogo */
    0x0, 0x80, 0x0, 0x0, 0x1, 0xC0, 0x0, 0x0,
    0x3, 0xE0, 0x0, 0x0, 0x7, 0xF0, 0x0, 0x0,
    0xF, 0xB0, 0x0, 0x0, 0x13, 0x6C, 0x0, 0x0,
    0x2C, 0xDE, 0x0, 0x0, 0x6D, 0xBB, 0x0, 0x0,
    0xF3, 0x7F, 0x80, 0x0, 0x7E, 0xEF, 0x40, 0x0,
    0x3D, 0xDE, 0xE0, 0x0, 0x1B, 0xBD, 0xF0, 0x0,
    0x7, 0x7B, 0xF8, 0x0, 0x7, 0xF7, 0xF8, 0x0,
    0x3, 0xEC, 0xF6, 0x0, 0x1, 0xDB, 0x6F, 0x0,
    0x0, 0xBB, 0x5D, 0x80, 0x0, 0x6C, 0xBF, 0xC0,
    0x0, 0x2D, 0x77, 0xA0, 0x0, 0x12, 0xEF, 0x70,
    0x0, 0xD, 0xDE, 0xF8, 0x7F, 0xFF, 0xFF, 0xFE,
    0x20, 0x0, 0x0, 0x4, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x4, 0x40, 0x0, 0x0, 0x4, 0x40, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x4, 0x40, 0x0,
    0xAF, 0xF9, 0x3F, 0xF5, 0x0, 0x2, 0x80, 0x0,
    0xAF, 0xFC, 0x7F, 0xF5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x80, 0x0, 0x0, 0x1, 0xC0, 0x0, 0x0,
    0x3, 0xE0, 0x0, 0x0, 0x7, 0xF0, 0x0, 0x0,
    0xF, 0xF8, 0x0, 0x0, 0x1F, 0xFC, 0x0, 0x0,
    0x3F, 0xFE, 0x0, 0x0, 0x7F, 0xFF, 0x0, 0x0,
    0xFF, 0xFF, 0x80, 0x0, 0x7F, 0xFF, 0xC0, 0x0,
    0x3F, 0xFF, 0xE0, 0x0, 0x1F, 0xFF, 0xF0, 0x0,
    0xF, 0xFF, 0xF8, 0x0, 0x7, 0xFF, 0xFC, 0x0,
    0x3, 0xFF, 0xFE, 0x0, 0x1, 0xFF, 0xFF, 0x0,
    0x0, 0xFF, 0xFF, 0x80, 0x0, 0x7F, 0xFF, 0xC0,
    0x0, 0x3F, 0xFF, 0xE0, 0x0, 0x1F, 0xFF, 0xF0,
    0x0, 0xF, 0xFF, 0xF8, 0x7F, 0xFF, 0xFF, 0xFE,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x7, 0xC0, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFC, 0x7F, 0xFF, 0x0, 0x0, 0x0, 0x0
};

#else
#if defined( vax )
static const unsigned char icon[] = { /* daemon */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x2, 0x0,
    0x1, 0x80, 0x3, 0x0, 0x2, 0x80, 0x2, 0x80,
    0x2, 0x80, 0x2, 0x80, 0x4, 0x80, 0x2, 0x40,
    0x4, 0x87, 0xC2, 0x40, 0x4, 0x58, 0x34, 0x40,
    0x4, 0x20, 0x8, 0x40, 0x2, 0x16, 0xD0, 0x80,
    0x1, 0x1, 0x1, 0x0, 0x2, 0x80, 0x2, 0x80,
    0x2, 0x9C, 0x72, 0x80, 0x4, 0x22, 0x88, 0x40,
    0x4, 0x41, 0x4, 0x40, 0x4, 0x41, 0x4, 0x40,
    0x4, 0x41, 0x4, 0x40, 0x4, 0x49, 0x24, 0x40,
    0xE, 0x55, 0x54, 0xE0, 0x10, 0x5D, 0x74, 0x10,
    0x10, 0x3E, 0xF8, 0x10, 0x7F, 0xFC, 0x7F, 0xFE,
    0x20, 0x4, 0x40, 0x4, 0x1F, 0xFC, 0x7F, 0xF8,
    0x0, 0x7, 0xC0, 0x0, 0x0, 0x4, 0x40, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x4, 0x40, 0x0,
    0xAF, 0xF9, 0x3F, 0xF5, 0x0, 0x2, 0x80, 0x0,
    0xAF, 0xFC, 0x7F, 0xF5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x2, 0x0,
    0x1, 0x80, 0x3, 0x0, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x7, 0x80, 0x3, 0xC0,
    0x7, 0x87, 0xC3, 0xC0, 0x7, 0xDF, 0xF7, 0xC0,
    0x7, 0xFF, 0xFF, 0xC0, 0x3, 0xFF, 0xFF, 0x80,
    0x1, 0xFF, 0xFF, 0x0, 0x3, 0xFF, 0xFF, 0x80,
    0x3, 0xFF, 0xFF, 0x80, 0x7, 0xFF, 0xFF, 0xC0,
    0x7, 0xFF, 0xFF, 0xC0, 0x7, 0xFF, 0xFF, 0xC0,
    0x7, 0xFF, 0xFF, 0xC0, 0x7, 0xFF, 0xFF, 0xC0,
    0xF, 0xFF, 0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xF0,
    0x1F, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFE,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x7, 0xC0, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x4, 0x40, 0x0,
    0xAF, 0xF9, 0x3F, 0xF5, 0x0, 0x2, 0x80, 0x0,
    0xAF, 0xFC, 0x7F, 0xF5, 0x0, 0x0, 0x0, 0x0
};

#else
#if defined( sun )
static const unsigned char icon[] = { /* sunlogo */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x80, 0x0,
    0x0, 0x2, 0x40, 0x0, 0x0, 0x2, 0x20, 0x0,
    0x0, 0x9, 0x10, 0x0, 0x0, 0x4, 0x88, 0x0,
    0x0, 0x22, 0x44, 0x0, 0x0, 0x11, 0x20, 0x0,
    0x0, 0x88, 0x91, 0x0, 0x1, 0x4, 0x42, 0x0,
    0x2, 0x22, 0x44, 0x40, 0x4, 0x41, 0x88, 0x80,
    0x8, 0x98, 0x11, 0x30, 0x11, 0x24, 0x22, 0x48,
    0x12, 0x44, 0x24, 0x88, 0xC, 0x88, 0x19, 0x10,
    0x1, 0x11, 0x82, 0x20, 0x2, 0x22, 0x44, 0x40,
    0x0, 0x42, 0x20, 0x80, 0x0, 0x89, 0x11, 0x0,
    0x0, 0x4, 0x88, 0x0, 0x7F, 0xFF, 0xFF, 0xFE,
    0x20, 0x0, 0x0, 0x4, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x4, 0x40, 0x0, 0x0, 0x4, 0x40, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x4, 0x40, 0x0,
    0xAF, 0xF9, 0x3F, 0xF5, 0x0, 0x2, 0x80, 0x0,
    0xAF, 0xFC, 0x7F, 0xF5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1, 0x80, 0x0, 0x0, 0x3, 0xC0, 0x0,
    0x0, 0x7, 0xE0, 0x0, 0x0, 0xF, 0xF0, 0x0,
    0x0, 0x1F, 0xF8, 0x0, 0x0, 0x3F, 0xFC, 0x0,
    0x0, 0x7F, 0xFE, 0x0, 0x0, 0xFF, 0xFF, 0x0,
    0x1, 0xFF, 0xFF, 0x80, 0x3, 0xFF, 0xFF, 0xC0,
    0x7, 0xFF, 0xFF, 0xE0, 0xF, 0xFF, 0xFF, 0xF0,
    0x1F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFC,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0xF, 0xFF, 0xFF, 0xF0, 0x7, 0xFF, 0xFF, 0xE0,
    0x3, 0xFF, 0xFF, 0xC0, 0x1, 0xFF, 0xFF, 0x80,
    0x0, 0xFF, 0xFF, 0x0, 0x7F, 0xFF, 0xFF, 0xFE,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x7, 0xC0, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFC, 0x7F, 0xFF, 0x0, 0x0, 0x0, 0x0
};

#else
#if defined( _IBMR2 )
static const unsigned char icon[] = { /* hagar */
    0x0, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0, 0x18,
    0x24, 0x0, 0x0, 0x24, 0x44, 0x3, 0xC0, 0x22,
    0x44, 0xC, 0x30, 0x22, 0x42, 0x30, 0xC, 0x42,
    0x41, 0x40, 0x2, 0x82, 0x41, 0x80, 0x1, 0x82,
    0x21, 0x0, 0x0, 0x84, 0x11, 0x41, 0x2, 0x88,
    0xE, 0xA2, 0x85, 0x70, 0x4, 0x41, 0x2, 0x20,
    0x4, 0x0, 0x0, 0x20, 0x3, 0xFF, 0xFF, 0xC0,
    0x3, 0xC0, 0x3, 0xC0, 0x3, 0x82, 0x41, 0xC0,
    0x7, 0x81, 0x81, 0xE0, 0x7, 0xC2, 0x43, 0xE0,
    0x7, 0xFC, 0x3F, 0xE0, 0x7, 0xFC, 0x3F, 0xE0,
    0x7F, 0xFC, 0x3F, 0xFE, 0x20, 0x3, 0xC0, 0x4,
    0x1F, 0xFF, 0xFF, 0xF8, 0x0, 0x2, 0x40, 0x0,
    0x0, 0x2, 0x40, 0x0, 0x0, 0x3, 0xC0, 0x0,
    0x0, 0x4, 0x20, 0x0, 0xAF, 0xF9, 0x9F, 0xF5,
    0x0, 0x2, 0x40, 0x0, 0xAF, 0xFC, 0x3F, 0xF5,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x18, 0x0, 0x0, 0x18,
    0x3C, 0x0, 0x0, 0x3C, 0x7C, 0x3, 0xC0, 0x3E,
    0x7C, 0xF, 0xF0, 0x3E, 0x7E, 0x3F, 0xFC, 0x7E,
    0x7F, 0x7F, 0xFE, 0xFE, 0x7F, 0xFF, 0xFF, 0xFE,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0xF, 0xFF, 0xFF, 0xF0, 0x7, 0xFF, 0xFF, 0xE0,
    0x7, 0xFF, 0xFF, 0xE0, 0x3, 0xFF, 0xFF, 0xC0,
    0x3, 0xFF, 0xFF, 0xC0, 0x3, 0xFF, 0xFF, 0xC0,
    0x7, 0xFF, 0xFF, 0xE0, 0x7, 0xFF, 0xFF, 0xE0,
    0x7, 0xFF, 0xFF, 0xE0, 0x7, 0xFF, 0xFF, 0xE0,
    0x7F, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFC,
    0x1F, 0xFF, 0xFF, 0xF8, 0x0, 0x3, 0xC0, 0x0,
    0x0, 0x3, 0xC0, 0x0, 0x0, 0x3, 0xC0, 0x0,
    0x0, 0x7, 0xE0, 0x0, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};

#else
static const unsigned char icon[] = { /* globe */
    0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF0, 0x0,
    0x0, 0x30, 0xC, 0x0, 0x0, 0xC0, 0x3, 0x0,
    0x1, 0x80, 0x3, 0x80, 0x3, 0xE2, 0x1F, 0xC0,
    0x7, 0xC0, 0x1D, 0xE0, 0xF, 0x80, 0x87, 0xF0,
    0xF, 0x1, 0x8F, 0xF0, 0xE, 0x0, 0x7F, 0x30,
    0x1E, 0x0, 0xFD, 0x78, 0x12, 0x0, 0xE4, 0xF8,
    0x10, 0x0, 0x40, 0xF8, 0x10, 0x0, 0x3E, 0x78,
    0x1F, 0x0, 0x7F, 0xF8, 0x1F, 0x80, 0x7F, 0xF8,
    0xF, 0x80, 0x3F, 0x30, 0xF, 0x80, 0xF, 0x30,
    0xF, 0x80, 0xE, 0x90, 0x7, 0x80, 0xE, 0xA0,
    0x3, 0xC0, 0xE, 0x40, 0x7F, 0xFF, 0xFF, 0xFE,
    0x20, 0x0, 0x0, 0x4, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x4, 0x40, 0x0, 0x0, 0x4, 0x40, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x4, 0x40, 0x0,
    0xAF, 0xF9, 0x3F, 0xF5, 0x0, 0x2, 0x80, 0x0,
    0xAF, 0xFC, 0x7F, 0xF5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF0, 0x0,
    0x0, 0x3F, 0xFC, 0x0, 0x0, 0xFF, 0xFF, 0x0,
    0x1, 0xFF, 0xFF, 0x80, 0x3, 0xFF, 0xFF, 0xC0,
    0x7, 0xFF, 0xFF, 0xE0, 0xF, 0xFF, 0xFF, 0xF0,
    0xF, 0xFF, 0xFF, 0xF0, 0xF, 0xFF, 0xFF, 0xF0,
    0x1F, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xF8,
    0x1F, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xF8,
    0x1F, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xF8,
    0xF, 0xFF, 0xFF, 0xF0, 0xF, 0xFF, 0xFF, 0xF0,
    0xF, 0xFF, 0xFF, 0xF0, 0x7, 0xFF, 0xFF, 0xE0,
    0x3, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xFE,
    0x3F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xF8,
    0x0, 0x7, 0xC0, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0x0, 0x3, 0x80, 0x0, 0x0, 0x7, 0xC0, 0x0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
    0xFF, 0xFC, 0x7F, 0xFF, 0x0, 0x0, 0x0, 0x0
};
#endif /*_IBMR2*/
#endif /*sun*/
#endif /*vax*/
#endif /*ultrix*/

#endif
