#include <stdio.h>

int main(void)
{
    int ara[] = {50, 60, 70, 80, 90};

    for (int i = 0; i < 5; i++)
    {
        printf("i: %i\n", ara[i]);
        printf("Memory %i: %p \n", ara[i], &ara[i]);
    }
}