# DSP-7S04H

A great Arduino library to communicate with the [DSP-7S04H 7 segment 4 digit 2.3" display](http://www.embeddedadventures.com/4_digit_7_segment_led_display_dsp-7s04h-red.html) from Embedded Adventures

## Using the library ##

The Arduino sample sketches show the minimum functions necessary to drive the DSP-7S04H display.

	dsp7s04h.setAddress(EA_DSP7S04_ADDR_DEFAULT);

The first function to call, which sets the I2C address to use for communication. Default address is defined in the header file - 0x32

### First test ###

A test function is included in the display's firmware. This can be executed using the function and passing a "1", and "0" to turn it off.

	void setTestMode(uns8 on);

### Driving segments on the display ###

Print up to 4 characters on the display

	void println(char *str)

Drive the segments individually. Pos is the digit to drive, and the 16-bit data is for the individual segments themselves. Check the datasheet for the mapping of bits to segments.

	void setRaw(uns8 pos, uns16 data)


Turn on/off the dot at position *position*

	void setDot(uns8 position);
	void clearDot(uns8 position);

To adjust the display brightness
	
	void setBrightness(uns8 level)

Clear the display and turn off all segments

	void clearDisplay();

## Tested with the following boards ##
- <a href="http://www.embeddedadventures.com/arduno_uno_PLT-AUNO.html">Arduino Uno</a>/<a href="http://www.embeddedadventures.com/arduno_uno_plt-auno3-cm.html">compatible</a>
	- I2C (A4/A5)
- ESP8266 Module (<a href="http://www.embeddedadventures.com/esp8266_wifi_module_wrl-esp7.html">ESP7</a> and <a href="http://www.embeddedadventures.com/esp8266_wifi_module_wrl-esp12e.html">ESP12</a>)
	- I2C (IO4/IO5)
- <a href="http://www.embeddedadventures.com/esp32_development_platform_PLT-ESP32-01.html">ESP32 Module</a>
	- I2C (IO21/IO22)

## To Do List ##
- SAMD21-based board compatibility
- include UART Serial interface