/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_BSP_H
#define H_BSP_H

#include <inttypes.h>
#include <mcu/mcu.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Define special stackos sections */
#define sec_data_core   __attribute__((section(".data.core")))
#define sec_bss_core    __attribute__((section(".bss.core")))
#define sec_bss_nz_core __attribute__((section(".bss.core.nz")))

/* More convenient section placement macros. */
#define bssnz_t         sec_bss_nz_core

extern uint8_t _ram_start;
#define RAM_SIZE        0x40000

/* LED pins */
#define LED_1           (42)
#define LED_2           (43)
#define LED_3           (44)
#define LED_BLINK_PIN   (LED_1)

/* Buttons */
#define BUTTON_1        (32)

#define BSP_WINC1500_SPI_PORT   0
#define CONSOLE_UART_SPEED      115200

/*
 * Wiring of WINC1500 chip to Pitaya Go.
 */

#define WINC1500_PIN_RESET		12		/* P0.12 */
#define WINC1500_PIN_WAKE		46		/* P1.14 */
#define WINC1500_PIN_IRQ		6		/* P0.6 */
#define WINC1500_PIN_ENABLE		41		/* P1.9 */

#define WINC1500_SPI_SPEED		4000 /* KHz = 4 MHz */
  
#define WINC1500_SPI_SSN		MYNEWT_VAL(SPI_0_SLAVE_PIN_SS)		/* P0.11 */
#define WINC1500_SPI_SCK		MYNEWT_VAL(SPI_0_MASTER_PIN_SCK)	/* P0.8 */
#define WINC1500_SPI_MOSI		MYNEWT_VAL(SPI_0_MASTER_PIN_MOSI)	/* P1.8 */
#define WINC1500_SPI_MISO		MYNEWT_VAL(SPI_0_MASTER_PIN_MISO)	/* P0.7 */  


  
#ifdef __cplusplus
}
#endif

#endif  /* H_BSP_H */
