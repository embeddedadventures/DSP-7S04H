/*
Copyright (c) 2017, Embedded Adventures
All rights reserved.
Contact us at source [at] embeddedadventures.com
www.embeddedadventures.com
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.
- Neither the name of Embedded Adventures nor the names of its contributors
  may be used to endorse or promote products derived from this software
  without specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
THE POSSIBILITY OF SUCH DAMAGE.
*/

// DSP-7S04H 7-segment 4-digit LED display Arduino test sketch
// Written originally by Embedded Adventures

#include <Wire.h>
#include <DSP7S04H.h>

void setup () {
  Wire.begin();
  Serial.begin(115200);
  Serial.println("Embedded Adventures DSP-7S04B demo\n\r");
  dsp7s04h.setAddress(EA_DSP7S04_ADDR_DEFAULT);
}

void loop() {
  Serial.println("Clearing...");
  dsp7s04h.clearDisplay();
  delay(1000);
  Serial.println("Print str...");
  dsp7s04h.println("1234");
  delay(1000);
  Serial.println("Setting level at 127");
  dsp7s04h.setBrightness(127);
  delay(1000);
  Serial.println("Setting level at 10");
  dsp7s04h.setBrightness(10);
  delay(1000);
  Serial.println("Setting level at 255");
  dsp7s04h.setBrightness(255);
  delay(1000);
  Serial.println("Dots on");
  dsp7s04h.setDot(0);
  dsp7s04h.setDot(1);
  dsp7s04h.setDot(2);
  dsp7s04h.setDot(3);
  delay(1000);
  Serial.println("Dots off");
  dsp7s04h.clearDot(0);
  dsp7s04h.clearDot(1);
  dsp7s04h.clearDot(2);
  dsp7s04h.clearDot(3);
  delay(1000);
  Serial.println("Set raw segments");
  dsp7s04h.setRaw(0, 0xFFFF);
  dsp7s04h.setRaw(1, 0xFFFF);
  dsp7s04h.setRaw(2, 0xFFFF);
  dsp7s04h.setRaw(3, 0xFFFF);
  delay(1000);
  
  
}
