/*
 * LED8X8_prog.c
 *
 *  Created on: Oct 11, 2020
 *      Author: Shady
 */


#include "../../stdtypes.h"
#include "../../mathBit.h"

#include "../DIO_DRIVER/DIO_int.h"
#include <avr/io.h>
#include "avr/iom32.h"
#include <avr/delay.h>

#include "LED8X8_priv.h"
#include "LED8X8_cfg.h"
#include "LED8X8_int.h"

void LED8X8_voidAllOn(void)
{
    /* Specific to my Device */
    PORTA = 0B11001101;
    PORTC = 0B00101001;

    /* For General purpose uncomment this section */
    /* 
        LED8X8_voidColsOn();
        LED8X8_voidRowsOn();
    */
}
void LED8X8_voidAllOff(void)
{
    /* Specific to my Device */
    PORTA = 0B00110010;
    PORTC = 0B11010110;

    /* For General purpose uncomment this section */
    /* 
        LED8X8_voidColsOff();
        LED8X8_voidRowsOff();
    */
}

void LED8X8_voidRowOn(u8 rowNum)
{
    u8 rowPin = LED8X8_u8LocalRowPinSelector(rowNum);
    #if (LED8X8_ROWS_CONN == FORWORD)
    {
        DIO_voidSetPin(rowPin,HIGH);
    }
    #else
    {
        DIO_voidSetPin(rowPin,LOW);
    }
    #endif
}
void LED8X8_voidRowOff(u8 rowNum)
{
    u8 rowPin = LED8X8_u8LocalRowPinSelector(rowNum);
    #if (LED8X8_ROWS_CONN == FORWORD)
    {
        DIO_voidSetPin(rowPin,LOW);
    }
    #else
    {
        DIO_voidSetPin(rowPin,HIGH);
    }
    #endif
}
void LED8X8_voidRowsOff(void)
{
    #if (LED8X8_ROWS_CONN == FORWORD)
    {
        DIO_voidSetPin(LED8X8_R0_PIN,LOW);
        DIO_voidSetPin(LED8X8_R1_PIN,LOW);
        DIO_voidSetPin(LED8X8_R2_PIN,LOW);
        DIO_voidSetPin(LED8X8_R3_PIN,LOW);
        DIO_voidSetPin(LED8X8_R4_PIN,LOW);
        DIO_voidSetPin(LED8X8_R5_PIN,LOW);
        DIO_voidSetPin(LED8X8_R6_PIN,LOW);
        DIO_voidSetPin(LED8X8_R7_PIN,LOW);
    }
    #else
    {
        DIO_voidSetPin(LED8X8_R0_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R1_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R2_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R3_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R4_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R5_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R6_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R7_PIN,HIGH);
    }
    #endif
}
void LED8X8_voidRowsOn(void)
{
    #if (LED8X8_ROWS_CONN == FORWORD)
    {
        DIO_voidSetPin(LED8X8_R0_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R1_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R2_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R3_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R4_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R5_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R6_PIN,HIGH);
        DIO_voidSetPin(LED8X8_R7_PIN,HIGH);
    }
    #else
    {
        DIO_voidSetPin(LED8X8_R0_PIN,LOW);
        DIO_voidSetPin(LED8X8_R1_PIN,LOW);
        DIO_voidSetPin(LED8X8_R2_PIN,LOW);
        DIO_voidSetPin(LED8X8_R3_PIN,LOW);
        DIO_voidSetPin(LED8X8_R4_PIN,LOW);
        DIO_voidSetPin(LED8X8_R5_PIN,LOW);
        DIO_voidSetPin(LED8X8_R6_PIN,LOW);
        DIO_voidSetPin(LED8X8_R7_PIN,LOW);
    }
    #endif
}

