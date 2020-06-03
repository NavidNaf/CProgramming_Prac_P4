#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main (void)
{
    char *s = get_string("Name: ");
    char *t = malloc(strlen(s) + 1); //byte allocation

    //copying from s_memory to t_memory
    strcpy(t,s);

    //for (int i = 0, n = strlen(s); i < n + 1; i++)
    //{
    //    t[i] = s[i];
    //}

    // making uppercase in t_memory first place
    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}