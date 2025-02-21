/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define PA0   0  //D0
#define PA1   1  //D1
#define PA2   2  //D2
#define PA3   3 //D3
#define PA4   4 //D4
#define PA5   5  //D5
#define PA6   A2  //D6
#define PA7   7  //D7
#define PA8   8  //D8
#define PA9   9  //D9
#define PA10  10 //D10
#define PA11  11 //D11
#define PA12  12 //D12
#define PA13  13 //D13
#define PA14  14 //D14
#define PA15  15 //D15
#define PB0   A1 //D16
#define PB1   17 //D17
#define PB2   18 //D18
#define PB3   19 //D19
#define PB4   20 //D20
#define PB5   21 //D21
#define PB6   22 //D22
#define PB7   23 //D23
#define PB8   24 //D24
#define PB9   25 //D25
#define PB10  26 //D26
#define PB11  27 //D27
#define PB12  28 //D28
#define PB13  29 //D29
#define PB14  30 //D30
#define PB15  31 //D31
#define PC0   32 //D32
#define PC1   33 //D33
#define PC2   34 //D34
#define PC3   35 //D35
#define PC4   A0 //D36
#define PC5   37 //D37
#define PC6   38 //D38
#define PC7   39 //D39
#define PC8   40 //D40
#define PC9   41 //D41
#define PC10  42 //D42
#define PC11  43 //D43
#define PC12  44 //D44
#define PC13  45 //D45
#define PC14  46 //D46
#define PC15  47 //D47
#define PD0   48 //D48
#define PD1   49 //D49
#define PD2   50 //D50


// This must be a literal
#define NUM_DIGITAL_PINS        51
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       3

//#define LED_BUILTIN             PB11

// Override default Arduino configuration
// SPI Definitions
#if 0
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6
#endif

// Timer Definitions
#define TIMER_TONE              TIM3
#define TIMER_SERVO             TIM2

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1

// Default pin used for 'Serial1' instance
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

/* Extra HAL modules */
#if defined(STM32F103xE) || defined(STM32F103xG)
#define HAL_DAC_MODULE_ENABLED
#endif

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
