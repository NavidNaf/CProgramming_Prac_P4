#include <stdio.h>

int main(void)
{
    double pi = 3.14159265358;
    int *ptr;
    ptr = &pi;

    printf("Value of pi: %lf\n", pi);
    printf("Value of pi: %lf\n", *ptr);
    printf("Value of pi: %i\n", *ptr);
}