#include <stdio.h>

void swap(int *a, int *b) // pointer refers to memory address
{
    //using pointers to swap
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x: %i, y: %i\n", x, y);
    swap(&x, &y); // passing address of x, y
    printf("x: %i, y: %i\n", x, y);
}