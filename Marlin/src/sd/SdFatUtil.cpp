/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino SdFat Library
 * Copyright (c) 2008 by William Greiman
 *
 * This file is part of the Arduino Sd2Card Library
 */
<<<<<<< HEAD:Marlin/SdFatUtil.h
#ifndef _SDFATUTIL_H_
#define _SDFATUTIL_H_
=======

#include "../inc/MarlinConfig.h"

#if ENABLED(SDSUPPORT)
>>>>>>> 0518dec60d0931745efa2812fa388f33d68cfa29:Marlin/src/sd/SdFatUtil.cpp

#include "SdFatUtil.h"
#include <string.h>

/**
 * Amount of free RAM
 * \return The number of free bytes.
 */
#ifdef __arm__

  extern "C" char* sbrk(int incr);
  int SdFatUtil::FreeRam() {
    char top;
    return &top - reinterpret_cast<char*>(sbrk(0));
  }

#else

<<<<<<< HEAD:Marlin/SdFatUtil.h
#endif // _SDFATUTIL_H_
=======
  extern char* __brkval;
  extern char __bss_end;
  int SdFatUtil::FreeRam() {
    char top;
    return __brkval ? &top - __brkval : &top - &__bss_end;
  }

#endif

#endif // SDSUPPORT
>>>>>>> 0518dec60d0931745efa2812fa388f33d68cfa29:Marlin/src/sd/SdFatUtil.cpp
