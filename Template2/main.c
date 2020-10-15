#include "mathBit.h"
#include "stdtypes.h"
#include "avr/io.h"
//#include "avr/iom32.h"
#include "./Drivers/DIO_DRIVER/DIO_int.h"
#include "Drivers/LCD_DRIVER/LCD_int.h"
// #include "./Drivers/LED8X8_DRIVER/LED8X8_int.h"
#include "./Drivers/KEYPAD_DRIVER/KEYPAD_int.h"
// #include "./SEVSEG_DRIVER/SEVSEG_int.h"
#include <stdlib.h>
#include "avr/delay.h"

int main()
{

    DIO_voidInitialize();
    KEYPAD_voidInitialize();
    LCD_voidInitialize();
    //    s8 * name = "Shady";
    //    s8 x = 'X';
    //    s8 y = 'Y';
    LCD_voidPrintf("Hel\tlo %3d \n on", 2365);
    LCD_voidWriteIntegerDecFLored(4536,3);
    //    LCD_voidWriteIntegerDec(2533);

    while (1)
    {
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH1))
        {
            LCD_voidPrintf("Hello %x", 305);
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH2))
        {
            LCD_voidClrScreen();
            LCD_voidPrintf("%d", 2);
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH3))
        {
            LCD_voidWriteString("H");
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH4))
        {
            LCD_voidWriteCmd(SHIFT_CURSOR_RIGHT);
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH8))
        {
            LCD_voidWriteCmd(SHIFT_CURSOR_LEFT);
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH5))
        {
            LCD_voidWriteCmd(CURSOR_TO_LINE2);
            _delay_ms(500);
        }
        if (KEYPAD_u8IsPressed(KEYPAD_SWITCH6))
        {
            LCD_voidGoToXY(2,1);
            _delay_ms(500);
        }

        
    }

    return 0;
}
