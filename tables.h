/*************************************************************
Copyright (C) 1990, 1991, 1993 Andy C. Hung, all rights reserved.
PUBLIC DOMAIN LICENSE: Stanford University Portable Video Research
Group. If you use this software, you agree to the following: This
program package is purely experimental, and is licensed "as is".
Permission is granted to use, modify, and distribute this program
without charge for any purpose, provided this license/ disclaimer
notice appears in the copies.  No warranty or maintenance is given,
either expressed or implied.  In no event shall the author(s) be
liable to you or a third party for any special, incidental,
consequential, or other damages, arising out of the use or inability
to use the program for any purpose (or the loss of data), even if we
have been advised of such possibilities.  Any public reference or
advertisement of this source code should refer to it as the Portable
Video Research Group (PVRG) code, and not by any author(s) (or
Stanford University) name.
*************************************************************/
/*
************************************************************
tables.h

These are the Huffman tables used in the p64 coder.  This is converted
by htable into ctables.h which is used by the Huffman coder.

************************************************************
*/

int MTypeCoeff[] = {
    0, 0b0001,
    1, 0b0000001,
    2, 0b1,
    3, 0b00001,
    4, 0b000000001,
    5, 0b00000001,
    6, 0b0000000001,
    7, 0b001,
    8, 0b01,
    9, 0b000001,
    -1, -1
};

int MBACoeff[] = {
    1, 0b1,
    2, 0b011,
    3, 0b010,
    4, 0b0011,
    5, 0b0010,
    6, 0b00011,
    7, 0b00010,
    8, 0b0000111,
    9, 0b0000110,
    10, 0b00001011,
    11, 0b00001010,
    12, 0b00001001,
    13, 0b00001000,
    14, 0b00000111,
    15, 0b00000110,
    16, 0b0000010111,
    17, 0b0000010110,
    18, 0b0000010101,
    19, 0b0000010100,
    20, 0b0000010011,
    21, 0b0000010010,
    22, 0b00000100011,
    23, 0b00000100010,
    24, 0b00000100001,
    25, 0b00000100000,
    26, 0b00000011111,
    27, 0b00000011110,
    28, 0b00000011101,
    29, 0b00000011100,
    30, 0b00000011011,
    31, 0b00000011010,
    32, 0b00000011001,
    33, 0b00000011000,
    34, 0b00000001111, /* Stuffing */
    35, 0b0000000000000001, /* Start */
    -1, -1
};

int MVDCoeff[] = {
    16, 0b00000011001,
    17, 0b00000011011,
    18, 0b00000011101,
    19, 0b00000011111,
    20, 0b00000100001,
    21, 0b00000100011,
    22, 0b0000010011,
    23, 0b0000010101,
    24, 0b0000010111,
    25, 0b00000111,
    26, 0b00001001,
    27, 0b00001011,
    28, 0b0000111,
    29, 0b00011,
    30, 0b0011,
    31, 0b011,
    0, 0b1,
    1, 0b010,
    2, 0b0010,
    3, 0b00010,
    4, 0b0000110,
    5, 0b00001010,
    6, 0b00001000,
    7, 0b00000110,
    8, 0b0000010110,
    9, 0b0000010100,
    10, 0b0000010010,
    11, 0b00000100010,
    12, 0b00000100000,
    13, 0b00000011110,
    14, 0b00000011100,
    15, 0b00000011010,
    -1, -1
};

int CBPCoeff[] = {
    60, 0b111,
    4, 0b1101,
    8, 0b1100,
    16, 0b1011,
    32, 0b1010,
    12, 0b10011,
    48, 0b10010,
    20, 0b10001,
    40, 0b10000,
    28, 0b01111,
    44, 0b01110,
    52, 0b01101,
    56, 0b01100,
    1, 0b01011,
    61, 0b01010,
    2, 0b01001,
    62, 0b01000,
    24, 0b001111,
    36, 0b001110,
    3, 0b001101,
    63, 0b001100,
    5, 0b0010111,
    9, 0b0010110,
    17, 0b0010101,
    33, 0b0010100,
    6, 0b0010011,
    10, 0b0010010,
    18, 0b0010001,
    34, 0b0010000,
    7, 0b00011111,
    11, 0b00011110,
    19, 0b00011101,
    35, 0b00011100,
    13, 0b00011011,
    49, 0b00011010,
    21, 0b00011001,
    41, 0b00011000,
    14, 0b00010111,
    50, 0b00010110,
    22, 0b00010101,
    42, 0b00010100,
    15, 0b00010011,
    51, 0b00010010,
    23, 0b00010001,
    43, 0b00010000,
    25, 0b00001111,
    37, 0b00001110,
    26, 0b00001101,
    38, 0b00001100,
    29, 0b00001011,
    45, 0b00001010,
    53, 0b00001001,
    57, 0b00001000,
    30, 0b00000111,
    46, 0b00000110,
    54, 0b00000101,
    58, 0b00000100,
    31, 0b000000111,
    47, 0b000000110,
    55, 0b000000101,
    59, 0b000000100,
    27, 0b000000011,
    39, 0b000000010,
    -1, -1
};

