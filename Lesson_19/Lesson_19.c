#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mod_calculator(int m1, int number);

int main(void)
{
	for (int i = 1; i <= 50; i++)
	{
		if (mod_calculator(3, i) || mod_calculator(5, i))
			printf("%d\t", i);
	}
	return 0;
}

int mod_calculator(int m1, int number)
{
	return (number % m1 == 0) ? 1 : 0;
	
	/*
	if (number % m1 == 0)
	{
		return 1;
	}

	return 0;
	*/
}

/******************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	printf("Enter an odd number: ");
	(void)scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("Incorrect entry!!!Please enter an odd number.");
		return -1;
	}

	int result = 1;
	printf("Product = ");
	for (int i = 1; i <= num; i+=2)
	{
		result *= i;
		if (i == num) break;
		printf("%d * ", i);
	}
	printf("%d\nResult: %d", num, result);

	return 0;
}

/******************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int int_num;
	
	printf("How many integers should be added: ");
	(void)scanf("%d", &int_num);
	
	int num, sum = 0;
	for (int i = 0; i < int_num; i++)
	{
		printf("Enter the %dst number: ", i + 1);
		(void)scanf("%d", &num);
		sum += num;
	}
	printf("\nTotal: %d", sum);
	
	return 0;
}

/******************************/
/*
*
***
*****
*******
*********
***********
*************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LINE_COUNT 7

int main(void) {
	int rows = LINE_COUNT;

	int columns = (2 * rows) - 1;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (j < (2 * i) - 1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
/******************************/
/*
*
***
*****
*******
*********
***********
*************
*/

#include<stdio.h>
#define LINE_COUNT 5

int main()
{
	for (int i = 0; i < (2*LINE_COUNT-1); i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}

			printf("\n");
		}
	}

	return 0;
}
/******************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LINE 7

int main()
{
	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < (i * 2 + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
/************************************/
//1 502 503 4 5 6 507 508 9 10 11 512 513 14 15 16 517 518 19 20

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int nums = 20;

	for (int i = 1; i <= nums; i++)
	{
		if (i % 5 == 2 || i % 5 == 3)
		{
			printf("%d\t", i + 500);
		}
		else
		{
			printf("%d\t", i);
		}
	}
	return 0;
}
/************************************/
/*
....====
....====
....====
....====
====....
====....
====....
====....
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 8;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (((j < 4) && (i < 4)) || ((i >= 4) && (j >= 4)))
			{
				printf(".");
			}
			else
			{
				printf("=");
			}
		}
		printf("\n");
	}
	return 0;
}
