/*
 * SWITCH_prog.c
 *
 *  Created on: Oct 4, 2020
 *      Author: Shady
 */

#include "../stdtypes.h"
#include "../mathBit.h"

#include "../DIO_int.h"

#include "SWITCH_cfg.h"
#include "SWITCH_priv.h"
#include "SWITCH_int.h"

u8 SWITCH_u8IsPressed(u8 switchNum)
{
    u8 isPressed;
    switch (switchNum)
    {
    case SWITCH0:
#if (SWITCH0_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH0_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH0_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH1:
#if (SWITCH1_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH1_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH1_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH2:
#if (SWITCH2_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH2_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH2_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH3:
#if (SWITCH3_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH3_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH3_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH4:
#if (SWITCH4_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH4_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH4_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH5:
#if (SWITCH5_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH5_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH5_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH6:
#if (SWITCH6_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH6_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH6_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH7:
#if (SWITCH7_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH7_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH7_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH8:
#if (SWITCH8_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH8_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH8_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH9:
#if (SWITCH9_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH9_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH9_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH10:
#if (SWITCH10_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH10_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH10_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH11:
#if (SWITCH11_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH11_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH11_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH12:
#if (SWITCH12_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH12_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH12_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH13:
#if (SWITCH13_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH13_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH13_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH14:
#if (SWITCH14_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH14_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH14_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH15:
#if (SWITCH15_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH15_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH15_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH16:
#if (SWITCH16_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH16_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH16_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH17:
#if (SWITCH17_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH17_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH17_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH18:
#if (SWITCH18_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH18_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH18_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH19:
#if (SWITCH19_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH19_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH19_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH20:
#if (SWITCH20_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH20_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH20_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH21:
#if (SWITCH21_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH21_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH21_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH22:
#if (SWITCH22_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH22_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH22_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH23:
#if (SWITCH23_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH23_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH23_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH24:
#if (SWITCH24_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH24_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH24_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH25:
#if (SWITCH25_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH25_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH25_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH26:
#if (SWITCH26_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH26_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH26_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH27:
#if (SWITCH27_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH27_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH27_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH28:
#if (SWITCH28_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH28_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH28_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH29:
#if (SWITCH29_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH29_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH29_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH30:
#if (SWITCH30_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH30_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH30_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;
    case SWITCH31:
#if (SWITCH31_CONN == PULL_UP)
    {
        if (DIO_u8GetPin(SWITCH31_PIN))
            isPressed = NOT_PRESSED;
        else
            isPressed = PRESSED;
    }
#else
    {
        if (DIO_u8GetPin(SWITCH31_PIN))
            isPressed = PRESSED;
        else
            isPressed = NOT_PRESSED;
    }
#endif
    break;

    default:
        break;
    }
    return isPressed;
}
