// Write a program to print contents of file
#include <stdio.h>

// Function to print the contents of a file
void printFileContents(const char *filename)
{
    FILE *file = fopen(filename, "r");
    char ch;

    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    // Read and print the file character by character
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    if (fclose(file) != 0)
    {
        perror("Error closing file");
    }
}

int main()
{
    const char *filename = "example.txt"; // Change this to your file name

    printf("Contents of the file '%s':\n", filename);
    printFileContents(filename);

    return 0;
}
