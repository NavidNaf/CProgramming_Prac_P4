#include <stdio.h>

int main(void)
{
    int n;
    printf("Number: ");
    scanf("%i", &n);

    int count1 = 0, count0 = 0, numb, mul;
    for (int i = 0; i < 8; i++)
    {
        numb = n >> i;
        mul = numb & 1;
        if (mul == 0)
            count0++;
        else if (mul == 1)
            count1++;
    }
    printf("1: %i, 0: %i", count1, count0);
}