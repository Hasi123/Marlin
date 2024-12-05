/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// ZONESTAR hotbed NTC 100K Beta 3950 thermistor
constexpr temp_entry_t temptable_506[] PROGMEM = {
  { OV( 341), 130 },
  { OV( 380), 120 },
  { OV( 431), 110 },
  { OV( 500), 100 },
  { OV( 582),  90 },
  { OV( 660),  80 },
  { OV( 740),  70 },
  { OV( 813),  60 },
  { OV( 887),  50 },
  { OV( 930),  40 },
  { OV( 963),  30 },
  { OV( 993),  20 },
  { OV(1010),  10 },
  { OV(1020),   0 }
};
