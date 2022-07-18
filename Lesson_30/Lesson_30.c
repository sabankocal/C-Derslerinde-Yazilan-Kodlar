/****************************/

#include <stdio.h>

int main()
{
    int i = 5;
    printf("value of i = %d\n", i);

    int* ptr = &i;
    printf("ptr = %p\n", ptr);

    *ptr = 36;
    printf("value of *ptr = %d\n", *ptr);
    printf("value of i = %d\n", i);

}

/****************************/

#include <stdio.h>

int main()
{
    int i = 25;
    int* p = &i;
    int * q;
    *q = *p;
    
    printf("*p=%d", *p);
   
}

/****************************/

#include <stdio.h>

int main()
{
    
    int i = 5;
    int* ptr = &i;
    q = p;
    *q = 5;

    printf("*p=%d", *p);
    
}

int a[10];
a = &a[0];

/****************************/

#include <stdio.h>

int main()
{
    int i = 5;
    int* ptr = &i;
    
    printf("&i=%p, ptr=%p\n", &i, ptr);
    printf("*ptr=%d, *&i=%d\n", *ptr, *&i);

}

/****************************/
