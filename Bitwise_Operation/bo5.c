#include <stdio.h>

int main (void)
{
    printf("Number: ");
    int n;
    scanf("%i", &n);

    if (n & 1)
        printf("Odd.");
    else
        printf("Even.");
    
}