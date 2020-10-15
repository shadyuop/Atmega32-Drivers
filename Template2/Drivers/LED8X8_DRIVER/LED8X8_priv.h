/*
 * LED8X8_priv.h
 *
 *  Created on: Oct 11, 2020
 *      Author: Shady
 */

#ifndef LED8X8_DRIVER_LED8X8_PRIV_H_
#define LED8X8_DRIVER_LED8X8_PRIV_H_

#define OFF 0
#define ON 1

#define FORWORD 1
#define REVERSE 0

static u8 LED8X8_u8LocalRowPinSelector(u8 rowNum);
static u8 LED8X8_u8LocalColPinSelector(u8 colNum);
#endif /* LED8X8_DRIVER_LED8X8_PRIV_H_ */
