/*
 * LCD_prog.c
 *
 *  Created on: Oct 10, 2020
 *      Author: Shady
 */
#include <avr/delay.h>

#include "../../stdtypes.h"
#include "../../mathBit.h"

#include "../DIO_DRIVER/DIO_int.h"

#include "LCD_priv.h"
#include "LCD_cfg.h"
#include "LCD_int.h"

void LCD_voidInitialize()
{
#if (LCD_MODE == FOUR_BIT)
    {
        _delay_ms(35);

        LCD_voidWriteCmd(0b00000010);
        _delay_ms(5);

        LCD_voidWriteCmd(0b00101000);
        _delay_ms(1);

        LCD_voidWriteCmd(0b00000010);
        _delay_ms(5);

        LCD_voidWriteCmd(0b00001100);

        _delay_ms(1);
        LCD_voidWriteCmd(0b00000001);
        _delay_ms(2);
    }
#elif (LCD_MODE == EIGHT_BIT)
#endif
}

void LCD_voidWriteData(u8 Data)
{
    DIO_voidSetPin(RS_PIN, HIGH);
    DIO_voidSetPin(RW_PIN, LOW);
    LCD_help(Data);
}
void LCD_voidWriteCmd(u8 Data)
{
    DIO_voidSetPin(RS_PIN, LOW);
    DIO_voidSetPin(RW_PIN, LOW);
    LCD_help(Data);
}
void LCD_voidWriteString(s8 *Str)
{
    u8 i = 0;
    u8 *String = (u8 *)Str;
    while (String[i] != '\0' && i < 30)
    {
        LCD_voidWriteData(String[i]);
        i++;
    }
}

void LCD_voidWriteIntegerDec(s32 number)
{
    u8 stackOfDec[15];
    u8 counter = 0;
    while (number > 0)
    {
        stackOfDec[counter] = (number % 10) + 48;
        number /= 10;
        counter++;
    }

    for (int i = counter - 1; i >= 0; i--)
    {
        LCD_voidWriteData(stackOfDec[i]);
    }
}

void LCD_voidWriteIntegerDecFLored(s32 number, s32 flor)
{
    u8 stackOfDec[15];
    u8 counter = 0;
    while (number > 0)
    {
        stackOfDec[counter] = (number % 10) + 48;
        number /= 10;
        counter++;
    }

    for (int i = counter - 1; i >= (counter - (flor)); i--)
    {
        LCD_voidWriteData(stackOfDec[i]);
    }
}

void LCD_voidWriteIntegerHex(s32 number)
{
    u8 stackOfHex[15];
    u8 counter = 0;
    u8 residue;
    while (number > 0)
    {
        residue  = number % 16;
        if (residue > 9)
        {
            stackOfHex[counter] = residue + 55; /* Ascii for letters */
        } else
        {
            stackOfHex[counter] = residue + 48; /* Ascii for numbers added */
        }
        number /= 16;
        counter++;
    }
    LCD_voidWriteData('0');
    LCD_voidWriteData('X');
    
    for (int i = counter - 1; i >= 0; i--)
    {
        LCD_voidWriteData(stackOfHex[i]);
    }
}

void LCD_voidClrScreen()
{
    LCD_voidWriteCmd(1);
}

void LCD_voidInsertTab()
{
    for (u8 i = 0; i < LCD_TAB; i++)
    {
        LCD_voidWriteData(' ');
    }
    
}

void LCD_voidGoToXY(u8 x, u8 y)
{
    u8 yAddressShift = ((y%2) * 0x40) + 0x40;
    LCD_voidWriteCmd(yAddressShift + x *2);
}

