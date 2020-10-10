/*
 * LCD_int.h
 *
 *  Created on: Oct 10, 2020
 *      Author: Shady
 */


#ifndef LCD_DRIVER_LCD_INT_H_
#define LCD_DRIVER_LCD_INT_H_
#include "../stdtypes.h"

void LCD_voidInitialize();
void LCD_voidWriteData(u8 Data);
void LCD_voidWriteCmd(u8 Data);
void LCD_voidWriteString(s8 * Str);

void LCD_voidClrScreen(u8 Data);

void LCD_voidGoToXY(u8 x, u8 y);
// void LCD_voidPrintf(/////////////); multi argument functions


#define CLR_SCREEN
#endif /* LCD_DRIVER_LCD_INT_H_ */
