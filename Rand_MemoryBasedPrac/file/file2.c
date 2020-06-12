#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("File2.txt", "w");
    fprintf(fp, "My Name is Naf\n");
    fprintf(fp, "I am an IUTian\n");
    fclose(fp);

    fp = fopen("File2.txt", "a");
    fprintf(fp, "This is a New Line\n");
}