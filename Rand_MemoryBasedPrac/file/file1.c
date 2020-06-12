#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("FirstFile.txt", "w");
    fprintf(fp, "My Name is Naf\n");
    fprintf(fp, "I am an IUTian\n");
    fclose(fp);
}