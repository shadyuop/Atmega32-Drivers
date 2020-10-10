/*
 * SEVSEG_prog.c
 *
 *  Created on: Oct 9, 2020
 *      Author: Shady
 */

#include "../stdtypes.h"
#include "../mathBit.h"

#include "../DIO_DRIVER/DIO_int.h"

#include "SEVSEG_cfg.h"
#include "SEVSEG_priv.h"
#include "SEVSEG_int.h"

void SEVSEG_voidInitialize(void)
{
}

void SEVSEG_voidDisplay(u8 digit, u8 segNum)
{
    if (segNum == SEVSEG0)
    {
        #if (SEVSEG0_CONN == COMMON_CATHOD)
        {
            DIO_voidSetPin(SEVSEG0_ENABLE, HIGH); /* Should be low, but Enable is Not-ted in my kit */
            switch (digit)
            {
            case 0:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 1:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 2:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 3:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 4:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 5:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 6:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 7:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 8:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 9:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            default:
                break;
            }
        } 

        #elif (SEVSEG0_CONN == COMMON_ANNOD) 
        {
            DIO_voidSetPin(SEVSEG0_ENABLE, LOW);/* Should be high, but Enable is Not-ted in my kit */
            switch (digit)
            {
            case 0:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 1:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 2:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, HIGH);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 3:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 4:
                DIO_voidSetPin(SEVSEG0_PINA, HIGH);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 5:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 6:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, HIGH);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 7:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, HIGH);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, HIGH);
                DIO_voidSetPin(SEVSEG0_PING, HIGH);
                break;
            case 8:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, LOW);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            case 9:
                DIO_voidSetPin(SEVSEG0_PINA, LOW);
                DIO_voidSetPin(SEVSEG0_PINB, LOW);
                DIO_voidSetPin(SEVSEG0_PINC, LOW);
                DIO_voidSetPin(SEVSEG0_PIND, LOW);
                DIO_voidSetPin(SEVSEG0_PINE, HIGH);
                DIO_voidSetPin(SEVSEG0_PINF, LOW);
                DIO_voidSetPin(SEVSEG0_PING, LOW);
                break;
            default:
                break;
            }
        } 
        #endif
    }
    else
    {
        #if (SEVSEG1_CONN == COMMON_CATHOD)
        {
            DIO_voidSetPin(SEVSEG1_ENABLE, HIGH); /* Should be low, but Enable is Not-ted in my kit */
            switch (digit)
            {
            case 0:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 1:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 2:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 3:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 4:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 5:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 6:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 7:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 8:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 9:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            default:
                break;
            }
        } 

        #elif (SEVSEG1_CONN == COMMON_ANNOD)
        {
            DIO_voidSetPin(SEVSEG1_ENABLE, LOW);/* Should be high, but Enable is Not-ted in my kit */
            switch (digit)
            {
            case 0:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 1:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 2:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, HIGH);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 3:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 4:
                DIO_voidSetPin(SEVSEG1_PINA, HIGH);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 5:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 6:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, HIGH);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 7:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, HIGH);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, HIGH);
                DIO_voidSetPin(SEVSEG1_PING, HIGH);
                break;
            case 8:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, LOW);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            case 9:
                DIO_voidSetPin(SEVSEG1_PINA, LOW);
                DIO_voidSetPin(SEVSEG1_PINB, LOW);
                DIO_voidSetPin(SEVSEG1_PINC, LOW);
                DIO_voidSetPin(SEVSEG1_PIND, LOW);
                DIO_voidSetPin(SEVSEG1_PINE, HIGH);
                DIO_voidSetPin(SEVSEG1_PINF, LOW);
                DIO_voidSetPin(SEVSEG1_PING, LOW);
                break;
            default:
                break;
            }
        } 
        #endif
    }
}

void SEVSEG_voidEnable(u8 segNum)
{
    if (segNum == SEVSEG0)
    {
        #if (SEVSEG0_CONN == COMMON_CATHOD)
        {
            DIO_voidSetPin(SEVSEG0_ENABLE,HIGH); /* Should be low, but Enable is Not-ted in my kit */
        }
        #else
        {
            DIO_voidSetPin(SEVSEG0_ENABLE, LOW); /* Should be HIGH, but Enable is Not-ted in my kit */
        }
        #endif
    }
    else
    {
        #if (SEVSEG1_CONN == COMMON_CATHOD) 
        {
            DIO_voidSetPin(SEVSEG1_ENABLE,HIGH); /* Should be low, but Enable is Not-ted in my kit */
        }
        #else
        {
            DIO_voidSetPin(SEVSEG1_ENABLE, LOW); /* Should be HIGH, but Enable is Not-ted in my kit */
        }
        #endif
    }
    
    
}
void SEVSEG_voidDisable(u8 segNum)
{
    if (segNum == SEVSEG0)
    {
        #if (SEVSEG0_CONN == COMMON_CATHOD)
        {
            DIO_voidSetPin(SEVSEG0_ENABLE, LOW); /* Should be HIGH, but Enable is Not-ted in my kit */
        }
        #else
        {
            DIO_voidSetPin(SEVSEG0_ENABLE, HIGH); /* Should be low, but Enable is Not-ted in my kit */
        }
        #endif
    }
    else
    {
        #if (SEVSEG1_CONN == COMMON_CATHOD)
        {
            DIO_voidSetPin(SEVSEG1_ENABLE, LOW);
        }
        #else
        {
            DIO_voidSetPin(SEVSEG1_ENABLE, HIGH);
        }
        #endif
    }
}
/* static void segment_localDisplay(u8 num) */
