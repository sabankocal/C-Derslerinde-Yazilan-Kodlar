#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <windows.h>

int main()
{
	FILE* file_datei;
	const char* file_name = "./emre_Bey.csv";

	unsigned short counter = 0, reverse_counter = USHRT_MAX;
	unsigned short counter_saw = 0, reverse_counter_saw = USHRT_MAX;

	file_datei = fopen(file_name, "a");
	if (file_datei == NULL)
	{
		printf("File could not be opened!!!\n Program will exit!!!");
		return -1;
	}

	fprintf(file_datei, "COUNTER;COUNTER_SAW;REVERSE_COUNTER;REVERSE_COUNTER_SAW\n");

	while (1)
	{
		counter++;
		reverse_counter--;

		if (counter % 100 == 0)
		{
			counter_saw++;
			reverse_counter_saw = USHRT_MAX - counter_saw;
		}

		printf("%d;%d;%d;%d\n", counter, counter_saw, reverse_counter, reverse_counter_saw);
		fprintf(file_datei, "%d;%d;%d;%d\n", counter, counter_saw, reverse_counter, reverse_counter_saw);

		if (counter % 500 == 0)
			Sleep(100); // Sleep in milliseconds
	}

	fclose(file_name);
}



/*********************	NEXT EXAMPLE ************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <windows.h>

int main()
{
	char answer;

	do
	{
		printf("\nDo you want to enter more numbers? (Yy/Nn): ");
		(void)getchar();
		(void)scanf("%d", &answer);
	} while (answer == 'Y' || answer == 'y');
}

///////////////////////////









