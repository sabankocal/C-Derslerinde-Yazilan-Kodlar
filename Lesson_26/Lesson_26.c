#include <stdio.h>

int main() {

	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	printf("Greeting message: %s, start address=%p\n", greeting, &greeting);

	for (int index = 0; index < sizeof(greeting); index++)
	{
		printf("%p greetings[%d]:%c - ASCII:%d\n", &greeting[index], index, greeting[index], greeting[index]);
	}

	return 0;
}

/****************************/

#include <stdio.h>

int main() {
	
	char greeting[] = { "Saban Kocal"};
	int int_arr[6] = { 1, 2, 3, 4, 5, 6 };
	double double_arr[6] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

	printf("Greeting message: %s, start address=%p\n", greeting, &greeting);

	printf("Char array:\n");
	for (int index = 0; index < sizeof(greeting); index++)
	{
		printf("%p greetings[%d]:%c - ASCII:%d\n", &greeting[index], index, greeting[index], greeting[index]);
	}

	printf("\nInt array:\n");
	for (int index = 0; index < sizeof(int_arr); index++)
	{
		printf("%p greetings[%d]:%c - ASCII:%d\n", &int_arr[index], index, int_arr[index], int_arr[index]);
	}

	printf("\nDouble array:\n");
	for (int index = 0; index < sizeof(double_arr); index++)
	{
		printf("%p greetings[%d]:%c - ASCII:%d\n", &double_arr[index], index, double_arr[index], double_arr[index]);
	}

	return 0;
}

/****************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {

	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int  len;

	/* copy str1 into str3 */
	strcpy(str3, str1);
	printf("after strcpy( str3, str1) operation s3=%s\n", str3);

	/* concatenates str1 and str2 */
	strcat(str1, " ");
	strcat(str1, str2);
	printf("strcat( str1, str2):  Result= %s\n", str1);

	/* total lenghth of str1 after concatenation */
	len = strlen(str1);
	printf("strlen(str1),  :  %d, sizeof(str1)=%d\n", len, sizeof(str1));

	return 0;
}
