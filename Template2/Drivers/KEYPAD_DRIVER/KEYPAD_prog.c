/*
 * KEYPAD_prog.c
 *
 *  Created on: Oct 13, 2020
 *      Author: Shady
 */


#include "../../stdtypes.h"
#include "../../mathBit.h"

#include "../DIO_DRIVER/DIO_int.h"

#include "KEYPAD_priv.h"
#include "KEYPAD_cfg.h"
#include "KEYPAD_int.h"

void KEYPAD_voidInitialize() /* Switch off all output */
{
    #if (KEYPAD1_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD1_OUT_PIN, HIGH);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD1_OUT_PIN, LOW);
    }
    #endif
    #if (KEYPAD2_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD2_OUT_PIN, HIGH);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD2_OUT_PIN, LOW);
    }
    #endif
    #if (KEYPAD3_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD3_OUT_PIN, HIGH);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD3_OUT_PIN, LOW);
    }
    #endif
    #if (KEYPAD4_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD4_OUT_PIN, HIGH);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD4_OUT_PIN, LOW);
    }
    #endif
}
u8 KEYPAD_u8IsPressed(u8 keyNum)
{
    KEYPAD_voidInitialize();
    u8 pressedState = NOT_PRESSED;
    u8 out = (keyNum/4) + 1;
    u8 in = (keyNum%4) +1;
    switch (out)
    {
    case 1:
    {
        #if (KEYPAD1_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD1_OUT_PIN, LOW);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD1_OUT_PIN, HIGH);
    }
    #endif
    }
        break;
    case 2:
    {
        #if (KEYPAD2_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD2_OUT_PIN, LOW);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD2_OUT_PIN, HIGH);
    }
    #endif
    }
        break;
    case 3:
    {
        #if (KEYPAD3_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD3_OUT_PIN, LOW);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD3_OUT_PIN, HIGH);
    }
    #endif
    }
        break;
    case 4:
    {
        #if (KEYPAD4_CONN == PULL_UP)
    {
        DIO_voidSetPin(KEYPAD4_OUT_PIN, LOW);
    }
    #else
    {
        DIO_voidSetPin(KEYPAD4_OUT_PIN, HIGH);
    }
    #endif
    }
        break;
    
    default:
        break;
    }

    switch (in)
    {
    case 1:
    {
        #if (KEYPAD1_CONN == PULL_UP)
        {
            if (DIO_u8GetPin(KEYPAD1_IN_PIN) == LOW)
            {
                pressedState = PRESSED;
            }
        }
        #else
        {
            if (DIO_u8GetPin(KEYPAD1_IN_PIN) == HIGH)
            {
                pressedState = PRESSED;
            }
        }
        #endif
    }
        break;

    case 2:
    {
        #if (KEYPAD2_CONN == PULL_UP)
        {
            if (DIO_u8GetPin(KEYPAD2_IN_PIN) == LOW)
            {
                pressedState = PRESSED;
            }
        }
        #else
        {
            if (DIO_u8GetPin(KEYPAD2_IN_PIN) == HIGH)
            {
                pressedState = PRESSED;
            }
        }
        #endif
    }
        break;
    
    case 3:
    {
        #if (KEYPAD3_CONN == PULL_UP)
        {
            if (DIO_u8GetPin(KEYPAD3_IN_PIN) == LOW)
            {
                pressedState = PRESSED;
            }
        }
        #else
        {
            if (DIO_u8GetPin(KEYPAD3_IN_PIN) == HIGH)
            {
                pressedState = PRESSED;
            }
        }
        #endif
    }
        break;

    case 4:
    {
        #if (KEYPAD4_CONN == PULL_UP)
        {
            if (DIO_u8GetPin(KEYPAD4_IN_PIN) == LOW)
            {
                pressedState = PRESSED;
            }
        }
        #else
        {
            if (DIO_u8GetPin(KEYPAD4_IN_PIN) == HIGH)
            {
                pressedState = PRESSED;
            }
        }
        #endif
    }
        break;
    
    default:
        break;
    }
    KEYPAD_voidInitialize();
    return pressedState;
}