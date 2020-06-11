#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p;
    p = &x;

    printf("*p: %i\n", *p);
    printf("Value of p: %p\n", p);
}