#include <stdio.h>

int check(char ch)
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    int ch;
    printf("Character: ");
    scanf("%c", &ch);
    int x = check(ch);
    if (x == 0)
        printf("It is a character.");
    else
        printf("Not a character.");
}