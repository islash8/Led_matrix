/*
 * main.c
 *
 *  Created on: Feb 12, 2019
 *      Author: islash8
 */

#include "STD_Types.h"

#include "Lib_Delay.h"
#include "DIO_Interface.h"


#include "LEDMAT_Interface.h"

void main (void)
{
	DIO_vInit();
	u8 local_myPattern[5][8]=
	{
			{0, 0, 0b01100000, 0b10011111, 0b10011110, 0b01101011, 0b00000111, 0b00000110},
			{0, 0, 0b01100000, 0b10011111, 0b10011110, 0b01101011, 0b00001101, 0b00001100},
			{0, 0, 0b01100000, 0b10011111, 0b10011110, 0b01101011, 0b00011001, 0b00011000},
			{0, 0, 0b01100000, 0b10011111, 0b10011110, 0b01101011, 0b00001101, 0b00001100},
			{0, 0, 0b01100000, 0b10011111, 0b10011110, 0b01101011, 0b00000111, 0b00000110},
	};

	u8 i= 0;
	u8 j= 0;
	u8 k=0;

			while(1)
			{
				for(j=0; j < 5; j++)
				{
						i=0;
						while(i < 100)
						{
							LEDMAT_SetPattern(local_myPattern[j],LEDMAT_GREEN);
							i++;
						}
				}


			}
}
