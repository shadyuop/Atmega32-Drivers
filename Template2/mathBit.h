#ifndef MATH_BIT_H_
#define MATH_BIT_H_
#define SET_BIT(number, bitNumber) (u8)((number) |= (1 << (bitNumber)))
#define CLR_BIT(number, bitNumber) (u8)((number) &= ~(1 << (bitNumber)))
#define GET_BIT(number, bitNumber) (u8)((number) >> (bitNumber) & 1)
#define TOG_BIT(number, bitNumber) (u8)((number) ^= (1 << (bitNumber)))
#define SET_FIRST_NIBBLE(number) (u8)((number) |=  15)
#define CLR_FIRST_NIBBLE(number) (u8)((number) &= ~(0xf))
#define SET_SECOND_NIBBLE(number) (u8)((number) |=  0xf0)
#define CLR_SECOND_NIBBLE(number) (u8)((number) &= ~(0xf0))

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0) conHelp(b7,b6,b5,b4,b3,b2,b1,b0)
#define conHelp(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif
