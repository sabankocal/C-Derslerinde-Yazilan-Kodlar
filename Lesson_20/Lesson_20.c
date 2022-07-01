#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//123-765
int main(void) {
	
	int x, y;
	printf("enter a number:\n");
	(void)scanf("%d", &x);
	int c = getchar();
	printf("enter second number:\n");
	(void)scanf("%d", &y);

	printf("%d, %d, %c:\n", x, y, c);

	return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

//123-765
int main(void) {

	int c;
	printf("enter a number:\n");
	c = _getch();
	
	printf("\n\n\n\n\n%c\n", c);

	return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

//123-765
int main(void) {
	
	int ch;
	printf("enter a number:\n");
	ch = _getche();

	printf("\nch = %d\n", ch);

	return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(void) {
	
	int c;
	printf("type some text:\n");
	
	while ((c = getchar()) != '\n')
	{
		printf("%c	%d\n", c, c);
	}

	return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int c =32;
	printf("type some text:\n");
	c = getchar();

	if(c == EOF)
		printf("You typed nothing!\n");
	else
		printf("You typed %c!\n", c);

	return 0;
}


/****************************/

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	// EOF
	int c =32;
	int sum = 0;
	printf("type some text:\n");
	
	c = getchar();

	if (c == EOF)
	{
		printf("You typed nothing!\n");
	}
	else
	{
		printf("You typed=%c\n", c);
	}

	return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int c =32;
	int sum = 0;
	printf("type some text:\n");
	
	while ((c = getchar()) != '\n')
	{
		sum = sum + (c - '0');
		//int number = (c - '0');
		//printf("%d\n", c);
		//sum = sum + number;		
	}

	printf("sum = %d\n", sum);

	if (sum % 3 == 0)
	{
		printf("dividable by 3!\n");
	}
	else
	{
		printf("NOT dividable by 3!\n");
	}

	return 0;
}
