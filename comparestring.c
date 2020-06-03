#include <stdio.h>
#include <string.h>
#include <cs50.h>

int compare_string_p(char* s, char* t)
{
    while(*s == *t)
    {
        //if any of them are null, break
        if (*s == '\0' || *t == '\0')
            break;

        s++; //increase memory address by 1
        t++; //increase memory address by 1
    }

    //after getting out of while loop, if the memory address consist both the null character, return
    if (*s == '\0' && *t == '\0')
        return 0;
    else
        return -1;
}

int main (void)
{
    char *s = get_string("i: ");
    char *t = get_string("j: ");

    int comparison = compare_string_p(s,t);
    if (comparison == 0)
        printf("Same\n");
    else
        printf("Different\n");

}