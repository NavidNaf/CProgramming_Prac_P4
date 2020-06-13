#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("forseek.txt", "r");

    if (fp == NULL)
    {
        perror("Can't open File.");
        return EXIT_FAILURE;
    }

    int ch;
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, -1, SEEK_END);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);
}