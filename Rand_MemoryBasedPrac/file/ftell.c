#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("Image1.png", "rb");
    int ch;

    if (fp == NULL)
    {
        perror("File Operation Failed.");
        return EXIT_FAILURE;
    }

    fseek(fp, 0, SEEK_END);
    printf("File Size: %ld bytes\n", ftell(fp));
    printf("File Size: %ld Kilobytes\n", ftell(fp) / 1024);

    fclose(fp);
}