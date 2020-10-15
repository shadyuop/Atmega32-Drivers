/*
 * DIO_priv.h
 *
 *  Created on: Oct 9, 2020
 *      Author: Shady
 */

#ifndef DIO_DRIVER_DIO_PRIV_H_
#define DIO_DRIVER_DIO_PRIV_H_

#define IN 0
#define OUT 1

volatile u8 * DIO_portSelector(u8 pinNum);
volatile u8 * DIO_pinSelector(u8 pinNum);


#endif /* DIO_DRIVER_DIO_PRIV_H_ */
