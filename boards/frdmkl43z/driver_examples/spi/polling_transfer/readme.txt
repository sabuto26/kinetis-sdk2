Overview
========
The spi_polling example shows how to use spi driver with polling:

In this example, one spi instance as master and another spi instance as slave. Master sends a piece of data to slave,
and check if the data slave received is correct.

Notice: The SPI slave of this example uses interrupt mode, as there is no polling mode for SPI slave.

Toolchain supported
===================
- IAR embedded Workbench 7.70.1
- Keil MDK 5.20
- GCC ARM Embedded 2015-4.9-q3
- Kinetis Development Studio IDE 3.2.0
- Atollic TrueSTUDIO 5.5.2

Hardware requirements
=====================
- Mini USB cable
- FRDM-KL43Z board
- Personal Computer

Board settings
==============
SPI one board:
  + Transfer data from instance0 to instance 1 of SPI interface, SPI0 pins are connected with
    SPI1 pins of board
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
INSTANCE0        CONNECTS TO         INSTANCE1
Pin Name   Board Location     Pin Name  Board Location
MISO       J2 pin 8           MISO      J1 pin 11
MOSI       J2 pin 10          MOSI      J1 pin 9
SCK        J2 pin 12          SCK       J1 pin 15
PCS0       J2 pin 6           PCS0      J1 pin 7
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Prepare the Demo
================
1.  Connect a mini USB cable between the PC host and the OpenSDA USB port on the board.
2.  Open a serial terminal on PC for OpenSDA serial device with these settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Reset the SoC and run the project.

Running the demo
================
When the demo runs successfully, the log would be seen on the OpenSDA terminal like:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
SPI one board polling example started!

SPI transfer finished!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Customization options
=====================

