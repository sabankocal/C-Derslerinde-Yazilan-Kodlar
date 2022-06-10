// C program to take an integer
// as input and print it

#include <stdio.h>

int main()
{
    int counter = 0xFFFFFFF5, prev_counter=counter;
    
    while (counter++) {
        printf("counter_prev:0x%X   counter:0x%X \n", prev_counter, counter);
        prev_counter = counter;
    }

    printf("\n\nEnd of Loop - counter_prev:0x%X   counter:0x%X \n", prev_counter, counter);

    return 0;
}
