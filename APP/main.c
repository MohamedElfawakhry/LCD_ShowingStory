/*
 * main.c
 *
 *  Created on: Mar 28, 2023
 *      Author: First
 */
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <util/delay.h>
#include "../MCAL/DIO/DIO_interface.h"
#include "../HAL/CLCD/CLCD_interface.h"
//0 hamoksha
// 1 hamoksha
// 2 hamoksha
//3 toto
//4&5 car
int main(void)
{
	u8 ExtraChar_Arr[8][8]={{0x08, 0x14, 0x08, 0x0F, 0x0A, 0x1E, 0x08, 0x14},
			{0x08, 0x14, 0x08, 0x09, 0x1F, 0x09, 0x08, 0x14},
			{0x1F, 0x1F, 0x17, 0x0F, 0x08, 0x1C, 0x08, 0x14},{0x00, 0x00, 0x08, 0x14, 0x0F, 0x0A, 0x0E, 0x18}
	,{0x00, 0x00, 0x0F, 0x18, 0x10, 0x1F, 0x0C, 0x0C},{0x00, 0x00, 0x1E, 0x03, 0x01, 0x1F, 0x06, 0x06}
	,{0x04,
			  0x0A,
			  0x15,
			  0x15,
			  0x04,
			  0x0E,
			  0x04,
			  0x0A}};
	CLCD_voidInit();
	CLCD_voidSetPosition(CLCD_ROW_1,CLCD_COL_1);
	CLCD_voidSendString((u8*)"HAMOKSHA Proposal");
	_delay_ms(500);
	while(1)
	{
		CLCD_voidSendExtraChar(ExtraChar_Arr[0],0 ,CLCD_ROW_2 , CLCD_COL_1);
		CLCD_voidSendExtraChar(ExtraChar_Arr[2],2,CLCD_ROW_2 , CLCD_COL_9);
		_delay_ms(500);
		CLCD_voidSendCommend(0x01);
		CLCD_voidSendExtraChar(ExtraChar_Arr[1],1 ,CLCD_ROW_2 , CLCD_COL_2);
		CLCD_voidSetPosition(CLCD_ROW_2, CLCD_COL_9);
		CLCD_voidSendData(2);
		_delay_ms(500);
		CLCD_voidSendCommend(0x01);
		for(u8 i = 3 ; i < 8 ;i+=2)
		{
			CLCD_voidSetPosition(CLCD_ROW_2 , i);
			CLCD_voidSendData(0);
			CLCD_voidSetPosition(CLCD_ROW_2, CLCD_COL_9);
			CLCD_voidSendData(2);
			_delay_ms(500);
			CLCD_voidSendCommend(0x01);
			CLCD_voidSetPosition(CLCD_ROW_2, CLCD_COL_9);
			CLCD_voidSendData(2);
			CLCD_voidSetPosition(CLCD_ROW_2 , i+1);

			CLCD_voidSendData(1);
			_delay_ms(500);
			CLCD_voidSendCommend(0x01);
		}
		CLCD_voidSetPosition(CLCD_ROW_2, CLCD_COL_9);
		CLCD_voidSendData(2);
		CLCD_voidSetPosition(CLCD_ROW_2 , CLCD_COL_8);
		CLCD_voidSendData(0);

		CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_4);
		CLCD_voidSendString("HELLO TOTO");
		_delay_ms(1000);
		CLCD_voidSendExtraChar(ExtraChar_Arr[3],3,CLCD_ROW_2 , CLCD_COL_8);
		CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_4);
		CLCD_voidSendString("marry me ?");
		_delay_ms(1000);
		CLCD_voidSendCommend(0x01);
		CLCD_voidSetPosition(CLCD_ROW_1 , CLCD_COL_9);
		CLCD_voidSendString("No");
		CLCD_voidSendExtraChar(ExtraChar_Arr[2],2,CLCD_ROW_2 , CLCD_COL_9);
		CLCD_voidSendExtraChar(ExtraChar_Arr[3],3 ,CLCD_ROW_2 , CLCD_COL_8);
		_delay_ms(1000);
		CLCD_voidSendCommend(0x01);
		CLCD_voidSendExtraChar(ExtraChar_Arr[2],2,CLCD_ROW_2 , CLCD_COL_9);
		CLCD_voidSendExtraChar(ExtraChar_Arr[0],0 ,CLCD_ROW_2 , CLCD_COL_8);

		CLCD_voidSendExtraChar(ExtraChar_Arr[4],4,CLCD_ROW_1 , CLCD_COL_15);
		CLCD_voidSendExtraChar(ExtraChar_Arr[5],5,CLCD_ROW_1 , CLCD_COL_16);
		_delay_ms(1000);
		CLCD_voidSendCommend(0x01);
		for(u8 i = 14 ; i > 9 ; i-=2)
		{
			CLCD_voidSendExtraChar(ExtraChar_Arr[2],2,CLCD_ROW_2 , CLCD_COL_9);
			CLCD_voidSendExtraChar(ExtraChar_Arr[0],0 ,CLCD_ROW_2 , CLCD_COL_8);
			CLCD_voidSendExtraChar(ExtraChar_Arr[4],4,CLCD_ROW_1 , i);
			CLCD_voidSendExtraChar(ExtraChar_Arr[5],5,CLCD_ROW_1 , i+1);
			_delay_ms(300);
			CLCD_voidSendCommend(0x01);
		}
		for(s8 i = 9 ; i >= 0 ; i-=2)
		{
			CLCD_voidSendExtraChar(ExtraChar_Arr[0],0 ,CLCD_ROW_2 , CLCD_COL_8);
			CLCD_voidSendExtraChar(ExtraChar_Arr[4],4,CLCD_ROW_1 , i);
			CLCD_voidSendExtraChar(ExtraChar_Arr[5],5,CLCD_ROW_1 , i+1);
			_delay_ms(300);
			CLCD_voidSendCommend(0x01);
		}

		for(u8 i = 0 ; i < 16 ; i++)
		{
			CLCD_voidSendString((u8*)"Hamoksha crying");
			CLCD_voidSendExtraChar(ExtraChar_Arr[6],6,CLCD_ROW_2, i);
			_delay_ms(50);
			CLCD_voidSendCommend(0x01);
		}
		for(s8 i = 15 ; i > 0 ; i--)
		{
			CLCD_voidSendString((u8*)"Hamoksha crying");
			CLCD_voidSendExtraChar(ExtraChar_Arr[6],6,CLCD_ROW_2, i);
			_delay_ms(50);
			CLCD_voidSendCommend(0x01);
		}
		CLCD_voidSendString((u8*)"End of story !!");
		_delay_ms(3000);





	}

	return 0 ;
}

