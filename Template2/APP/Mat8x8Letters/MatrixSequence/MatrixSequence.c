/*
 * MatrixSequence.c
 *
 *  Created on: Oct 11, 2020
 *      Author: Shady
 */
#include "./../../../stdtypes.h"
#include "./../Mat8x8Letters.h"
void MatrixSequence_ILoveMarlin(u8 field[8][8], u8 selector)
{
    switch (selector % 8)
    {
    case 0:
        Mat8x8Letters_voidLetter(field, 'M');
        break;
    case 1:
        Mat8x8Letters_voidLetter(field, 'A');
        break;
    case 2:
        Mat8x8Letters_voidLetter(field, 'R');
        break;
    case 3:
        Mat8x8Letters_voidLetter(field, 'L');
        break;
    case 4:
        Mat8x8Letters_voidLetter(field, 'I');
        break;
    case 5:
        Mat8x8Letters_voidLetter(field, 'N');
        break;
    case 6:
        Mat8x8Letters_voidLetter(field, 'I');
        break;
    case 7:
        Mat8x8Letters_voidLetter(field, '*');
        break;

    default:
        break;
    }
}
