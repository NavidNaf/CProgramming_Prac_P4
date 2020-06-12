#include <stdio.h>

int main(void)
{
    FILE *math = fopen("math.txt", "r");
    FILE *eng = fopen("english.txt", "r");
    FILE *bang = fopen("bangla.txt", "r");
    FILE *avg = fopen("avg.txt", "a");

    char number1[80], number2[80], number3[80];
    int roll[10], english[10], mathe[10], bangla[10];
    for (int i = 0; i < 10; i++)
    {
        fgets(number1, 80, math);
        sscanf(number1, "%d %d", &roll[i], &mathe[i]);
        fgets(number2, 80, eng);
        sscanf(number2, "%d %d", &roll[i], &english[i]);
        fgets(number3, 80, bang);
        sscanf(number3, "%d %d", &roll[i], &bangla[i]);
    }

    int average[10];
    for (int i = 0; i < 10; i++)
    {
        average[i] = (mathe[i] + english[i] + bangla[i]) / 3;
        fprintf(avg, "%i %i\n", roll[i], average[i]);
    }

    fclose(math);
    fclose(eng);
    fclose(bang);
    fclose(avg);
}