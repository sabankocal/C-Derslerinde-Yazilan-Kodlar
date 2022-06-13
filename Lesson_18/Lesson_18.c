Lesson-18:

Yusuf Answer:

#include <stdio.h>

int a = 10;

int main()
{
	unsigned short counter;
	double sin = 0;
	for (counter = 0; counter < 361; counter++) {
		if ((counter / 180) % 2 == 0) {
			sin = sin + (1.0 / 180);
		}
		if ((counter / 180) % 2 == 1) {
			sin = sin - (1.0 / 180);
		}
		printf("%d;%lf\n", counter, sin);
	}

	return 0;
}

/*****************************/
Sami Bey:

#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <windows.h>
#define M_TWOPI 6.283185307179586476925286766559

typedef unsigned long phase_t;
double maxphase = (double)((phase_t)0 - (phase_t)1) + 1.0;

double fs = 44100;
double sample_count = 256;
double gain = 1.0;

phase_t hz_to_delta(double hz)
{
	return maxphase * hz / fs + 0.5;
}

float sample_phase(phase_t phase)
{
	return sin(phase / maxphase * M_TWOPI) * gain;
}


int main()
{
	FILE* file_datei;
	const char* file_name = "./sample_project.csv";

	file_datei = fopen(file_name, "a");
	if (file_datei == NULL)
	{
		printf("File could not be opened!!!\n Program will exit!!!");
		return -1;
	}
	fprintf(file_datei, "Sin_Wave\n");


	long i; phase_t delta, iphase = 0;

	int counter_to_change_gain = 1;
	while (1)
	{
		/*if (++counter_to_change_gain % 2 == 0)
			gain = (gain == 0.5 ? 1.0 : 0.5);*/

		if (++counter_to_change_gain % 5 != 0) {
			delta = hz_to_delta(500);
			for (i = 0; i < sample_count; ++i) {
				printf("%e\n", sample_phase(iphase += delta));
				fprintf(file_datei, "%e\n", sample_phase(iphase += delta));
			}
			Sleep(200);
		}
		else {
			delta = hz_to_delta(1000);
			for (i = 0; i < sample_count; ++i) {
				printf("%e\n", sample_phase(iphase += delta));
				fprintf(file_datei, "%e\n", sample_phase(iphase += delta));
			}
			Sleep(200);
		}
	}
	fclose(file_name);
}

/**********************/
Sami Bey edited:
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <windows.h>
#define M_TWOPI 6.283185307179586476925286766559

typedef unsigned long phase_t;
double maxphase = (double)((phase_t)0 - (phase_t)1) + 1.0;

double fs = 44100;
double sample_count = 256;
double gain = 1.0;

phase_t hz_to_delta(double hz)
{
	return maxphase * hz / fs + 0.5;
}

float sample_phase(phase_t phase)
{
	return sin(phase / maxphase * M_TWOPI) * gain;
}

void print_sample(long iphase, FILE* file);

int main()
{
	FILE* file_datei;
	const char* file_name = "./sample_project.csv";

	file_datei = fopen(file_name, "a");
	if (file_datei == NULL)
	{
		printf("File could not be opened!!!\n Program will exit!!!");
		return -1;
	}
	fprintf(file_datei, "Sin_Wave\n");

	long i; phase_t delta, iphase = 0;

	int counter_to_change_gain = 1;

	while (1)
	{
		/*if (++counter_to_change_gain % 2 == 0)
			gain = (gain == 0.5 ? 1.0 : 0.5);*/

		float sample;
		if (++counter_to_change_gain % 2 != 0) {
			delta = hz_to_delta(500);
			for (i = 0; i < sample_count; ++i) {
				print_sample((iphase += delta), file_datei);
				/*sample = sample_phase(iphase += delta);
				printf("%e\n", sample);
				fprintf(file_datei, "%e\n", sample);*/
			}
			Sleep(200);
		}
		else {
			delta = hz_to_delta(1000);
			for (i = 0; i < sample_count; ++i) {
				print_sample((iphase += delta), file_datei);
				/*sample = sample_phase(iphase += delta);
				printf("%e\n", sample);
				fprintf(file_datei, "%e\n", sample);*/
			}
			Sleep(200);
		}
	}
	
	fclose(file_datei);
}

