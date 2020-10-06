#include "stdtypes.h"
#include "mathBit.h"

#include <avr/io.h>
// #include <avr/iom16.h>


#include "DIO_priv.h"
#include "DIO_cfg.h"
#include "DIO_int.h"

volatile u8 * DIO_portSelector(u8 pinNum)
{
    u8 selector = pinNum / 8;
    volatile u8 * port;
    switch (selector)
    {
    case 1:
        port =  &PORTB;
        break;
    case 2:
        port =  &PORTC;
        break;
    case 3:
        port =  &PORTD;
        break;
    
    default:
        port =  &PORTA;
        break;
    }
    return port;
}

volatile u8 * DIO_pinSelector(u8 pinNum)
{
    u8 selector = pinNum / 8;
    volatile u8 * pin;
    switch (selector)
    {
    case 1:
        pin =  &PINB;
        break;
    case 2:
        pin =  &PINC;
        break;
    case 3:
        pin =  &PIND;
        break;
    
    default:
        pin =  &PINA;
        break;
    }
    return pin;
}

void DIO_voidSetPin(u8 pinNum, u8 value)
{
    volatile u8 * port = DIO_portSelector(pinNum);
    if (value == HIGH)
        SET_BIT(*port, pinNum % 8);
    else
        CLR_BIT(*port, pinNum % 8);
}

u8 DIO_u8GetPin(u8 pinNum)
{
    volatile u8 * pin = DIO_pinSelector(pinNum);
    return GET_BIT(*pin,pinNum%8);
}

void DIO_voidToggPin(u8 pinNum)
{
    volatile u8 * port = DIO_portSelector(pinNum);
    TOG_BIT(*port,pinNum%8);
}

void DIO_voidInitialize()
{
    DDRA = CONC(PIN7_DIR, PIN6_DIR, PIN5_DIR, PIN4_DIR, PIN3_DIR, PIN2_DIR, PIN1_DIR, PIN0_DIR);
    DDRB = CONC(PIN15_DIR, PIN14_DIR, PIN13_DIR, PIN12_DIR, PIN11_DIR, PIN10_DIR, PIN9_DIR, PIN8_DIR);
    DDRC = CONC(PIN23_DIR, PIN22_DIR, PIN21_DIR, PIN20_DIR, PIN19_DIR, PIN18_DIR, PIN17_DIR, PIN16_DIR);
    DDRD = CONC(PIN31_DIR, PIN30_DIR, PIN29_DIR, PIN28_DIR, PIN27_DIR, PIN26_DIR, PIN25_DIR, PIN24_DIR);
}
