/*******************************************************************************
*
* Copyright (C) 2019 TUSUR, FB, Zaytsev Mikhail
*
* File              : main.cpp
* Compiler          : Keil
* Version           : 1.0
* Created File      : 26.02.2019
* Last modified     : 11.03.2019
*
* Support mail      : mihail25.98@gmail.com
* Target MCU        : MCU: Milandr 1986BE9x
*
* Description       : Split string
*
********************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[129];	//??????? ??????
	const int N = 129;
	char str_out[129][129];

	int k = 43;			//?????????? ???????? ? ????? ??????
	int count_str = 0;	//??????? ???????? ?????

	while (1)
	{
		printf("Enter message:\n");
		//scanf("%s", str);                //???? ?????????
		printf("Your msg: %s\n", str);   //????? ????????? ?? ?????

		for (int i = 0; i < sizeof(str); i = i + k)
		{
			for (int j = 0; j < k; j++)
			{
				str_out[count_str][j] = str[i+j];
			}
			count_str++;
		}

		printf("Your msg: ");
		for (int i = 0; i < count_str; i++)
		{
			for (int j = 0; j < k; j++)
			{
				printf("%c", str_out[i][j]);
			}
			printf("\n");
		}

	}
	return 0;
}
