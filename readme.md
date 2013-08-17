#7-segment LED display with I2C interface

The hardware for this project can be bought from http://www.buyincoins.com/item/26010.html ("New 4 Digit 4.5-30V Stm8s003 Master Control Two Lines Red LED Digital Voltmeter") or http://www.buyincoins.com/item/26011.html ("4 Digit 4.5-30V Stm8s003 Master Control Two Lines Blue LED Digital in any way). Please note that I'm not associated with the seller in any way.

The original hardware was designed as a 4-digit voltmeter using STM8S003F3P6 MCU.

I followed a similar project documented http://www.ba0sh1.com/hacking-a-cheap-led-voltmeter/ and https://github.com/baoshi/I2C-LED to modify the voltmeter into an I2C display device. The majority of the source code goes into bit banging the I2C slave protocol, as the original I2C pins are occupied by the LED. With full complier optimization I2C clock up to 50kHz is supported.

A emulation layer for the "Adafruit 4-Digit 7-Segment Display Backpack" http://www.adafruit.com/products/878 is also implemented. Original Adafruit Arduino demo codes are used for testing (with reduced I2C clock).

The free KickStart edition of "IAR Embedded Workbench for STMicroelectronics STM8" is used for development. STM8S/A Standard Peripherals Library (STM8S_StdPeriph_Driver V2.1.0) is also needed.
 
