/**************************************************************************/
/*!
@file trianglewave.ino
@author S. Rodgers 
@license BSD (see license.txt)

Modified for MCP4726 by S. Rodgers
Based on work from Adafruit Industries and Pio Baettig

This example will generate a triangle wave with the MCP4726 DAC.

This is an example sketch for the MCP4726

Adafruit invests time and resources providing this open source code,
please support Adafruit and open-source hardware by purchasing
products from Adafruit!
*/
/**************************************************************************/
#include <Wire.h>
#include <MCP4726.h>

MCP4726 dac;

void setup(void) {
  // For MCP4726 the address is 0x60 (A0 part address. Check MCP4726 part number suffix as address could be different)
  dac.begin(MCP4726_DEFAULT_ADDR);
  }

void loop(void) {
  uint16_t counter;
  for (counter = 0; counter < 4096; counter++)
  {
    dac.setVoltage(counter);
  }
  for (counter = 4095; counter != 0; counter--)
  {
    dac.setVoltage(counter);
  }
}
