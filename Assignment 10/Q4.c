// Write a program to copy contents of one file to another file

#include <stdio.h>

// Function to copy contents from source file to destination file
void copyFile(const char *sourceFilename, const char *destinationFilename)
{
    FILE *sourceFile = fopen(sourceFilename, "r");
    FILE *destinationFile = fopen(destinationFilename, "w");
    char ch;

    // Check if source file opened successfully
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return;
    }

    // Check if destination file opened successfully
    if (destinationFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile);
        return;
    }

    // Copy contents of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    // Close both files
    if (fclose(sourceFile) != 0)
    {
        perror("Error closing source file");
    }

    if (fclose(destinationFile) != 0)
    {
        perror("Error closing destination file");
    }
}

int main()
{
    const char *sourceFilename = "source.txt";           // Change this to your source file name
    const char *destinationFilename = "destination.txt"; // Change this to your destination file name

    copyFile(sourceFilename, destinationFilename);
    printf("Contents copied from '%s' to '%s'.\n", sourceFilename, destinationFilename);

    return 0;
}
