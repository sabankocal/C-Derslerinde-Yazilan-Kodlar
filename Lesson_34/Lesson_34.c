#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
   char name[100];
   char *description;
   strcpy(name, "Adam");
   /* allocate memory dynamically */
   description = malloc( 200 * sizeof(char) );
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   } else {
      strcpy( description, "Adam a DPS student in class 10th");
   }
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
}

/****************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char name[100];
    char* description;
    strcpy(name, "Adam");
    /* allocate memory dynamically */
    description = malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcpy(description, "Adam a DPS student.");
    }
    /* suppose you want to store bigger description */
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcat(description, "He is in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    /* release memory using free() function */
    free(description);
}

/****************************/

#include <stdio.h>
#include <stdlib.h>
struct person {
   int age;
   float weight;
   char name[30];
};
int main(){
   struct person *ptr;
   int i, n;
   printf("Enter the number of persons: ");
   scanf("%d", &n);
   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));
   for(i = 0; i < n; ++i){
      printf("Enter name and age respectively: ");
      // To access members of 1st struct person,
      // ptr->name and ptr->age is used
      // To access members of 2nd struct person,
      // (ptr+1)->name and (ptr+1)->age is used
      scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }
   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
      printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
   return 0;
}

/****************************/
