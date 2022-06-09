
//Asagidakiler hep ayni isi yapiyor

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Type 3 numbers: \n");
    scanf("%d  %d  %d", &n1, &n2, &n3);
    
    int max_val = max_calculator(n1, n2);
    max_val = max_calculator(max_val, n3);
    
    printf("Max of %d, %d and %d is %d", n1, n2, n3, max_val);    
}

int max_calculator(int t1, int t2) {
    if (t1 > t2)
        return t1;
    else
        return t2;
}

///////

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Type 3 numbers: \n");
    (void)scanf("%d  %d  %d", &n1, &n2, &n3);
    
    int max_val = max_calculator(max_calculator(n1, n2), n3);
    
    printf("Max of %d, %d and %d is %d", n1, n2, n3, max_val);    
}

int max_calculator(int t1, int t2) {
    if (t1 > t2)
        return t1;
    else
        return t2;
}

///////

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Type 3 numbers: \n");
    (void)scanf("%d  %d  %d", &n1, &n2, &n3);
    
    printf("Max of %d, %d and %d is %d", n1, n2, n3, max_calculator(max_calculator(n1, n2), n3));
}

int max_calculator(int t1, int t2) {
    if (t1 > t2)
        return t1;
    else
        return t2;
}

////////

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    printf("Type 3 numbers: \n");
    (void)scanf("%d  %d  %d %d", &n1, &n2, &n3, &n4);
    
    int max_val = max_calculator(n1, n2);
    max_val = max_calculator(max_val, n3);
    max_val = max_calculator(max_val, n4);    
    printf("Max of %d, %d and %d is %d", n1, n2, n3, max_val);    
}

int max_calculator(int t1, int t2) {
    if (t1 > t2)
        return t1;
    else
        return t2;
}
