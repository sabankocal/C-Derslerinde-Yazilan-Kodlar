#include <stdio.h>

int main() {

    int n[10]; /* n is an array of 10 integers */
    int i, j;

    /* initialize elements of array n to 0 */
    for (i = 0; i < 10; i++) {
        n[i] = i + 100; /* set element at location i to i + 100 */
    }

    /* output each array element's value */
    for (j = 0; j < 10; j++) {
        printf("Element[%d] = %d\n", j, n[j]);
    }

    return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS
// Program to find the average of n (n < 10) numbers using arrays

#include <stdio.h>
int main()
{
    int marks[10], i, n, sum = 0, average;
    printf("Enter n: ");
    (void)scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / n;

    printf("Average marks = %d", average);

    return 0;
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//to find duplicate items in array
    int arr[] = {66, 35, 46, 35, 61, 53, 28, 67};

	int duplicate_found = 0;
	int duplicate_item;
	for (int i = 0; i < 8; i++)
	{
		for (int j = i+1; j < 8; j++)
		{
			if (arr[i] == arr[j])
			{
				duplicate_found = 1;
				duplicate_item = arr[j];
				break;
				//printf("Duplicate found as : %d. Indexes:%d, %d\n", arr[i], i, j);
				//return 1;
			}
		}

		if (duplicate_found == 1)
		{
			break;
		}
	}

	if(duplicate_found==1)
		printf("Duplicate found as : %d\n", duplicate_item);
	else
		printf("Duplicate item could not found!!!\n");

    return 0;
}
