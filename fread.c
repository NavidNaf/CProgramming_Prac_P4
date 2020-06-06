#include <stdio.h>

int main(void)
{
    FILE *ptr = fopen("Cat.txt", "r");
    char ch;
    while ((ch = fgetc(ptr)) != EOF)
        printf("%c", ch);
}