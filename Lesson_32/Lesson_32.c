Lesson-32:
/*******************************/

#include <stdio.h>

int main() {
  
  int a[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};
  
  for(int row_counter=0; row_counter<4; row_counter++)
  {
  	printf("&a[%d] = %p, (a+%d) = %p, &a[%d][0] = %p \n", row_counter, &a[row_counter], row_counter, (a+row_counter), row_counter,  &a[row_counter][0]);
  }
  
  return 0;
}

/*******************************/

#include <stdio.h>

int main() {
  
  int a[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};
  
  for(int row_counter=0; row_counter<4; row_counter++)
  {
  	printf("&a[%d] = %p, a[%d] = %p,(a+%d) = %p, &a[%d][0] = %p \n", 
    row_counter, &a[row_counter], 
    row_counter, a[row_counter], 
    row_counter, (a+row_counter), 
    row_counter,  &a[row_counter][0]
    );
  }
  
  return 0;
}

/*******************************/

#include <stdio.h>

int main() {
  
  int a[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};
  
  for(int row_counter=0; row_counter<4; row_counter++)
  {
  	for(int col_counter=0; col_counter<2; col_counter++)
    {
  		printf("a[%d][%d] = %d \n", row_counter, col_counter, a[row_counter][col_counter]);
    }
  }
  
  return 0;
}

/*******************************/

#include <stdio.h>

int main() {
  
  int a[4][2] = {{1,2}, {3,4}, {5,6}, {7,8}};
  
  for(int *p=&a[0][0]; p<=&a[3][1]; p++)
  {
  	printf("p=%p, *p = %d \n", p,  *p);
  }
  
  //3[a] = a[3] = *(a + 3) 
  
  return 0;
}

/*******************************/

