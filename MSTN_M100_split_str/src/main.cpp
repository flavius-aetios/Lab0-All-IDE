/*******************************************************************************
*
* Copyright (C) 2019 TUSUR, FB, Zaytsev Mikhail
*
* File              : main.cpp
* Compiler          : NetBeans 8.2
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
#include "main.h"
#include "mstn_clk.h"

int main()
{
	char str[129];	//Входная строка
	//const int N = 129;
	char str_out[129][129];

	int k = 43;			//Количество символов в одной строке
	int count_str;	//Счётчик разбитых строк

	while (1)
	{       printf("\n");
                Delay(5000);
                printf("\n");
		printf("Enter message:\n");
                Delay(1000);
		scanf("%s", str);                //Ввод сообщения
                Delay(1000);
		printf("Your str: %s\n", str);   //Вывод этого сообщения на экран
                
                count_str = 0;
		for (uint i = 0; i < sizeof(str); i = i + k)
		{
			for (int j = 0; j < k; j++)
			{
				str_out[count_str][j] = str[i+j];
			}
			count_str++;
		}

		
		for (int i = 0; i < count_str; i++)
		{
                        printf("%i. ", i+1);
			for (int j = 0; j < k; j++)
			{
				/*if (j > 1 && str_out[i][j] != str_out[i][j - 1])
				{
					break;
				}*/
				printf("%c", str_out[i][j]);
			}
			printf("\n");
		}
                

	}
	return EXIT_SUCCESS;
}
