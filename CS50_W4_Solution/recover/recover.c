#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t BYTE;

#define BLOCK_SIZE 512
#define FILE_NAME_SIZE 8

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./card.raw");
        return 1;
    }
    FILE *card = fopen(argv[1], "r");

    if (card == NULL)
    {
        printf("File Not Found.");
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];
    int file_index = 0;
    bool first_jpeg = false;
    FILE *output;

    while (fread(buffer, BLOCK_SIZE, 1, card))
    {
        //checking if initial is jpeg or not
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (!first_jpeg)
            {
                first_jpeg = true;
            }
            else
            {
                fclose(output);
            }

            //creating an array with filenames
            char filen[FILE_NAME_SIZE];
            sprintf(filen, "%03i.jpg", file_index++);

            //creating individual image file with the filenames
            output = fopen(filen, "w");
            if (output == NULL)
            {
                return 1;
            }
            fwrite(buffer, BLOCK_SIZE, 1, output);
        }
        else if (first_jpeg)
        {
            //writing the prev file
            fwrite(buffer, BLOCK_SIZE, 1, output);
        }
    }
    fclose(output);
    fclose(card);
}
