/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "fsl_common.h"
#include "fsl_port.h"

/*******************************************************************************
 * Code
 ******************************************************************************/
void BOARD_InitPins(void)
{
    /* Declare and initialise for pull up configuration */
    port_pin_config_t pinConfig = {0};
    pinConfig.pullSelect = kPORT_PullUp;
    pinConfig.openDrainEnable = kPORT_OpenDrainEnable;

    /* Initialize UART1 pins below */
    /* Ungate the port clock */
    CLOCK_EnableClock(kCLOCK_PortD);

    /* Affects PORTD_PCR8 register */
    PORT_SetPinMux(PORTD, 8U, kPORT_MuxAlt3);
    /* Affects PORTD_PCR9 register */
    PORT_SetPinMux(PORTD, 9U, kPORT_MuxAlt3);

    /* I2C pull up resistor setting */
    PORT_SetPinConfig(PORTD, 2U, &pinConfig);
    PORT_SetPinConfig(PORTD, 3U, &pinConfig);
    /* I2C0 PIN_MUX Configuration */
    PORT_SetPinMux(PORTD, 2U, kPORT_MuxAlt7);
    PORT_SetPinMux(PORTD, 3U, kPORT_MuxAlt7);

    /* Ungate the port clock */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* I2C1 pull up resistor setting */
    PORT_SetPinConfig(PORTC, 10U, &pinConfig);
    PORT_SetPinConfig(PORTC, 11U, &pinConfig);
    /* I2C1 PIN_MUX Configuration */
    PORT_SetPinMux(PORTC, 10U, kPORT_MuxAlt2);
    PORT_SetPinMux(PORTC, 11U, kPORT_MuxAlt2);
}