int TCoeff1[] = {
    0x0000, 0b10, /* EOF */
    0x0001, 0b11, /* Not First Coef */
    0x0002, 0b0100,
    0x0003, 0b00101,
    0x0004, 0b0000110,
    0x0005, 0b00100110,
    0x0006, 0b00100001,
    0x0007, 0b0000001010,
    0x0008, 0b000000011101,
    0x0009, 0b000000011000,
    0x000a, 0b000000010011,
    0x000b, 0b000000010000,
    0x000c, 0b0000000011010,
    0x000d, 0b0000000011001,
    0x000e, 0b0000000011000,
    0x000f, 0b0000000010111,
    0x0101, 0b011,
    0x0102, 0b000110,
    0x0103, 0b00100101,
    0x0104, 0b0000001100,
    0x0105, 0b000000011011,
    0x0106, 0b0000000010110,
    0x0107, 0b0000000010101,
    0x0201, 0b0101,
    0x0202, 0b0000100,
    0x0203, 0b0000001011,
    0x0204, 0b000000010100,
    0x0205, 0b0000000010100,
    0x0301, 0b00111,
    0x0302, 0b00100100,
    0x0303, 0b000000011100,
    0x0304, 0b0000000010011,
    0x0401, 0b00110,
    0x0402, 0b0000001111,
    0x0403, 0b000000010010,
    0x0501, 0b000111,
    0x0502, 0b0000001001,
    0x0503, 0b0000000010010,
    0x0601, 0b000101,
    0x0602, 0b000000011110,
    0x0701, 0b000100,
    0x0702, 0b000000010101,
    0x0801, 0b0000111,
    0x0802, 0b000000010001,
    0x0901, 0b0000101,
    0x0902, 0b0000000010001,
    0x0a01, 0b00100111,
    0x0a02, 0b0000000010000,
    0x0b01, 0b00100011,
    0x0c01, 0b00100010,
    0x0d01, 0b00100000,
    0x0e01, 0b0000001110,
    0x0f01, 0b0000001101,
    0x1001, 0b0000001000,
    0x1101, 0b000000011111,
    0x1201, 0b000000011010,
    0x1301, 0b000000011001,
    0x1401, 0b000000010111,
    0x1501, 0b000000010110,
    0x1601, 0b0000000011111,
    0x1701, 0b0000000011110,
    0x1801, 0b0000000011101,
    0x1901, 0b0000000011100,
    0x1a01, 0b0000000011011,
    0x1b01, 0b000001, /* Escape */
    -1, -1
};

/* Excludes EOB */

int TCoeff2[] = {
    0x0001, 0b1, /* First Coef */
    0x0002, 0b0100,
    0x0003, 0b00101,
    0x0004, 0b0000110,
    0x0005, 0b00100110,
    0x0006, 0b00100001,
    0x0007, 0b0000001010,
    0x0008, 0b000000011101,
    0x0009, 0b000000011000,
    0x000a, 0b000000010011,
    0x000b, 0b000000010000,
    0x000c, 0b0000000011010,
    0x000d, 0b0000000011001,
    0x000e, 0b0000000011000,
    0x000f, 0b0000000010111,
    0x0101, 0b011,
    0x0102, 0b000110,
    0x0103, 0b00100101,
    0x0104, 0b0000001100,
    0x0105, 0b000000011011,
    0x0106, 0b0000000010110,
    0x0107, 0b0000000010101,
    0x0201, 0b0101,
    0x0202, 0b0000100,
    0x0203, 0b0000001011,
    0x0204, 0b000000010100,
    0x0205, 0b0000000010100,
    0x0301, 0b00111,
    0x0302, 0b00100100,
    0x0303, 0b000000011100,
    0x0304, 0b0000000010011,
    0x0401, 0b00110,
    0x0402, 0b0000001111,
    0x0403, 0b000000010010,
    0x0501, 0b000111,
    0x0502, 0b0000001001,
    0x0503, 0b0000000010010,
    0x0601, 0b000101,
    0x0602, 0b000000011110,
    0x0701, 0b000100,
    0x0702, 0b000000010101,
    0x0801, 0b0000111,
    0x0802, 0b000000010001,
    0x0901, 0b0000101,
    0x0902, 0b0000000010001,
    0x0a01, 0b00100111,
    0x0a02, 0b0000000010000,
    0x0b01, 0b00100011,
    0x0c01, 0b00100010,
    0x0d01, 0b00100000,
    0x0e01, 0b0000001110,
    0x0f01, 0b0000001101,
    0x1001, 0b0000001000,
    0x1101, 0b000000011111,
    0x1201, 0b000000011010,
    0x1301, 0b000000011001,
    0x1401, 0b000000010111,
    0x1501, 0b000000010110,
    0x1601, 0b0000000011111,
    0x1701, 0b0000000011110,
    0x1801, 0b0000000011101,
    0x1901, 0b0000000011100,
    0x1a01, 0b0000000011011,
    0x1b01, 0b000001, /* Escape */
    -1, -1
};
