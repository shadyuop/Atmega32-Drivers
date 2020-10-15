/*
 * LED8X8_int.h
 *
 *  Created on: Oct 11, 2020
 *      Author: Shady
 */

#ifndef LED8X8_DRIVER_LED8X8_INT_H_
#define LED8X8_DRIVER_LED8X8_INT_H_
#include "../../stdtypes.h"
#include "../../mathBit.h"

void LED8X8_voidInitialzie(void);

void LED8X8_voidRowOn(u8 rowNum);
void LED8X8_voidRowOff(u8 rowNum);
void LED8X8_voidRowsOff(void);
void LED8X8_voidRowsOn(void);

void LED8X8_voidColOn(u8 colNum);
void LED8X8_voidColOff(u8 colNum);
void LED8X8_voidColsOff(void);
void LED8X8_voidColsOn(void);

void LED8X8_voidAllOn(void);
void LED8X8_voidAllOff(void);

void LED8X8_voidPrintMatrix64(u8 * field);
void LED8X8_voidPrintMatrix8(u8 *field);

/***********************************/
/* ROWS */
#define LED8X8_R0 0
#define LED8X8_R1 1
#define LED8X8_R2 2
#define LED8X8_R3 3
#define LED8X8_R4 4
#define LED8X8_R5 5
#define LED8X8_R6 6
#define LED8X8_R7 7

/* COLUMNS */
#define LED8X8_C0 0
#define LED8X8_C1 1
#define LED8X8_C2 2
#define LED8X8_C3 3
#define LED8X8_C4 4
#define LED8X8_C5 5
#define LED8X8_C6 6
#define LED8X8_C7 7


#endif /* LED8X8_DRIVER_LED8X8_INT_H_ */
