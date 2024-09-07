// 	Write a program to count number of lines in a file
#include <stdio.h>

// Function to count the number of lines in a file
int countLines(const char *filename)
{
    FILE *file = fopen(filename, "r");
    int count = 0;
    char ch;

    if (file == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }

    // Check if the file is not empty and ends without a newline
    if (count == 0 && fgetc(file) != EOF)
    {
        count = 1;
    }

    if (fclose(file) != 0)
    {
        perror("Error closing file");
        return -1;
    }

    return count;
}

int main()
{
    const char *filename = "example.txt"; // Change this to your file name

    int lineCount = countLines(filename);
    if (lineCount >= 0)
    {
        printf("Number of lines in the file '%s': %d\n", filename, lineCount);
    }

    return 0;
}
