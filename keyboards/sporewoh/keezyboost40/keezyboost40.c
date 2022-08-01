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

#include "keezyboost40.h"

painter_device_t lcd;

void keyboard_post_init_kb(void) {
    // Turn on the LCD
    setPinOutput(GP15);
    writePinHigh(GP15);

    // Let the LCD get some power...
    wait_ms(150);
    // Initialise the LCD
    lcd = qp_st7789_make_spi_device(320, 240, GP17, GP16, GP14, 4, 0);
    qp_init(lcd, QP_ROTATION_0);

    // Turn on the LCD and clear the display
    qp_power(lcd, true);
    qp_rect(lcd, 0, 0, 239, 319, 100,100,100, true);

    // Turn on the LCD backlight
    setPinOutput(GP15);
    writePinHigh(GP15);

    // Allow for user post-init
    keyboard_post_init_user();
}