void LCD_voidPrintf(s8 *formated, ...)
{
    /* Character Counter */
    u8 i = 0;
    u8 *String = (u8 *)formated;

    // u8 *ap = (u8 *)(&(formated) + 1);
    va_list ap;
    va_start(ap, formated);
    while (String[i] != '\0')
    {
        if (String[i] == '%')
        {
            i++;
            switch (String[i])
            {
            case 'c':
            {
                // u8 tempChar = *((u8 *)ap);
                // ap += sizeof(u8);
                u8 tempChar = va_arg(ap, u8);
                LCD_voidWriteData(tempChar);
                tempChar = va_arg(ap, u8); /* memory skipping */
                break;
            }
            case 'd':
            {
                s32 tempIntDec = va_arg(ap, s32);
                LCD_voidWriteIntegerDec(tempIntDec);
                break;
            }
            case 'x':
            {
                s32 tempIntHex = va_arg(ap, s32);
                LCD_voidWriteIntegerHex(tempIntHex);
                break;
            }
            case 's':
            {
                s8 *tempStr = va_arg(ap, s8 *);
                LCD_voidWriteString(tempStr);
                break;
            }
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            {
                u8 floringBy = String[i] - 48;
                if (String[i+1] == 'd')
                {
                    i++;
                    s32 tempIntDec = va_arg(ap, s32);
                    LCD_voidWriteIntegerDecFLored(tempIntDec,floringBy);
                }else
                {
                    LCD_voidWriteData('%');
                    LCD_voidWriteData(String[i]);
                }
                
                
                break;
            }

            default:
                LCD_voidWriteData('%');
                LCD_voidWriteData(String[i]);
                break;
            }
        }
        else if (String[i] == '\n')
        {
            LCD_voidWriteCmd(CURSOR_TO_LINE2);
        }
        else if (String[i] == '\t')
        {
            LCD_voidInsertTab();
        }
        else
        {
            LCD_voidWriteData(String[i]);
        }

        i++;
    }
}

static void LCD_help(u8 Data)
{
#if (LCD_MODE == FOUR_BIT)
    {

        if (GET_BIT(Data, 7) == 1)
            DIO_voidSetPin(D7_PIN, HIGH);
        else
            DIO_voidSetPin(D7_PIN, LOW);

        if (GET_BIT(Data, 6) == 1)
            DIO_voidSetPin(D6_PIN, HIGH);
        else
            DIO_voidSetPin(D6_PIN, LOW);

        if (GET_BIT(Data, 5) == 1)
            DIO_voidSetPin(D5_PIN, HIGH);
        else
            DIO_voidSetPin(D5_PIN, LOW);

        if (GET_BIT(Data, 4) == 1)
            DIO_voidSetPin(D4_PIN, HIGH);
        else
            DIO_voidSetPin(D4_PIN, LOW);

        DIO_voidSetPin(EN_PIN, HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN, LOW);

        if (GET_BIT(Data, 3) == 1)
            DIO_voidSetPin(D7_PIN, HIGH);
        else
            DIO_voidSetPin(D7_PIN, LOW);

        if (GET_BIT(Data, 2) == 1)
            DIO_voidSetPin(D6_PIN, HIGH);
        else
            DIO_voidSetPin(D6_PIN, LOW);

        if (GET_BIT(Data, 1) == 1)
            DIO_voidSetPin(D5_PIN, HIGH);
        else
            DIO_voidSetPin(D5_PIN, LOW);

        if (GET_BIT(Data, 0) == 1)
            DIO_voidSetPin(D4_PIN, HIGH);
        else
            DIO_voidSetPin(D4_PIN, LOW);

        DIO_voidSetPin(EN_PIN, HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN, LOW);
    }
#elif (LCD_MODE == EIGHT_BIT)
    {
        DIO_voidSetPin(RS_PIN, HIGH);
        DIO_voidSetPin(RW_PIN, LOW);

        if (GET_BIT(Data, 7) == 1)
            DIO_voidSetPin(D7_PIN, HIGH);
        else
            DIO_voidSetPin(D7_PIN, LOW);

        if (GET_BIT(Data, 6) == 1)
            DIO_voidSetPin(D6_PIN, HIGH);
        else
            DIO_voidSetPin(D6_PIN, LOW);

        if (GET_BIT(Data, 5) == 1)
            DIO_voidSetPin(D5_PIN, HIGH);
        else
            DIO_voidSetPin(D5_PIN, LOW);

        if (GET_BIT(Data, 4) == 1)
            DIO_voidSetPin(D4_PIN, HIGH);
        else
            DIO_voidSetPin(D4_PIN, LOW);

        if (GET_BIT(Data, 3) == 1)
            DIO_voidSetPin(D3_PIN, HIGH);
        else
            DIO_voidSetPin(D3_PIN, LOW);

        if (GET_BIT(Data, 2) == 1)
            DIO_voidSetPin(D2_PIN, HIGH);
        else
            DIO_voidSetPin(D2_PIN, LOW);

        if (GET_BIT(Data, 1) == 1)
            DIO_voidSetPin(D1_PIN, HIGH);
        else
            DIO_voidSetPin(D1_PIN, LOW);

        if (GET_BIT(Data, 0) == 1)
            DIO_voidSetPin(D0_PIN, HIGH);
        else
            DIO_voidSetPin(D0_PIN, LOW);

        DIO_voidSetPin(EN_PIN, HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN, LOW);
    }
#endif
}
