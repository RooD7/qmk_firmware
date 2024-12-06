// Copyright 2024 Rodrigo S. (@RooD7)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// #define DIODE_DIRECTION COL2ROW //COL2ROW ou ROW2COL - como sua matriz é configurada. COL2ROW significa que a marca preta no seu diodo está voltada para as linhas e entre o interruptor e as linhas.
// #define LOCKING_SUPPORT_ENABLE //suporte de travamento mecânico. Use KC_LCAP, KC_LNUM ou KC_LSCR em seu mapa de chaves
// #define MATRIX_ROWS 14
// #define MATRIX_COLS 9


// #define MATRIX_ROW_PINS { F7, B1, B3, B2, B6, F6, F4 }
// #define MATRIX_COL_PINS { D1, D0, D4, D7, C6, D7, E6, B4, B5 } //F5

//#define NO_DEBUG //desabilitar a depuração
//#define NO_PRINT //desativar a impressão/depuração usando o hid_listen
// #define NO_ACTION_TAPPING //desabilitar a dança do toque e outros recursos de toque
// #define NO_ACTION_LAYER //desabilitar as camadas

// #define SOFT_SERIAL_PIN D2

#define EE_HANDS
// #define MASTER_RIGHT
// #define SPLIT_USB_DETECT
// #define SPLIT_TRANSPORT_MIRROR
// #define USE_I2C