/*
 * LCD_prog.c
 *
 *  Created on: Oct 10, 2020
 *      Author: Shady
 */
#include <avr/delay.h>

#include "../stdtypes.h"
#include "../mathBit.h"

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
    #elif(LCD_MODE == EIGHT_BIT)
    #endif
}

void LCD_voidWriteData(u8 Data)
{
    DIO_voidSetPin(RS_PIN,HIGH);
    DIO_voidSetPin(RW_PIN,LOW);
    LCD_help(Data);
}
void LCD_voidWriteCmd(u8 Data)
{
    DIO_voidSetPin(RS_PIN,LOW);
    DIO_voidSetPin(RW_PIN,LOW);
    LCD_help(Data);
}
void LCD_voidWriteString(s8 * Str)
{
    u8 i =0;
    u8 * String = (u8 *) Str;
    while (String[i] != '\0' && i < 30)
    {
        LCD_voidWriteData(String[i]);
        i++;
    }
    
}

void LCD_voidClrScreen(u8 Data)
{
    LCD_voidWriteCmd(1);
}

//void LCD_voidGoToXY(u8 x, u8 y);

// void LCD_voidPrintf(/////////////); multi argument functions


static void LCD_help(u8 Data)
{
    #if (LCD_MODE == FOUR_BIT)
    {
        
        if(GET_BIT(Data,7) == 1)
            DIO_voidSetPin(D7_PIN,HIGH);
        else 
            DIO_voidSetPin(D7_PIN,LOW);

        if(GET_BIT(Data,6) == 1)
            DIO_voidSetPin(D6_PIN,HIGH);
        else 
            DIO_voidSetPin(D6_PIN,LOW);

        if(GET_BIT(Data,5) == 1)
            DIO_voidSetPin(D5_PIN,HIGH);
        else 
            DIO_voidSetPin(D5_PIN,LOW);

        if(GET_BIT(Data,4) == 1)
            DIO_voidSetPin(D4_PIN,HIGH);
        else 
            DIO_voidSetPin(D4_PIN,LOW);
        
        DIO_voidSetPin(EN_PIN,HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN,LOW);


        if(GET_BIT(Data,3) == 1)
            DIO_voidSetPin(D7_PIN,HIGH);
        else 
            DIO_voidSetPin(D7_PIN,LOW);

        if(GET_BIT(Data,2) == 1)
            DIO_voidSetPin(D6_PIN,HIGH);
        else 
            DIO_voidSetPin(D6_PIN,LOW);

        if(GET_BIT(Data,1) == 1)
            DIO_voidSetPin(D5_PIN,HIGH);
        else 
            DIO_voidSetPin(D5_PIN,LOW);

        if(GET_BIT(Data,0) == 1)
            DIO_voidSetPin(D4_PIN,HIGH);
        else 
            DIO_voidSetPin(D4_PIN,LOW);
        
        DIO_voidSetPin(EN_PIN,HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN,LOW);
    }
    #elif (LCD_MODE == EIGHT_BIT)
    {
        DIO_voidSetPin(RS_PIN,HIGH);
        DIO_voidSetPin(RW_PIN,LOW);

        if(GET_BIT(Data,7) == 1)
            DIO_voidSetPin(D7_PIN,HIGH);
        else 
            DIO_voidSetPin(D7_PIN,LOW);

        if(GET_BIT(Data,6) == 1)
            DIO_voidSetPin(D6_PIN,HIGH);
        else 
            DIO_voidSetPin(D6_PIN,LOW);

        if(GET_BIT(Data,5) == 1)
            DIO_voidSetPin(D5_PIN,HIGH);
        else 
            DIO_voidSetPin(D5_PIN,LOW);

        if(GET_BIT(Data,4) == 1)
            DIO_voidSetPin(D4_PIN,HIGH);
        else 
            DIO_voidSetPin(D4_PIN,LOW);


        if(GET_BIT(Data,3) == 1)
            DIO_voidSetPin(D3_PIN,HIGH);
        else 
            DIO_voidSetPin(D3_PIN,LOW);

        if(GET_BIT(Data,2) == 1)
            DIO_voidSetPin(D2_PIN,HIGH);
        else 
            DIO_voidSetPin(D2_PIN,LOW);

        if(GET_BIT(Data,1) == 1)
            DIO_voidSetPin(D1_PIN,HIGH);
        else 
            DIO_voidSetPin(D1_PIN,LOW);

        if(GET_BIT(Data,0) == 1)
            DIO_voidSetPin(D0_PIN,HIGH);
        else 
            DIO_voidSetPin(D0_PIN,LOW);
        
        DIO_voidSetPin(EN_PIN,HIGH);
        _delay_ms(5);
        DIO_voidSetPin(EN_PIN,LOW);
    }
    #endif
}
