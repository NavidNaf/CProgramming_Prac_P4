#include <stdio.h>

int main (void)
{
    int a1, a2;
    printf("a1: ");
    scanf("%i", &a1);
    printf("a2: ");
    scanf("%i", &a2);

    if (a1 ^ a2)
        printf("Not Same.");
    else
        printf("Same.");
}