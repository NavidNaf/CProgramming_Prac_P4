#include <stdio.h>

int main(void)
{
    int i, j;

    printf("i: ");
    scanf("%i", &i);
    printf("j: ");
    scanf("%i", &j);

    // pointer declare
    int *i1 = &i;
    int *j1 = &j;

    if (i == j)
        printf("Same\n");
    else
        printf("Different\n");

    //compare using pointer
    if (*i1 == *j1)
        printf("Same\n");
    else
        printf("Different\n");
}