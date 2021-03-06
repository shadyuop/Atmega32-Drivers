/*
 * LED8X8_cfg.h
 *
 *  Created on: Oct 11, 2020
 *      Author: Shady
 */
/*************************/
/* MY CONFIGURATION
 * ROWS PINS ON-HIGH
 * 0	3 PA3
 * 1	6 PA6
 * 2	2 PA2
 * 3	7 PA7
 * 4	11 PC3
 * 5	0 PA0
 * 6	13 PC5
 * 7	8 PC0
 *
 * COLS PINS ON-LOW
 * 0	15 PC7
 * 1	14 PC6
 * 2	10 PC2
 * 3	1 PA1
 * 4	9 PC1
 * 5	4 PA4
 * 6	5 PA5
 * 7	12 PC4
 */

#ifndef LED8X8_DRIVER_LED8X8_CFG_H_
#define LED8X8_DRIVER_LED8X8_CFG_H_

#define LED8X8_ROWS_CONN FORWORD
#define LED8X8_COLS_CONN REVERSE

#define LED8X8_R0_PIN PIN3
#define LED8X8_R0_INIT_STATE OFF

#define LED8X8_R1_PIN PIN6
#define LED8X8_R1_INIT_STATE OFF

#define LED8X8_R2_PIN PIN2
#define LED8X8_R2_INIT_STATE OFF

#define LED8X8_R3_PIN PIN7
#define LED8X8_R3_INIT_STATE OFF

#define LED8X8_R4_PIN PIN19
#define LED8X8_R4_INIT_STATE OFF

#define LED8X8_R5_PIN PIN0
#define LED8X8_R5_INIT_STATE OFF

#define LED8X8_R6_PIN PIN21
#define LED8X8_R6_INIT_STATE OFF

#define LED8X8_R7_PIN PIN16
#define LED8X8_R7_INIT_STATE OFF

#define LED8X8_C0_PIN PIN23
#define LED8X8_C0_INIT_STATE OFF

#define LED8X8_C1_PIN PIN22
#define LED8X8_C1_INIT_STATE OFF

#define LED8X8_C2_PIN PIN18
#define LED8X8_C2_INIT_STATE OFF

#define LED8X8_C3_PIN PIN1
#define LED8X8_C3_INIT_STATE OFF

#define LED8X8_C4_PIN PIN17
#define LED8X8_C4_INIT_STATE OFF

#define LED8X8_C5_PIN PIN4
#define LED8X8_C5_INIT_STATE OFF

#define LED8X8_C6_PIN PIN5
#define LED8X8_C6_INIT_STATE OFF

#define LED8X8_C7_PIN PIN20
#define LED8X8_C7_INIT_STATE OFF


#endif /* LED8X8_DRIVER_LED8X8_CFG_H_ */
