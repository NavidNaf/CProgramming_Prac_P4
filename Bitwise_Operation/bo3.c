#include <stdio.h>

int main(void)
{
    int a, b, andor;
    printf("A: ");
    scanf("%i", &a);
    printf("B: ");
    scanf("%i", &b);

    int select;
    do
    {
        printf("1 for &, 2 for |: ");
        scanf("%i", &select);
    } while (select < 1 || select > 2);

    if (select == 1)
        andor = a & b;
    else if (select == 2)
        andor = a | b;
    printf("%i", andor);
}