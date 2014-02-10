Adafruit_MCP4706
================

This is a library for the MCP4726 12-bit DAC, based on the
the Adafruit MCP4725 12-bit I2C DAC Driver library

Tested and works great with the MCP4726

Modified by S. Rodgers from original work done by Adafruit Industries and Pio Baettig

This chip uses I2C to communicate, The 2 I2C pins SDA and SCL on the Arduino are required to  
interface to the MCP4726. You must include 1.0K pullup resistors to +5V on SDA and SCL.

Adafruit invests time and resources providing this open source code, 
please support Adafruit and open-source hardware by purchasing 
products from Adafruit!

Originally written by Kevin Townsend/Limor Fried for Adafruit Industries.  
BSD license, check license.txt for more information
All text above must be included in any redistribution

To download. click the DOWNLOADS button in the top right corner, rename the uncompressed folder MCP4726. 
Check that the MCP4726 folder contains MCP4726.cpp and MCP4726.h

Move the MCP4726 library folder your ~/sketchbook/libraries/ folder. 
You may need to create the libraries subfolder if its your first library. Restart the IDE.

Original MCP4725 library at:
https://github.com/adafruit/Adafruit_MCP4725