void LED8X8_voidColOn(u8 colNum)
{
    u8 colPin = LED8X8_u8LocalColPinSelector(colNum);
    #if (LED8X8_COLS_CONN == FORWORD)
    {
        DIO_voidSetPin(colPin,HIGH);
    }
    #else
    {
        DIO_voidSetPin(colPin,LOW);
    }
    #endif
}
void LED8X8_voidColOff(u8 colNum)
{
    u8 colPin = LED8X8_u8LocalColPinSelector(colNum);
    #if (LED8X8_COLS_CONN == FORWORD)
    {
        DIO_voidSetPin(colPin,LOW);
    }
    #else
    {
        DIO_voidSetPin(colPin,HIGH);
    }
    #endif
}
void LED8X8_voidColsOff(void)
{
    #if (LED8X8_COLS_CONN == FORWORD)
    {
        DIO_voidSetPin(LED8X8_C0_PIN,LOW);
        DIO_voidSetPin(LED8X8_C1_PIN,LOW);
        DIO_voidSetPin(LED8X8_C2_PIN,LOW);
        DIO_voidSetPin(LED8X8_C3_PIN,LOW);
        DIO_voidSetPin(LED8X8_C4_PIN,LOW);
        DIO_voidSetPin(LED8X8_C5_PIN,LOW);
        DIO_voidSetPin(LED8X8_C6_PIN,LOW);
        DIO_voidSetPin(LED8X8_C7_PIN,LOW);
    }
    #else
    {
        DIO_voidSetPin(LED8X8_C0_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C1_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C2_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C3_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C4_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C5_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C6_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C7_PIN,HIGH);
    }
    #endif
}
void LED8X8_voidColsOn(void)
{
     #if (LED8X8_COLS_CONN == FORWORD)
    {
        DIO_voidSetPin(LED8X8_C0_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C1_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C2_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C3_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C4_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C5_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C6_PIN,HIGH);
        DIO_voidSetPin(LED8X8_C7_PIN,HIGH);
    }
    #else
    {
        DIO_voidSetPin(LED8X8_C0_PIN,LOW);
        DIO_voidSetPin(LED8X8_C1_PIN,LOW);
        DIO_voidSetPin(LED8X8_C2_PIN,LOW);
        DIO_voidSetPin(LED8X8_C3_PIN,LOW);
        DIO_voidSetPin(LED8X8_C4_PIN,LOW);
        DIO_voidSetPin(LED8X8_C5_PIN,LOW);
        DIO_voidSetPin(LED8X8_C6_PIN,LOW);
        DIO_voidSetPin(LED8X8_C7_PIN,LOW);
    }
    #endif
}


static u8 LED8X8_u8LocalRowPinSelector(u8 rowNum)
{
    u8 rowPin;
    switch (rowNum)
    {
    case LED8X8_R0:
        rowPin = LED8X8_R0_PIN;
        break;
    case LED8X8_R1:
        rowPin = LED8X8_R1_PIN;
        break;
    case LED8X8_R2:
        rowPin = LED8X8_R2_PIN;
        break;
    case LED8X8_R3:
        rowPin = LED8X8_R3_PIN;
        break;
    case LED8X8_R4:
        rowPin = LED8X8_R4_PIN;
        break;
    case LED8X8_R5:
        rowPin = LED8X8_R5_PIN;
        break;
    case LED8X8_R6:
        rowPin = LED8X8_R6_PIN;
        break;
    case LED8X8_R7:
        rowPin = LED8X8_R7_PIN;
        break;
    
    default:
        break;
    }
    return rowPin;
}
static u8 LED8X8_u8LocalColPinSelector(u8 colNum)
{
   u8 colPin;
   switch (colNum)
   {
   case LED8X8_C0:
       colPin = LED8X8_C0_PIN;
       break;
   case LED8X8_C1:
       colPin = LED8X8_C1_PIN;
       break;
   case LED8X8_C2:
       colPin = LED8X8_C2_PIN;
       break;
   case LED8X8_C3:
       colPin = LED8X8_C3_PIN;
       break;
   case LED8X8_C4:
       colPin = LED8X8_C4_PIN;
       break;
   case LED8X8_C5:
       colPin = LED8X8_C5_PIN;
       break;
   case LED8X8_C6:
       colPin = LED8X8_C6_PIN;
       break;
   case LED8X8_C7:
       colPin = LED8X8_C7_PIN;
       break;

   default:
       break;
   }
   return colPin;
}


void LED8X8_voidPrintMatrix64(u8 * field)
{
    u8 aspeed = 1;
    for (int i = 0; i < 8; i++)
    {
        LED8X8_voidAllOff();
        for (int j = 0; j < 8; j++)
        {
            if (field[i*8+j] > 0)
                LED8X8_voidColOn(j);
        }

        LED8X8_voidRowOn(i);
        _delay_ms(aspeed);
    }
}

void LED8X8_voidPrintMatrix8(u8 *field)
{
    u8 aspeed = 3;
    for (int i = 0; i < 8; i++)
    {
        LED8X8_voidAllOff();
        for (int j = 0; j < 8; j++)
        {
            if (GET_BIT(field[i], j) == 1)
                LED8X8_voidColOn(j);
        }
        LED8X8_voidRowOn(i);
        _delay_ms(aspeed);
    }
}


