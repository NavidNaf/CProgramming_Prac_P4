#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("Image1.png", "rb");
    FILE *ptr2 = fopen("Image2.png", "wb");
    int ch;

    if (ptr1 == NULL)
    {
        perror("File Opening Failed");
        return 1;
    }
    while ((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
}