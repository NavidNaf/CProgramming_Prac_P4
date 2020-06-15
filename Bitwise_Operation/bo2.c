#include <stdio.h>

int main (void)
{
    int n, x, m, position;

    printf("Value x: ");
    scanf("%i", &x);
    printf("Bits to Shift m:");
    scanf("%i", &m);
    do
    {
        printf("1 for Left, 2 for Right.\n");
        scanf("%i", &position);
    }while(position < 1 || position > 2);

    if (position == 1)
        n = x << m;
    else if (position == 2)
        n = x >> m;
    
    printf("Shifted Value: %i\n", n);
}