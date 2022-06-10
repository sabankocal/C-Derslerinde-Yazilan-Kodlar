
int a = 10;

int main() 
{
    int counter = 0;
    
    //printf("a=%d", a);
    counter = a;

    int a = 20;    

    if (1) 
    {
        int a = 30;        

        if (1) 
        {
            int a = 40;

            printf("a=%d", ::a);
        }
    }

    return 0;
}

********************************************


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a = 10;

int main()
{
	int i;
	for (i = 0; i < 5; i++)	
	{
		printf("1");
	}
	
	printf("2");	    
}

// ikisi ayni manaya geliyor
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a = 10;

int main()
{
	int i;
	for (i = 0; i < 5; i++)	
		printf("1");printf("2");	    
}

*******************************
