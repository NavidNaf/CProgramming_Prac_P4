#include <stdio.h>

int main(void)
{
    int a, b, xor;
    printf("A: ");
    scanf("%i", &a);
    printf("B: ");
    scanf("%i", &b);

    xor = a ^ b;

    printf("%i ^ %i : %i", a, b, xor);
}