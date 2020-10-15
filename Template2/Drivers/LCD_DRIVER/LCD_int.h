/*
 * LCD_int.h
 *
 *  Created on: Oct 10, 2020
 *      Author: Shady
 */


#ifndef LCD_DRIVER_LCD_INT_H_
#define LCD_DRIVER_LCD_INT_H_
#include "../../stdtypes.h"

void LCD_voidInitialize();
void LCD_voidWriteData(u8 Data);
void LCD_voidWriteCmd(u8 Data);
void LCD_voidWriteString(s8 * Str);
void LCD_voidInsertTab();
void LCD_voidWriteIntegerDec(s32 number);
void LCD_voidWriteIntegerDecFLored(s32 number, s32 flor);
void LCD_voidWriteIntegerHex(s32 number);

void LCD_voidClrScreen();

void LCD_voidGoToXY(u8 x, u8 y);
void LCD_voidPrintf(char * formated, ...);

/********* COMMANDS ***************/
#define CLR_SCREEN 0x01
#define SHIFT_CURSOR_RIGHT 0X06
#define SHIFT_CONTENT_RIGHT 0X07
#define SHIFT_CURSOR_LEFT 0X04
#define SHIFT_CONTENT_LEFT 0X05
#define SHOW_CURSOR 0X0E
#define HIDE_CURSOR 0X0C
#define HIDE_DISPLAY 0X08
#define CURSOR_TO_LINE2 0XC0

#endif /* LCD_DRIVER_LCD_INT_H_ */


