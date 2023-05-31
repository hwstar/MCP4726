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
    v1.1 - Use SetClock which is a portable I2C clock frequency selection method.
*/
/**************************************************************************/
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Wire.h>

#include "MCP4726.h"



/**************************************************************************/
/*! 
    @brief  Instantiates a new MCP4726 class
*/
/**************************************************************************/
MCP4726::MCP4726() {
}

/**************************************************************************/
/*! 
    @brief  Setups the HW
*/
/**************************************************************************/
void MCP4726::begin(uint8_t addr) {
  _i2caddr = addr;
  Wire.begin();

}
 
/**************************************************************************/
/*! 
    @brief  Sets the output voltage to a fraction of source vref.  (Value
            can be 0..4096)

    @param[in]  output
                The 12-bit value representing the relationship between
                the DAC's input voltage and its output voltage.
*/
/**************************************************************************/
void MCP4726::setVoltage( uint16_t output)
{
  Wire.setClock(400000);
  Wire.beginTransmission(_i2caddr);
  Wire.write((uint8_t) ((output >> 8) & 0x0F));   // MSB: (D11, D10, D9, D8) 
  Wire.write((uint8_t) (output));  // LSB: (D7, D6, D5, D4, D3, D2, D1, D0)
  Wire.endTransmission();
}
