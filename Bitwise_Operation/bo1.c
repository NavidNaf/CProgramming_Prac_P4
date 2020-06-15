#include <stdio.h>

int main (void)
{
    char a, b;
    a = 0;
    b = ~a;
    printf("a: %i, b: %i\n", a, b);
    
    a = 1;
    b = ~a;
    printf("a: %i, b: %i\n", a, b);
}