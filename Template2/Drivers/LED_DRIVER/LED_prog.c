/*
 * LED_prog.c
 *
 *  Created on: Oct 3, 2020
 *      Author: Shady
 */
#include "../../stdtypes.h"
#include "../../mathBit.h"

#include "../DIO_DRIVER/DIO_int.h"

#include "LED_priv.h"
#include "LED_cfg.h"
#include "LED_int.h"

void LED_voidLedOn(u8 led)
{
    switch (led)
    {
    case LED0:
#if (LED0_CONN)
    {
        DIO_voidSetPin(LED0_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED0_PIN, LOW);
    }
#endif
    break;
    case LED1:
#if (LED1_CONN)
    {
        DIO_voidSetPin(LED1_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED1_PIN, LOW);
    }
#endif
    break;
    case LED2:
#if (LED2_CONN)
    {
        DIO_voidSetPin(LED2_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED2_PIN, LOW);
    }
#endif
    break;
    case LED3:
#if (LED3_CONN)
    {
        DIO_voidSetPin(LED3_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED3_PIN, LOW);
    }
#endif
    break;
    case LED4:
#if (LED4_CONN)
    {
        DIO_voidSetPin(LED4_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED4_PIN, LOW);
    }
#endif
    break;
    case LED5:
#if (LED5_CONN)
    {
        DIO_voidSetPin(LED5_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED5_PIN, LOW);
    }
#endif
    break;
    case LED6:
#if (LED6_CONN)
    {
        DIO_voidSetPin(LED6_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED6_PIN, LOW);
    }
#endif
    break;
    case LED7:
#if (LED7_CONN)
    {
        DIO_voidSetPin(LED7_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED7_PIN, LOW);
    }
#endif
    break;
    case LED8:
#if (LED8_CONN)
    {
        DIO_voidSetPin(LED8_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED8_PIN, LOW);
    }
#endif
    break;
    case LED9:
#if (LED9_CONN)
    {
        DIO_voidSetPin(LED9_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED9_PIN, LOW);
    }
#endif
    break;
    case LED10:
#if (LED10_CONN)
    {
        DIO_voidSetPin(LED10_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED10_PIN, LOW);
    }
#endif
    break;
    case LED11:
#if (LED11_CONN)
    {
        DIO_voidSetPin(LED11_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED11_PIN, LOW);
    }
#endif
    break;
    case LED12:
#if (LED12_CONN)
    {
        DIO_voidSetPin(LED12_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED12_PIN, LOW);
    }
#endif
    break;
    case LED13:
#if (LED13_CONN)
    {
        DIO_voidSetPin(LED13_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED13_PIN, LOW);
    }
#endif
    break;
    case LED14:
#if (LED14_CONN)
    {
        DIO_voidSetPin(LED14_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED14_PIN, LOW);
    }
#endif
    break;
    case LED15:
#if (LED15_CONN)
    {
        DIO_voidSetPin(LED15_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED15_PIN, LOW);
    }
#endif
    break;
    case LED16:
#if (LED16_CONN)
    {
        DIO_voidSetPin(LED16_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED16_PIN, LOW);
    }
#endif
    break;
    case LED17:
#if (LED17_CONN)
    {
        DIO_voidSetPin(LED17_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED17_PIN, LOW);
    }
#endif
    break;
    case LED18:
#if (LED18_CONN)
    {
        DIO_voidSetPin(LED18_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED18_PIN, LOW);
    }
#endif
    break;
    case LED19:
#if (LED19_CONN)
    {
        DIO_voidSetPin(LED19_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED19_PIN, LOW);
    }
#endif
    break;
    case LED20:
#if (LED20_CONN)
    {
        DIO_voidSetPin(LED20_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED20_PIN, LOW);
    }
#endif
    break;
    case LED21:
#if (LED21_CONN)
    {
        DIO_voidSetPin(LED21_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED21_PIN, LOW);
    }
#endif
    break;
    case LED22:
#if (LED22_CONN)
    {
        DIO_voidSetPin(LED22_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED22_PIN, LOW);
    }
#endif
    break;
    case LED23:
#if (LED23_CONN)
    {
        DIO_voidSetPin(LED23_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED23_PIN, LOW);
    }
#endif
    break;
    case LED24:
#if (LED24_CONN)
    {
        DIO_voidSetPin(LED24_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED24_PIN, LOW);
    }
#endif
    break;
    case LED25:
#if (LED25_CONN)
    {
        DIO_voidSetPin(LED25_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED25_PIN, LOW);
    }
#endif
    break;
    case LED26:
#if (LED26_CONN)
    {
        DIO_voidSetPin(LED26_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED26_PIN, LOW);
    }
#endif
    break;
    case LED27:
#if (LED27_CONN)
    {
        DIO_voidSetPin(LED27_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED27_PIN, LOW);
    }
#endif
    break;
    case LED28:
#if (LED28_CONN)
    {
        DIO_voidSetPin(LED28_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED28_PIN, LOW);
    }
#endif
    break;
    case LED29:
#if (LED29_CONN)
    {
        DIO_voidSetPin(LED29_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED29_PIN, LOW);
    }
#endif
    break;
    case LED30:
#if (LED30_CONN)
    {
        DIO_voidSetPin(LED30_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED30_PIN, LOW);
    }
#endif
    break;
    case LED31:
#if (LED31_CONN)
    {
        DIO_voidSetPin(LED31_PIN, HIGH);
    }
#else
    {
        DIO_voidSetPin(LED31_PIN, LOW);
    }
#endif
    break;

    default:
        break;
    }
}
void LED_voidLedOff(u8 led)
{
    switch (led)
    {
    case LED0:
#if (LED0_CONN)
    {
        DIO_voidSetPin(LED0_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED0_PIN, HIGH);
    }
#endif
    break;
    case LED1:
#if (LED1_CONN)
    {
        DIO_voidSetPin(LED1_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED1_PIN, HIGH);
    }
#endif
    break;
    case LED2:
#if (LED2_CONN)
    {
        DIO_voidSetPin(LED2_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED2_PIN, HIGH);
    }
#endif
    break;
    case LED3:
#if (LED3_CONN)
    {
        DIO_voidSetPin(LED3_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED3_PIN, HIGH);
    }
#endif
    break;
    case LED4:
#if (LED4_CONN)
    {
        DIO_voidSetPin(LED4_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED4_PIN, HIGH);
    }
#endif
    break;
    case LED5:
#if (LED5_CONN)
    {
        DIO_voidSetPin(LED5_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED5_PIN, HIGH);
    }
#endif
    break;
    case LED6:
#if (LED6_CONN)
    {
        DIO_voidSetPin(LED6_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED6_PIN, HIGH);
    }
#endif
    break;
    case LED7:
#if (LED7_CONN)
    {
        DIO_voidSetPin(LED7_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED7_PIN, HIGH);
    }
#endif
    break;
    case LED8:
#if (LED8_CONN)
    {
        DIO_voidSetPin(LED8_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED8_PIN, HIGH);
    }
#endif
    break;
    case LED9:
#if (LED9_CONN)
    {
        DIO_voidSetPin(LED9_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED9_PIN, HIGH);
    }
#endif
    break;
    case LED10:
#if (LED10_CONN)
    {
        DIO_voidSetPin(LED10_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED10_PIN, HIGH);
    }
#endif
    break;
    case LED11:
#if (LED11_CONN)
    {
        DIO_voidSetPin(LED11_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED11_PIN, HIGH);
    }
#endif
    break;
    case LED12:
#if (LED12_CONN)
    {
        DIO_voidSetPin(LED12_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED12_PIN, HIGH);
    }
#endif
    break;
    case LED13:
#if (LED13_CONN)
    {
        DIO_voidSetPin(LED13_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED13_PIN, HIGH);
    }
#endif
    break;
    case LED14:
#if (LED14_CONN)
    {
        DIO_voidSetPin(LED14_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED14_PIN, HIGH);
    }
#endif
    break;
    case LED15:
#if (LED15_CONN)
    {
        DIO_voidSetPin(LED15_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED15_PIN, HIGH);
    }
#endif
    break;
    case LED16:
#if (LED16_CONN)
    {
        DIO_voidSetPin(LED16_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED16_PIN, HIGH);
    }
#endif
    break;
    case LED17:
#if (LED17_CONN)
    {
        DIO_voidSetPin(LED17_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED17_PIN, HIGH);
    }
#endif
    break;
    case LED18:
#if (LED18_CONN)
    {
        DIO_voidSetPin(LED18_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED18_PIN, HIGH);
    }
#endif
    break;
    case LED19:
#if (LED19_CONN)
    {
        DIO_voidSetPin(LED19_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED19_PIN, HIGH);
    }
#endif
    break;
    case LED20:
#if (LED20_CONN)
    {
        DIO_voidSetPin(LED20_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED20_PIN, HIGH);
    }
#endif
    break;
    case LED21:
#if (LED21_CONN)
    {
        DIO_voidSetPin(LED21_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED21_PIN, HIGH);
    }
#endif
    break;
    case LED22:
#if (LED22_CONN)
    {
        DIO_voidSetPin(LED22_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED22_PIN, HIGH);
    }
#endif
    break;
    case LED23:
#if (LED23_CONN)
    {
        DIO_voidSetPin(LED23_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED23_PIN, HIGH);
    }
#endif
    break;
    case LED24:
#if (LED24_CONN)
    {
        DIO_voidSetPin(LED24_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED24_PIN, HIGH);
    }
#endif
    break;
    case LED25:
#if (LED25_CONN)
    {
        DIO_voidSetPin(LED25_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED25_PIN, HIGH);
    }
#endif
    break;
    case LED26:
#if (LED26_CONN)
    {
        DIO_voidSetPin(LED26_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED26_PIN, HIGH);
    }
#endif
    break;
    case LED27:
#if (LED27_CONN)
    {
        DIO_voidSetPin(LED27_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED27_PIN, HIGH);
    }
#endif
    break;
    case LED28:
#if (LED28_CONN)
    {
        DIO_voidSetPin(LED28_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED28_PIN, HIGH);
    }
#endif
    break;
    case LED29:
#if (LED29_CONN)
    {
        DIO_voidSetPin(LED29_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED29_PIN, HIGH);
    }
#endif
    break;
    case LED30:
#if (LED30_CONN)
    {
        DIO_voidSetPin(LED30_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED30_PIN, HIGH);
    }
#endif
    break;
    case LED31:
#if (LED31_CONN)
    {
        DIO_voidSetPin(LED31_PIN, LOW);
    }
#else
    {
        DIO_voidSetPin(LED31_PIN, HIGH);
    }
#endif
    break;

    default:
        break;
    }
}
void LED_voidLedTog(u8 led)
{
    switch (led)
    {
    case LED0:
        DIO_voidToggPin(LED0_PIN);
        break;
    case LED1:
        DIO_voidToggPin(LED1_PIN);
        break;
    case LED2:
        DIO_voidToggPin(LED2_PIN);
        break;
    case LED3:
        DIO_voidToggPin(LED3_PIN);
        break;
    case LED4:
        DIO_voidToggPin(LED4_PIN);
        break;
    case LED5:
        DIO_voidToggPin(LED5_PIN);
        break;
    case LED6:
        DIO_voidToggPin(LED6_PIN);
        break;
    case LED7:
        DIO_voidToggPin(LED7_PIN);
        break;
    case LED8:
        DIO_voidToggPin(LED8_PIN);
        break;
    case LED9:
        DIO_voidToggPin(LED9_PIN);
        break;
    case LED10:
        DIO_voidToggPin(LED10_PIN);
        break;
    case LED11:
        DIO_voidToggPin(LED11_PIN);
        break;
    case LED12:
        DIO_voidToggPin(LED12_PIN);
        break;
    case LED13:
        DIO_voidToggPin(LED13_PIN);
        break;
    case LED14:
        DIO_voidToggPin(LED14_PIN);
        break;
    case LED15:
        DIO_voidToggPin(LED15_PIN);
        break;
    case LED16:
        DIO_voidToggPin(LED16_PIN);
        break;
    case LED17:
        DIO_voidToggPin(LED17_PIN);
        break;
    case LED18:
        DIO_voidToggPin(LED18_PIN);
        break;
    case LED19:
        DIO_voidToggPin(LED19_PIN);
        break;
    case LED20:
        DIO_voidToggPin(LED20_PIN);
        break;
    case LED21:
        DIO_voidToggPin(LED21_PIN);
        break;
    case LED22:
        DIO_voidToggPin(LED22_PIN);
        break;
    case LED23:
        DIO_voidToggPin(LED23_PIN);
        break;
    case LED24:
        DIO_voidToggPin(LED24_PIN);
        break;
    case LED25:
        DIO_voidToggPin(LED25_PIN);
        break;
    case LED26:
        DIO_voidToggPin(LED26_PIN);
        break;
    case LED27:
        DIO_voidToggPin(LED27_PIN);
        break;
    case LED28:
        DIO_voidToggPin(LED28_PIN);
        break;
    case LED29:
        DIO_voidToggPin(LED29_PIN);
        break;
    case LED30:
        DIO_voidToggPin(LED30_PIN);
        break;
    case LED31:
        DIO_voidToggPin(LED31_PIN);
        break;

    default:
        break;
    }
}
void LED_voidInitialize()
{
#if (LED0_INIT_STATE == ON)
    LED_voidLedOn(LED0);
#else
    LED_voidLedOff(LED0);
#endif

#if (LED1_INIT_STATE == ON)
    LED_voidLedOn(LED1);
#else
    LED_voidLedOff(LED1);
#endif

#if (LED2_INIT_STATE == ON)
    LED_voidLedOn(LED2);
#else
    LED_voidLedOff(LED2);
#endif

#if (LED3_INIT_STATE == ON)
    LED_voidLedOn(LED3);
#else
    LED_voidLedOff(LED3);
#endif

#if (LED4_INIT_STATE == ON)
    LED_voidLedOn(LED4);
#else
    LED_voidLedOff(LED4);
#endif
}
