#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Number: ");
        scanf("%i", &n);
    } while (n < 1);

    if ((n & (n - 1)) == 0)
        printf("Power of 2.");
    else
        printf("Not Power of 2.");
}