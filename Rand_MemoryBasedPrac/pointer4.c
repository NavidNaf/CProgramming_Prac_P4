#include <stdio.h>

int main(void)
{
    int x = 10;
    int *px;
    px = &x;

    printf("Value of x: %i\n", x);

    *px = 20;
    printf("Value of x: %i\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of px: %p\n", px);
}