
#include "DFRobot_RGBLCD1602.h"
#include <Arduino.h>



/*
Change the RGBaddr value based on the hardware version
-----------------------------------------
       Moudule        | Version| RGBAddr|
-----------------------------------------
  LCD1602 Module      |  V1.0  | 0x60   |
-----------------------------------------
  LCD1602 Module      |  V1.1  | 0x6B   |
-----------------------------------------
  LCD1602 RGB Module  |  V1.0  | 0x60   |
-----------------------------------------
  LCD1602 RGB Module  |  V2.0  | 0x2D   |
-----------------------------------------
*/
DFRobot_RGBLCD1602 lcd(/*RGBAddr*/0x2D ,/*lcdCols*/16,/*lcdRows*/2);  //16 characters and 2 lines of show

void setup() {
    /**
     *  @brief initialize the LCD and master IIC
     */ 
    lcd.init();

    // Print a message to the LCD.
    lcd.print("hello, world!");

    delay(1000);
}

void loop() {

    /**
     *  @brief Turn  off the blinking showCursor
     */
   // lcd.stopBlink();// Turn off the blinking cursor
   // delay(3000);

    /**
     *  @brief Turn on  the blinking showCursor
     */
  //  lcd.blink();// Turn on the blinking cursor:
   // delay(3000);

   //   lcd.noDisplay();
   // delay(500);

    
    lcd.display();
    delay(500);

    lcd.setRGB(10,10,10);
 // lcd.print("hello, world!");
  delay(500);
    // for (int i = 0; i < 256; i++)
    // {
    //  lcd.setRGB(i,0,0);
    //  delay(10);
    // }
    // for (int i = 0; i < 256; i++)
    // {
    //  lcd.setRGB(0,i,0);
    //  delay(10);
    // }
    // for (int i = 0; i < 256; i++)
    // {
    //  lcd.setRGB(0,0,i);
    //  delay(10);
    // }
    // lcd.print("hello, world!");
  //  delay(5000);
 lcd.scrollDisplayRight(); 
  delay(500);
 lcd.scrollDisplayLeft();
 //lcd.clear();
  delay(500);
}
