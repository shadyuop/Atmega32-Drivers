

#ifndef LCD_DRIVER_LCD_PRIV_H_
#define LCD_DRIVER_LCD_PRIV_H_

#define FOUR_BIT 1
#define EIGHT_BIT 0

static void LCD_help(u8 Data);

/* Implementing stdarg macros */
typedef char *va_list;
#define va_start(ap,parmn) (void)((ap) = (char*)(&(parmn) + 1))
#define va_end(ap) (void)((ap) = 0)
#define va_arg(ap, type) \
    (((type*)((ap) = ((ap) + sizeof(type))))[-1])

#endif /* LCD_DRIVER_LCD_PRIV_H_ */
