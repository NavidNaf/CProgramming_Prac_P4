#include <stdio.h>

int main(void)
{
    int x = 10;
    int *px;

    printf("Value of x: %i\n", x);

    px = &x;
    *px = 20;
    printf("Value of x: %i\n", x);

    x = 15;
    printf("Value of x: %i\n", x);
    printf("Value stored at location %p is %d\n", px, *px);

    printf("/n");

    printf("Address of x: %p\n", &x);
    printf("Value of p: %p", px);
}