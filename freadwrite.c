#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ptr = fopen("Cat.txt", "r");
    FILE *ptr1 = fopen("ForRead.txt", "w");

    char arr[11];
    fread(arr, sizeof(char), 11, ptr);   // reads from ptr
    fwrite(arr, sizeof(char), 11, ptr1); // writes to ptr
}