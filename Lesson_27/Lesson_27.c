#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

int main() {
	int val;
	struct Books Book1;        /* Declare Book1 of type Book */
	struct Books Book2;        /* Declare Book2 of type Book */

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	10:52
	/* print Book1 info */
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n", Book1.book_id);

	printf("\n\n", Book1.title);

	/* print Book2 info */
	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	return 0;
}

/****************************/
#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books book );

int main( ) {

   struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printBook( Book1 );

   /* Print Book2 info */
   printBook( Book2 );

   return 0;
}

void printBook( struct Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

/****************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = { 5,10,15, 20, 25, 30, 35, 40, 45, 50 };
	int* ptr = &arr[0];

	//printf("%d, %d", sizeof(arr), sizeof(int));

	for (int index = 0; index < sizeof(arr)/sizeof(int); index++)
	{
		printf("%p arr[%d]:%d\n", &arr[index], index, arr[index]);
	}

	return 0;
}


/****************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

/* function declaration */
void printBook(struct Books book);

int main() {

	struct Books Book1;        /* Declare Book1 of type Book */
	struct Books Book2;        /* Declare Book2 of type Book */

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	/* print Book1 info */
	
	printf("Address of Book1=%p\n", &Book1);
	printBook(Book1);

	printf("\n");

	/* Print Book2 info */
	printf("Address of Book2=%p\n", &Book2);
	printBook(Book2);

	return 0;
}

void printBook(struct Books book) {

	printf("Address of Book as func parameter=%p\n", &book);
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
}
/****************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

/* function declaration */
void printBook(struct Books* book);

int main() {

	struct Books Book1;        /* Declare Book1 of type Book */
	struct Books Book2;        /* Declare Book2 of type Book */

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	/* print Book1 info */
	
	printf("Address of Book1=%p\n", &Book1);
	printBook(&Book1);

	printf("\n");

	/* Print Book2 info */
	printf("Address of Book2=%p\n", &Book2);
	printBook(&Book2);

	return 0;
}

void printBook(struct Books* book_ptr) {

	printf("Address of Book as func parameter=%p\n", book_ptr);
	printf("Book title : %s\n", book_ptr->title);
	printf("Book author : %s\n", book_ptr->author);
	printf("Book subject : %s\n", book_ptr->subject);
	printf("Book book_id : %d\n", book_ptr->book_id);
}
/****************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Books {
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

/* function declaration */
void printBook(struct Books* book);

int main() {

	struct Books Book1;        /* Declare Book1 of type Book */
	struct Books Book2;        /* Declare Book2 of type Book */

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy(Book2.title, "Telecom Billing");
	strcpy(Book2.author, "Zara Ali");
	strcpy(Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	/* print Book1 info */
	
	printf("Address of Book1=%p\n", &Book1);
	printBook(&Book1);

	printf("\n");

	/* Print Book2 info */
	printf("Address of Book2=%p\n", &Book2);
	printBook(&Book2);

	return 0;
}

void printBook(struct Books* book_ptr) 
{	
	printf("Address of Book as func parameter=%p\n", book_ptr);
	printf("Book title : %s=%s\n", book_ptr->title, (*book_ptr).title);
	printf("Book author : %s=%s\n", book_ptr->author, (*book_ptr).author);
	printf("Book subject : %s=%s\n", book_ptr->subject, (*book_ptr).subject);
	printf("Book book_id : %d=%d\n", book_ptr->book_id, (*book_ptr).book_id);
}
