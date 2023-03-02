/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef LED_MATRIX_ENABLE
const ckled2001_led g_ckled2001_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to CKLED2001 manual for these locations
 *   driver
 *   |  LED address
 *   |  | */
   {0, A_16},
   {0, A_15},
   {0, A_14},
   {0, A_13},
   {0, A_12},
   {0, A_11},
   {0, A_10},
   {0, A_9},
   {0, A_8},
   {0, A_7},
   {0, A_6},
   {0, A_5},
   {0, A_4},
   {0, A_2},
   {0, A_1},
   {0, G_1},
   {0, G_2},
   {0, G_3},
   {0, G_4},
   {0, G_5},

   {0, B_16},
   {0, B_15},
   {0, B_14},
   {0, B_13},
   {0, B_12},
   {0, B_11},
   {0, B_10},
   {0, B_9},
   {0, B_8},
   {0, B_7},
   {0, B_6},
   {0, B_5},
   {0, B_4},
   {0, B_3},
   {0, B_2},
   {0, B_1},
   {0, H_1},
   {0, H_2},
   {0, H_3},
   {0, H_4},
   {0, H_5},

   {0, C_16},
   {0, C_15},
   {0, C_14},
   {0, C_13},
   {0, C_12},
   {0, C_11},
   {0, C_10},
   {0, C_9},
   {0, C_8},
   {0, C_7},
   {0, C_6},
   {0, C_5},
   {0, C_4},
   {0, C_3},
   {0, C_2},
   {0, C_1},
   {0, G_6},
   {0, G_7},
   {0, G_8},
   {0, G_9},
   {0, G_10},

   {0, D_16},
   {0, D_15},
   {0, D_14},
   {0, D_13},
   {0, D_12},
   {0, D_11},
   {0, D_10},
   {0, D_9},
   {0, D_8},
   {0, D_7},
   {0, D_6},
   {0, D_5},
   {0, D_3},
   {0, H_7},
   {0, H_8},
   {0, H_9},

   {0, E_16},
   {0, E_14},
   {0, E_13},
   {0, E_12},
   {0, E_11},
   {0, E_10},
   {0, E_9},
   {0, E_8},
   {0, E_7},
   {0, E_6},
   {0, E_5},
   {0, E_3},
   {0, E_1},
   {0, H_6},
   {0, H_11},
   {0, H_12},
   {0, H_10},

   {0, F_16},
   {0, F_15},
   {0, F_14},
   {0, F_10},
   {0, F_6},
   {0, F_5},
   {0, F_4},
   {0, F_3},
   {0, F_2},
   {0, F_1},
   {0, G_13},
   {0, G_11},
   {0, G_12},
};

led_config_t g_led_config = {
	{
		{ 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     NO_LED, 13,     14,     15,     16,     17,     18,     19 },
        { 20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40 },
        { 41,     42,     43,     44,     45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61 },
        { 62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     72,     73,     NO_LED, 74,     NO_LED, NO_LED, NO_LED, 75,     76,     77,     NO_LED },
        { 78,     NO_LED, 79,     80,     81,     82,     83,     84,     85,     86,     87,     88,     NO_LED, 89,     NO_LED, 90,     NO_LED, 91,     92,     93,     94 },
        { 95,     96,     97,     NO_LED, NO_LED, NO_LED, 98,     NO_LED, NO_LED, NO_LED, 99,     100,    101,    102,    103,    104,    105,    106,    NO_LED, 107,    NO_LED }
    },
    {
        {0, 0}, {20, 0}, {31, 0}, {41, 0}, {52, 0}, {67, 0}, {78, 0}, {88, 0}, {98, 0}, {114,  0}, {124,  0}, {135,  0}, {145,  0},            {158,  0}, {169,  0}, {179,  0}, {192,  0}, {203,  0}, {213,  0}, {224,  0},
        {0,15}, {10,15}, {20,15}, {31,15}, {41,15}, {52,15}, {62,15}, {72,15}, {83,15}, { 93, 15}, {104, 15}, {114, 15}, {124, 15}, {140, 15}, {158, 15}, {169, 15}, {179, 15}, {192, 15}, {203, 15}, {213, 15}, {224, 15},
        {2,28}, {15,28}, {26,28}, {36,28}, {46,28}, {57,28}, {67,28}, {78,28}, {88,28}, { 98, 28}, {109, 28}, {119, 28}, {130, 28}, {143, 28}, {158, 28}, {169, 28}, {179, 28}, {192, 28}, {203, 28}, {213, 28}, {224, 28},
        {3,39}, {18,39}, {28,39}, {39,39}, {49,39}, {59,39}, {70,39}, {80,39}, {91,39}, {101, 39}, {111, 39}, {122, 39},            {139, 39},                                  {192, 39}, {203, 39}, {213, 39},
        {6,52},          {23,52}, {33,52}, {44,52}, {54,52}, {65,52}, {75,52}, {85,52}, { 96, 52}, {106, 52}, {117, 52},            {136, 52},            {169, 52},            {192, 52}, {203, 52}, {213, 52}, {224, 52},
        {1,64}, {14,64}, {27,64},                            {66,64},                              {105, 64}, {118, 64}, {131, 64}, {144, 64}, {158, 64}, {169, 64}, {179, 64}, {197, 64},            {213, 64},

    },
    {
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,                  4,   4,   4,
        4,        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,        4,        4,   4,   4,   4,
        4,   4,   4,                  4,                  4,   4,   4,   4,   4,   4,   4,   4,        4,

    }
};
#endif
