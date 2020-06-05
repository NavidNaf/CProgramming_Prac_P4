#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main (void)
{
    // open file
    FILE *file = fopen("phonebook.csv", "a");

    // get strings
    char *name = get_string("Name: ");
    char *number = get_string ("Number: ");

    // write file
    fprintf(file, "%s, %s \n", name, number);

    // close file
    fclose(file);
}