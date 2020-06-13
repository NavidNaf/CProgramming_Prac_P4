#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int return_value;
    char *file = "FirstFile.txt";

    return_value = remove(file);

    if (return_value != 0)
    {
        perror("File Deletion Failed");
        return EXIT_FAILURE;
    }

    printf("%s Successfully Removed.", file);

    return_value = remove(file);

    if (return_value != 0)
    {
        perror("File Deletion Failed");
        return EXIT_FAILURE;
    }

    printf("%s Successfully Removed.", file);
}