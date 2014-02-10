/**************************************************************************/
/*! 
    @file     MCP4726.cpp
    @author   S. Rodgers
	@license  BSD (see license.txt)
		Based on original work from Adafruit Industries.
        Modified for MCP4706 by Pio Baettig
        Modified for MCP4726 by S. Rodgers

	I2C Driver for Microchip's MCP4726 I2C DAC

	This is a library for the MCP4726 12-bit DAC modified from:
   
	Adafruit invests time and resources providing this open source code, 
	please support Adafruit and open-source hardware by purchasing 
	products from Adafruit!

	@section  HISTORY

    v1.0 - First release
*/
/**************************************************************************/

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define MCP4726_DEFAULT_ADDR 0x60

#include <Wire.h>

class MCP4726{
 public:
  MCP4726();
  void begin(uint8_t a);  
  void setVoltage( uint16_t output);

 private:
  uint8_t _i2caddr;
};
