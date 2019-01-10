// The 'features' section in 'target.json' is now used to create the device's hardware preprocessor switches.
// Check the 'features' section of the target description in 'targets.json' for more details.
/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_MM_H
#define MBED_MM_H

#include "drivers/DigitalOut.h"
using mbed::DigitalOut;

#ifdef TARGET_MM
DigitalOut wifi_no(WIFI_N, 0); // configure mux for cellular
DigitalOut cell_power_control(CELL_PWR_EN, 0); // turn on cell
DigitalOut cell_on(CELL_ON, 0);
DigitalOut cell_emerg_rst(CELL_EMERG_RST, 0); // let this high on modem side
DigitalOut gnss_power_control(GPS_PWR_EN, 0);  // turn off gps
DigitalOut wifi_power_enable(WIFI_PWR_EN, 0); // wifi vcc power off
#endif


#endif
