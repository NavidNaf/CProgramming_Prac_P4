#include <stdio.h>

int main(void)
{
    char *s = "Naf";
    printf("%s\n", s);    //prints the string
    printf("%p\n", s);    // prints the memory address
    printf("%c\n", *(s)); // prints the first charac that the memory address points

    //pointer arithmetic
    printf("%c\n", *(s + 1)); // prints the charac that the memory address points
    printf("%c\n", *(s + 2)); // prints the charac that the memory address points

    printf("%p\n", &s[0]); //prints the memory address of the first charac of the string
}