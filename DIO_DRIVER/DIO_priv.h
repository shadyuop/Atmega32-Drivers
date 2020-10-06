/*
 * DIO_priv.h
 *
 *  Created on: Oct 2, 2020
 *      Author: Shady
 */

#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

#define IN 0
#define OUT 1

volatile u8 * DIO_portSelector(u8 pinNum);
volatile u8 * DIO_pinSelector(u8 pinNum);

#endif /* DIO_PRIV_H_ */
