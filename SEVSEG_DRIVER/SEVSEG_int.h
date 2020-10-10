/*
 * SEVSEG_int.h
 *
 *  Created on: Oct 9, 2020
 *      Author: Shady
 */
#include "../stdtypes.h"

#ifndef SEVSEG_DRIVER_SEVSEG_INT_H_
#define SEVSEG_DRIVER_SEVSEG_INT_H_

void SEVSEG_voidDisplay(u8 digit, u8 segNum);
void SEVSEG_voidInitialize(void);
void SEVSEG_voidEnable(u8 segNum);
void SEVSEG_voidDisable(u8 segNum);

#define SEVSEG0 0
#define SEVSEG1 1
#endif /* SEVSEG_DRIVER_SEVSEG_INT_H_ */
