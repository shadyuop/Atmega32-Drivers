/*
 * KEYPAD_int.h
 *
 *  Created on: Oct 13, 2020
 *      Author: Shady
 */

#ifndef DRIVERS_KEYPAD_DRIVER_KEYPAD_INT_H_
#define DRIVERS_KEYPAD_DRIVER_KEYPAD_INT_H_
#include "../../stdtypes.h"
// #include "../../mathBit.h"

void KEYPAD_voidInitialize();
u8 KEYPAD_u8IsPressed(u8 keyNum);

/* Pressed */
#define PRESSED 1
#define NOT_PRESSED 0


/* Define Keypads */
#define KEYPAD_SWITCH1 0
#define KEYPAD_SWITCH2 1
#define KEYPAD_SWITCH3 2
#define KEYPAD_SWITCH4 3
#define KEYPAD_SWITCH5 4
#define KEYPAD_SWITCH6 5
#define KEYPAD_SWITCH7 6
#define KEYPAD_SWITCH8 7
#define KEYPAD_SWITCH9 8
#define KEYPAD_SWITCH10 9
#define KEYPAD_SWITCH11 10
#define KEYPAD_SWITCH12 11
#define KEYPAD_SWITCH13 12
#define KEYPAD_SWITCH14 13
#define KEYPAD_SWITCH15 14
#define KEYPAD_SWITCH16 15

#define KEYPAD_1 0
#define KEYPAD_2 1
#define KEYPAD_3 2
#define KEYPAD_A 3
#define KEYPAD_4 4
#define KEYPAD_5 5
#define KEYPAD_6 6
#define KEYPAD_B 7
#define KEYPAD_7 8
#define KEYPAD_8 9
#define KEYPAD_9 10
#define KEYPAD_C 11
#define KEYPAD_STAR 12
#define KEYPAD_0 13
#define KEYPAD_HASH 14
#define KEYPAD_D 15


#endif /* DRIVERS_KEYPAD_DRIVER_KEYPAD_INT_H_ */
