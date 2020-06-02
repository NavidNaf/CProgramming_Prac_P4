#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);   //prints the variable
    printf("%p\n", &n);  //prints the address of the variable
    printf("%i\n", *&n); //go to the address, print what is there

    printf("\n");

    int p = 70;
    int *q = &p;
    printf("%p\n", q);  //prints the address of the variable
    printf("%i\n", *q); //prints the pointer
}