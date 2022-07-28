lvalue: oyle bir degiskendir ki; & operatoru ile birlikte kullanilabilir!
rvalue: lvalue olmayanlar
/****************************/
// pointer türleri için bellek alanı (storage) ihtiyacı sistemde sabittir.
// pointer türleri için sizeof değeri derleyiciye bağlı olarak 2, 4 ya da 8 byte olabilir.

#include <stdio.h>

int main(void)
{
	printf("sizeof(char)           = %zu\n", sizeof(char));
	printf("sizeof(char *)         = %zu\n", sizeof(char*));
	printf("sizeof(short)          = %zu\n", sizeof(short));
	printf("sizeof(short *)        = %zu\n", sizeof(short*));
	
	printf("sizeof(int)            = %zu\n", sizeof(int));
	printf("sizeof(int *)          = %zu\n", sizeof(int*));
	
	printf("sizeof(float*)         = %zu\n", sizeof(float));
	printf("sizeof(int *)          = %zu\n", sizeof(int*));
	
	printf("sizeof(double)         = %zu\n", sizeof(double));
	printf("sizeof(double *)       = %zu\n", sizeof(double*));

}

/****************************/

//array to pointer conversion
//array decay

//a ==> &a[0]

#include <stdio.h>

int main(void)
{
	double dval = 3.5;
	int x = (int)dval;

	int a[10] = { 0 };
	int* ptr = a;
	//int* p;
	//p = a;

	printf("&a[0]   = %p\n", &(a);
	printf("a       = %p\n", &a);
	printf("ptr     = %p\n", ptr);
}

/****************************/

#include <stdio.h>

void print(int* arr)
{
	printf("%zu\n", sizeof(arr));   //8
	printf("%p\n", arr);
}

int main(void)
{
	int a[10] = { 0 };

	printf("%zu\n", sizeof(a));   //40  //array decay olmuyor - istisna
	printf("%zu\n", sizeof(&a[0])); //8

	printf("%p\n", &a[0]); 

	print(a);
}

/****************************/

#include <stdio.h>

int main(void)
{
	int x = 10;
	int* ip = &x;

	printf("&x      = %p\n", &x);
	printf("ip      = %p\n", ip);
	printf("&ip     = %p\n", &ip);
}

/****************************/

#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 10;
	int* ip = &x;

	printf("ip      = %p\n", ip);
	printf("&ip     = %p\n", &ip);

	ip = &y;

	printf("ip      = %p\n", ip);
	printf("&ip     = %p\n", &ip);
}

/****************************/

#include <stdio.h>

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, };
	int* ptr = a;

	printf("&a[0] = %p\n", &a[0]);
	printf("&a[0] = %p\n", a);
	printf("ptr   = %p\n", ptr);
}

/****************************/

#include <stdio.h>

int main(void)
{
	int x = 10;
	int* p1 = &x;
	int* p2 = p1;

	printf("%p  %p %p\n", p1, p2, &x);

}
/****************************/

#include <stdio.h>
//#include "nutility.h"

#define			SIZE		5

void print_array(int* a, int size)
{
	for (int counter = 0; counter < size; counter++)
	{
		printf("a[%d]=%d\n", counter, *(a + counter)); //a[0] = 5 // a[1] = 20...
	}
}

int get_array_max(const int* pa, int size)
{
	int max = *(pa + 0);

	for (int i = 1; i < size; ++i) {
		if (*(pa + i) > max)
			max = *(pa + i);
	}

	return max;
}

int main(void)
{
	int a[SIZE] = {5, 7, 2, 16, 1};
	int min, max;

	/*randomize();
	set_array_random(a, SIZE);*/
	//print_array(a, SIZE);

	printf("max = %d\n", get_array_max(a, SIZE));

}

/****************************/

#include <stdio.h>
#include "nutility.h"

#define			SIZE		10

//function should better return the address it receives
void reverse_array(int* pa, int size)
{
	for (int i = 0; i < size / 2; ++i) {
		swap(pa + i, pa + size - 1 - i);
	}
}


int main(void)
{
	int a[SIZE];

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	reverse_array(a, SIZE);
	print_array(a, SIZE);

}

/****************************/

#include <stdio.h>

void scan_int(int* ptr)
{
	int ch;
	*ptr = 0;

	while ((ch = getchar()) != '\n') {
		int char_as_int = ch - '0'; //ch - 48
		*ptr = *ptr * 10 + char_as_int;
	}
}


int main(void)
{
	int x;

	printf("bir sayi giriniz: ");
	scan_int(&x);

	printf("x = %d\n", x);
}

/****************************/

#include <stdio.h>

void wrong_swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int x = 10, y = 45;

	wrong_swap(x, y);

	printf("x = %d   y = %d\n", x, y);
}

/****************************/

#include <stdio.h>

void correct_swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x = 10, y = 45;

	correct_swap(&x, &y);

	printf("x = %d   y = %d\n", x, y);
}

/****************************/

#include <stdio.h>

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int a[] = { 1, 2, 3 };
	int b[] = { -1, -2, -3 };

	printf("a[0] = %d   b[0] = %d\n", a[0], b[0]);
	swap(a, b);
	//swap(&a[0], &b[0]);
	printf("a[0] = %d   b[0] = %d\n", a[0], b[0]);

}

/****************************/

#include <stdio.h>

void f3(int y)
{
	y *= 10;
}

void f2(int* p)
{
	*p *= 5;
}

void f1(int* p)
{
	f2(p);
	f3(*p);
}

int main(void)
{
	int x = 10;

	f1(&x);

	printf("x = %d\n", x);
}

/****************************/

#include <stdio.h>

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int x = 23, y = 87;
	int* p1 = &x;
	int* p2 = &y;

	swap(p1, p2);
	//swap(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

/****************************/

#include <stdio.h>

void print_array(const int* const a, int size)
{
	int val = 100;
	//a = &val; //invalid

	for (int counter = 0; counter < size; counter++)
	{
		printf("a[%d]=%d\n", counter, *(a + counter)); //a[0] = 5 // a[1] = 20...
	}
}

int main(void)
{
	int arr[] = { 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5, 1,2,3,4,5};
	print_array(arr, sizeof(arr) / sizeof(arr[0]));
}

/****************************/


int main(void)
{
	int x = 10;
	int y = 20;	
	
	const int * const p = &x; //p is a const pointer to int
	//p is top level const
	//p is right const

	*p = 56;  //valid;
	p = &y;  //invalid
}

/****************************/
