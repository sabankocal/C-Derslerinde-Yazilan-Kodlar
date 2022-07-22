Lesson-31:
/*********************************/
sizeof(a)/sizeof(a[0]);
/**/
#include <stdio.h>


int main() {
  int a [] = {11,22,36,5,2};
  int sum =0, *p;
  
  for(p=&a[0]; p<=&a[4]; p++)
  	sum += *p;
    
    
  printf("sum is %d", sum);  
  return 0;
}

/*********************************/

#include <stdio.h>


int main() {
  int a [] = {11,22,36,5,2};
  int sum =0;
  int *p = &a[0];
  
  for(int i=0; i<5; i++)
  {
  	printf("Address:%p\n", p);
  	int dummy =*(p++); //a[i]
    sum += dummy;
  	printf("current item:%d\n", dummy);  
  }
  
  printf("sum is %d", sum);  
  return 0;
}

/*********************************/

#include <stdio.h>


int main() {
  int a [] = {11,22,36,5,2};
  int sum =0;
					  int *p = &a[0];
  
  for(int i=0; i<5; i++)
  {
  	printf("Address:%p\n", p);
  	int dummy =*(p+i); //a[i]
    sum += dummy;
  	printf("current item:%d\n", dummy);  
  }
  
  printf("sum is %d\n", sum);
  
  printf("Address:%p\n", p);
  	
  return 0;
}

/*********************************/

#include <stdio.h>


int main() {
  int a [] = {11,22,36,5,2};
  int sum =0;
  int *p = a; //&a[0];
  
  for(int i=0; i<5; i++)
  {
  	printf("Address:%p\n", p);
  	int dummy =*(p+i); //a[i]
    sum += dummy;
  	printf("current item:%d\n", dummy);  
  }
  
  printf("sum is %d\n", sum);
  
  printf("Address:%p\n", p);
  	
  return 0;
}

/*********************************/

#include <stdio.h>


int main() {
  int a [] = {11,22,36,5,2};
  int sum =0, *p;
  
  for(p=&a[0]; p<=&a[4]; p++)
  {
  	printf("Address:%p\n", p);
  	int dummy =*(p); 
    sum += dummy;
  	printf("current item:%d\n", dummy);  
  }
  
  printf("sum is %d\n", sum);
  
  printf("Address:%p\n", p);
  	
  return 0;
}

/*********************************/

#include <stdio.h>

//#define SIZE sizeof(a)/sizeof(a[0]);

int main() {
  int a [] = {11,22,36,5,2,4};
  int size = sizeof(a)/sizeof(a[0]);
  printf("size:%d\n", size);  
  int sum =0, *p;
  
  for(p=&a[0]; p<=&a[size-1]; p++)
  {
  	printf("Address:%p\n", p);
  	int dummy =*(p); 
    sum += dummy;
  	printf("current item:%d\n", dummy);  
  }
  
  printf("sum is %d\n", sum);
  
  printf("Address:%p\n", p);
  	
  return 0;
}

/*********************************/

/**/
5!
5*4!
4*3!
3*2!
2*1!
1
/**/

/**/
