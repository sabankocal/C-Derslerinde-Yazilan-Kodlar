*****************************************************
//Lesson-16:

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int x, y;
	printf("Lutfen iki deger giriniz:\n");
	(void)scanf("%d%d", &x, &y);
	printf("%d * %d + %d * %d = %d\n", x, x, y, y, (x * x + y * y));
}

**********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <windows.h>

int main()
{
	FILE* file;
	const char* file_name = "./drawing.csv";
	unsigned short ramp_counter = 0, reverse_ramp_counter = USHRT_MAX - ramp_counter;
	unsigned short ramp_counter_saw = 0, reverse_ramp_counter_saw = 0;

	file = fopen(file_name, "w");
	if (file == NULL)
	{
		printf("File could not be opened!\nProgram will be shutdown");
		return -1;
	}

	fprintf(file, "Ramp_Counter;Ramp_Counter_Saw;Reverse_Ramp_Counter;Reverse_Ramp_Counter_Saw\n");
	fclose(file);

	while (1)
	{
		file = fopen(file_name, "a");
		if (file == NULL)
		{
			printf("File could not be opened!\nProgram will be shutdown");
			return -1;
		}

		printf("starting to sleep...\n");
		Sleep(100); // Sleep 
		printf("sleep ended\n");

		int internal_counter = 0;
		while (internal_counter++ < 500)
		{
			++ramp_counter;
			reverse_ramp_counter = USHRT_MAX - ramp_counter;
			if (ramp_counter % 100 == 0)
			{
				ramp_counter_saw++;
				reverse_ramp_counter_saw = USHRT_MAX - ramp_counter_saw;
			}

			fprintf(file, "% 5d;% 5d;% 5d;% 5d\n", ramp_counter, ramp_counter_saw, reverse_ramp_counter, reverse_ramp_counter_saw);
		}

		fclose(file);
	}
}

*****************************************
int x, y;
printf("iki sayi giriniz:\n");
scanf("%d%d", &x, &y);

printf("%d	%d\n", x, y);

printf("%d * %d + %d * %d =	%d\n", x, x, y, y, x* x + y * y);

/*
int a, b;
float c, d;

a = 15;
b = a / 2;
printf("%d\n", b);
printf("%3d\n", b);
printf("%08d\n", b);

c = 15.3;
d = c / 3;
printf("%3.2f\n", d);*/

/*
char str[] = "Saban Kocal";
printf("%s\n", str);*/

/*
int ival = 0xABCDEF12;
int neg_max = 0x80000000;
int neg_min = 0xFFFFFFFF;
int pos_max = 0x7FFFFFFF;
*/

//MSB
//LST

//printf("hex_val = %d \t %d \t %d\n", neg_max, neg_min, pos_max);

//printf("saban kocal\t\temre bey\nburcu hanim\t\tvehbi bey\n");

*********************************************
