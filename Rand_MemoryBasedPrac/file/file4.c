#include <stdio.h>

int main(void)
{
    FILE *ptr1 = fopen("in.txt", "r");
    FILE *ptr2 = fopen("out.txt", "w");
    char line[80];
    int num1, num2, sum, num3;

    fgets(line, 80, ptr1);
    printf("Line: %s\n", line);
    fgets(line, 80, ptr1);
    printf("Line: %s\n", line);

    sscanf(line, " %i %i %i ", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("%i + %i + %i = %i\n", num1, num2, num3, sum);
    fprintf(ptr2, "%i\n", sum);

    fclose(ptr1);
    fclose(ptr2);
}
