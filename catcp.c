#include <stdio.h>

int main(void)
{
    FILE *ptr = fopen("Cat.txt", "r");
    FILE *ptr1 = fopen("ForRead.txt", "w");

    char ch;
    while ((ch = fgetc(ptr)) != EOF)
    {
        printf("%c", ch);
        fputc(ch, ptr1);
    }
}