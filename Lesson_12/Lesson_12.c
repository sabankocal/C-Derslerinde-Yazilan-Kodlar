//asagidakiler ayni manaya gelecek

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

main() {
    int n, i, count = 0;
    printf("Enter any number n:");
    (void)scanf("%d", &n);
    
    isprime(n);

    return 0;
}

int isprime(int number)
{
    int count = 0;
    
    //logic
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("n is a Prime number");
    }
    else {
        printf("n is not a Prime number");
    }
}

//////////////////////

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

main() {
    int n, i, count = 0;
    printf("Enter any number n:");
    (void)scanf("%d", &n);
    
    isprime(n);

    return 0;
}

int isprime(int number)
{
    int count = 0;
    
    //logic
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            printf("n is not a Prime number");
            return 0;
        }
    }

    printf("n is a Prime number");

    return 1;
    
}

///////////

