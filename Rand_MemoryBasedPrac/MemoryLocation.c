#include <stdio.h>

int main(void)
{
    int n = 50, m = 100;
    char ch1 = 'A', ch2 = 'b';

    printf("n: %i\n", n);
    printf("memory of n: %p\n", &n);
    printf("m: %i\n", m);
    printf("memory of m: %p\n", &m);
    printf("ch1: %c\n", ch1);
    printf("memory of ch1: %p\n", &ch1);
    printf("ch2: %c\n", ch2);
    printf("memory of ch2: %p\n ", &ch2);
}