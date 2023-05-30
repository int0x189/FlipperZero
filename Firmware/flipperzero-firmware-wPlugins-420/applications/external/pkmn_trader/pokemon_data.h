#ifndef POKEMON_DATA_H
#define POKEMON_DATA_H

#pragma once

unsigned char INPUT_BLOCK[405];
unsigned char DATA_BLOCK[405] = {
    //  Flipper
    //[        TRAINER NAME                 ]
    0x85,
    0xAB,
    0xA8,
    0xAF,
    0xAF,
    0xA4,
    0xB1,
    0x50,
    0x00,
    0x00,
    0x00,
    //    [MEW]
    0x1,
    0x15,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    0xFF,
    // 6 pokemon
    //spc curr  HP    lvl   sts   typ1  typ2  cr    mv1   mv2   mv3   mv4   OT   experience         HP EV       att EV      def EV      speed EV    Speci EV    IV          mvPP  mvPP  mvPP  mvPP  Lvl   max HP      attack      defense     speed       special
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    0x4A,
    0x1,
    0x2c,
    0x4a,
    0x00,
    0x14,
    0x08,
    0x1F,
    0x7E,
    0x38,
    0x09,
    0x19,
    0x4,
    0xd2,
    0x3,
    0xd,
    0x40,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xff,
    0xc0,
    0xc0,
    0xc0,
    0xc0,
    0x4a,
    0x1,
    0x2c,
    0x0,
    0x96,
    0x0,
    0x97,
    0x0,
    0x98,
    0x0,
    0x99,
    //  6 trainer names
    0x85,
    0xAB,
    0xA8,
    0xAF,
    0xAF,
    0xA4,
    0xB1,
    0x50,
    0x00,
    0x00,
    0x00,
    0xFF,
    0x50,
    0x80,
    0x92,
    0x87,
    0x50,
    0x89,
    0x80,
    0x82,
    0xFF,
    0x50,
    0x80,
    0x92,
    0x87,
    0x50,
    0x89,
    0x80,
    0x82,
    0xFF,
    0x50,
    0x80,
    0x92,
    0x87,
    0x50,
    0x89,
    0x80,
    0x82,
    0xFF,
    0x50,
    0x80,
    0x92,
    0x87,
    0x50,
    0x89,
    0x80,
    0x82,
    0xFF,
    0x50,
    0x80,
    0x92,
    0x87,
    0x50,
    0x89,
    0x80,
    0x82,
    // // 6 nicknames
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50,
    0x50
    // // 2 useless bytes??
    // 0x00, 0x00, 0x00}
};

#endif /* POKEMON_DATA_H */