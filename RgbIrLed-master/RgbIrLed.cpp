/*
  RGBled.cpp - IR RGB Led Library.
  Created by Alistair Allan, September 24, 2012.
  Released into the public domain.
*/

// include core Wiring API
#include "Arduino.h"
#include "RgbIrLed.h"

RgbIrLed::RgbIrLed(int type) //int type
{
//TYPE 0 = APA1616 24 Button Remote
 if(type==0)
 {
   Brighter = 0xFF906F;
   Darker = 0xFFB847;
   Off = 0xFFF807;
   On = 0xFFB04F;
   Red = 0xFF9867;
   Green = 0xFFD827; 
   Blue = 0xFF8877;
   White = 0xFFA857;
   Flash = 0xFFB24D;
   Strobe = 0xFF00FF;
   Fade = 0xFF58A7;
   Smooth = 0xFF30CF;
   
   BR1 = 0xFFE817;
   BR2 = 0xFF02FD;
   BR3 = 0xFF50AF;
   BR4 = 0xFF38C7;

   BG1 = 0xFF48B7;
   BG2 = 0xFF32CD;
   BG3 = 0xFF7887;
   BG4 = 0xFF28D7;

   BB1 = 0xFF6897;
   BB2 = 0xFF20DF;
   BB3 = 0xFF708F;
   BB4 = 0xFFF00F;
}

//TYPE 1 = LED618 24 Button Remote
if(type==1)
 {
   Brighter = 0xFFA05F;
   Darker = 0xFF20DF;
   Off = 0xFF609F;
   On = 0xFFE01F;
   Red = 0xFF906F;
   Green = 0xFF10EF;
   Blue = 0xFF50AF;
   White = 0xFFD02F;
   Flash = 0xFFF00F;
   Strobe = 0xFFE817;
   Fade = 0xFFD827;
   Smooth = 0xFFC837;
   BR1 = 0xFFB04F;
   BR2 = 0xFFA857;
   BR3 = 0xFF9867;
   BR4 = 0xFF8877;

   BG1 = 0xFF30CF;
   BG2 = 0xFF28D7;
   BG3 = 0xFF18E7;
   BG4 = 0xFF08F7;

   BB1 = 0xFF708F;
   BB2 = 0xFF6897;
   BB3 = 0xFF58A7;
   BB4 = 0xFF48B7;
}


}



