#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("in.txt", "r");
    FILE *ptr2 = fopen("out.txt", "w");
    int num1, num2, sum, num3;

    fscanf(ptr1, "%i", &num1);
    fscanf(ptr1, "%i", &num2);
    fscanf(ptr1, "%i", &num3);

    sum = num1 + num2 + num3;
    printf("%i + %i + %i = %i\n", num1, num2, num3, sum);
    fprintf(ptr2, "%i\n", sum);

    fclose(ptr1);
    fclose(ptr2);
}
