#include <stdlib.h>

void f(void)
{
    //pointer allocating a memory of 10 * 4bytes
    int *x = malloc(10 * sizeof(int)); //memory allocation with the pointer
    x[9] = 0;                          //memory allocation without pointer, if [10] used, buffer overflow by 1int = 4 bytes
    free(x);
}

int main(void)
{
    f();
    return 0;
}