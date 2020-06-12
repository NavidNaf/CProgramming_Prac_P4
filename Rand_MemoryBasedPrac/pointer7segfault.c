#include <stdio.h>

int main(void)
{
    int x = 10;
    int y;
    int *px, *qx;

    //printf("Value of x: %i\n", x);

    px = &x;
    y = *px;
    *px = 15;
    *qx = 20;

    printf("Value of x: %i\n", x);
    printf("Value of y: %i\n", y);
    printf("Value of *px: %i\n", *px);
    printf("Value of *qx: %i\n", *qx);
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Address of *px: %p\n", px);
}