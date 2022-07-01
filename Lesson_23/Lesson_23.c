#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#define NUMBER_OF_DAYS 300  // estimated

int main()
{
	FILE* black_board;
	const char* file_name = "./lesson_info.txt";

	black_board = fopen(file_name, "w");
	if (black_board == NULL)
	{
		printf("No file");
		return -1;
	}

	const char* days[7] = { "Pazar", "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi" };
	int day = 4, month = 5, year = 2022; // 1st lesson date: 04.05.2022
	int lesson_counter = 1;
	for (int i = 1; i < NUMBER_OF_DAYS; i++)
	{
		int mod_of_day = i % 7;
		if (mod_of_day == 1 || mod_of_day == 2 || mod_of_day == 5)
		{
			fprintf(black_board, "C Programlama\n");
			fprintf(black_board, "%d. Ders\n", lesson_counter++);
			const char* day_found = days[(i + 2) % 7];
			fprintf(black_board, "%02d.%02d.%d %s\n", day, month, year, day_found);
			fprintf(black_board, "Saban Kocal\n\n");
			if (day_found == "Pazar")
			{
				fprintf(black_board, "(Ders 09:00 da baslayacaktir)\n\n");
				fprintf(black_board, "****************************************************\n\n");
			}
			else
			{
				fprintf(black_board, "(Ders 20:30 da baslayacaktir)\n\n");
				fprintf(black_board, "****************************************************\n\n");

			}
		}

		if (month <= 7)
		{
			if (month == 2 && day == 28)
			{
				month++;
				day = 1;
			}
			else if (month % 2 == 1 && day == 31)
			{
				month++;
				day = 1;
			}
			else if (month % 2 == 0 && day == 30)
			{
				month++;
				day = 1;
			}
			else
			{
				day++;
			}
		}
		else
		{
			if (month == 12 && day == 31)
			{
				year++;
			}
			
			if (month % 2 == 0 && day == 31)
			{
				month++;
				if (month == 13) month = 1;
				day = 1;
			}
			else if (month % 2 == 1 && day == 30)
			{
				month++;
				day = 1;
			}
			else
			{
				day++;
			}
		}
		//day++;
	}

	fclose(black_board);
}
/****************************/
#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
	int size = 5;
	/*printf("How many numbers should your array hold ?");
	scanf_s("%d", &size);
	while (size > 10)
	{
		printf("Array cannot hold more than 10 numbers. Try again\n");
		scanf_s("%d", &size);
	}*/
	
	int arr[ARRAY_SIZE] = {1,2,3,4,2};
	/*for (int i = 0; i < size; i++)
	{
		printf("Enter %d. value : \n", i + 1);
		scanf_s("%d", &arr[i]);
	}*/

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j] && i!=j)
			{
				break;
			}
			
			if (j == size - 1) {
				printf("%d\t", arr[i]);
			}
		}
	}
}
