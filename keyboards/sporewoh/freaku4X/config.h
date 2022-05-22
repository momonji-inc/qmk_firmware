/*
Copyright 2022 sporewoh

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEAF
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0000
#define MANUFACTURER    sporewoh
#define PRODUCT         freaku4X

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/* pin-out for PCB */
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6, D4, D2, D3 }
#define MATRIX_COL_PINS { F7, B1, B3, B2, B6 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