void print_sample(long iphase, FILE * file)
{
	float sample;
	sample = sample_phase(iphase);
	printf("%e\n", sample);
	fprintf(file, "%e\n", sample);
}

/****************************************/
Sami Bey - Last version:
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <windows.h>
#define M_TWOPI 6.283185307179586476925286766559

typedef unsigned long phase_t;
double maxphase = (double)((phase_t)0 - (phase_t)1) + 1.0;

double fs = 44100;
double sample_count = 256;
double gain = 1.0;

phase_t hz_to_delta(double hz)
{
	return maxphase * hz / fs + 0.5;
}

float sample_phase(phase_t phase)
{
	return sin(phase / maxphase * M_TWOPI) * gain;
}

void print_sample(long iphase, FILE* file)
{
	float sample;
	sample = sample_phase(iphase);
	printf("%e\n", sample);
	fprintf(file, "%e\n", sample);
}

int main()
{
	FILE* file_datei;
	const char* file_name = "./sample_project.csv";

	file_datei = fopen(file_name, "a");
	if (file_datei == NULL)
	{
		printf("File could not be opened!!!\n Program will exit!!!");
		return -1;
	}
	fprintf(file_datei, "Sin_Wave\n");

	long i; phase_t delta, iphase = 0;

	int counter_to_change_gain = 1;

	while (1)
	{
		/*if (++counter_to_change_gain % 2 == 0)
			gain = (gain == 0.5 ? 1.0 : 0.5);*/

		float sample;
		if (++counter_to_change_gain % 2 != 0) {
			delta = hz_to_delta(500);
			for (i = 0; i < sample_count; ++i) {
				print_sample((iphase += delta), file_datei);
			}
			Sleep(200);
		}
		else {
			delta = hz_to_delta(1000);
			for (i = 0; i < sample_count; ++i) {
				print_sample((iphase += delta), file_datei);
			}
			Sleep(200);
		}
	}
	
	fclose(file_datei);
}
/*******************************/

Emre Bey:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

  for(int i=0;i<7;i++)
  {
    for(int j=0;j<7;j++)
    {
       if(i==j || j==(6-i))
       {
         printf("*");
       }
       else
       {
         printf("-");
       }
    }
    printf("\n");
  }
  return 0;
}

/*************************/
Yusuf:
#include <stdio.h>
#define LIMIT (7)

int main() {
    //int n = 0;
    for (int i = 0; i < LIMIT; i++) {
        for (int j = 0; j < LIMIT; j++) {
            if (j == i || j == LIMIT - 1 - i)
                printf("X");
            else
                printf("-");
        }
        printf("\n");

       // n++;
    }
}

/*************************/
Vehbi Bey:
for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++)
		{
			if ((i == j) || (i + j == 6))
				printf("x");
			else
				printf("-");
		}
		printf("\n");
	}
	
/*************************/
sum of numbers:
#include <stdio.h>

int main()
{	
	int sum = 1;
	
	for (int counter = 0; counter < 9; counter++)
	{
		sum += counter;
		printf("%d\t", sum);
	}
}
/*************************/
divide by 3:
#include <stdio.h>

int main()
{	
	for (int counter = 1; counter < 50; counter++)
	{
		if (counter % 3 == 0)
			printf("%d ", counter);
	}
}

/*************************/another example:
#include <stdio.h>

int main()
{	
	for (int counter = 51; counter < 70; counter++)
	{
		if ((counter-1) % 3 == 0)
			printf("%d ", counter+100);
		else
			printf("%d ", counter);
	}
}
/*************************/
quadrat_zahl:
#include <stdio.h>

int main()
{	
	printf("Zahl\t\tQuadratzahl\n\n");

	int quadrat_zahl = 0;
	int summe = 0;
	for (int counter = 1; counter < 101; counter++)
	{
		quadrat_zahl = (counter * counter);
		summe += quadrat_zahl;

		printf("%d\t\t%d\n", counter, quadrat_zahl);
	}

	printf("Die Summe = %d\n", summe);
}
/*************************/
#include <stdio.h>

int main()
{	
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (i % 2 == 0) // | | | | | |
			{
				if (j % 2 == 1) 
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
			}
			else //-+-+-+-+-+-+
			{
				if (j % 2 == 1)
				{
					printf("+");
				}
				else
				{
					printf("-");
				}
			}
		}
		printf("\n");
	}
}
