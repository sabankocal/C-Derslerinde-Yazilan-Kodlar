#include<stdio.h>

int main()
{
	int i, j;
	for (i = 1, j = 1; i <= 3, j <= 3; i++, j++)
		printf("%d %d ", i, j);
	return 0;
}

*****************************************

#include<stdio.h>

int main()
{
	int i = 1, j = 1;
	
//	for (counter = 0; counter < 10; counter++) //ornegin bu ++ ne zaman cagrilir. counter<10 ifadesi ne oldugunda for dongusu sonlandirilir...
	for (; j; printf("%d %d ", 3, 0))
		j = i++ <= 1;
		
	//LOOP-1: i = 2, j = 1;	
	//LOOP-2: i = 3, j = 0;

	// output:
	// 2 1 3 0 

	/*
	if (i++ <= 1)
		j = 1;
	else
		j = 0;
	*/

	return 0;
}


*********************
