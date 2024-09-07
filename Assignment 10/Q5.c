// Write a program to merge contents of two files into a third file

#include <stdio.h>

// Function to merge contents of two files into a third file
void mergeFiles(const char *file1, const char *file2, const char *mergedFile)
{
    FILE *sourceFile1 = fopen(file1, "r");
    FILE *sourceFile2 = fopen(file2, "r");
    FILE *destinationFile = fopen(mergedFile, "w");
    char ch;

    // Check if the first source file opened successfully
    if (sourceFile1 == NULL)
    {
        perror("Error opening first source file");
        return;
    }

    // Check if the second source file opened successfully
    if (sourceFile2 == NULL)
    {
        perror("Error opening second source file");
        fclose(sourceFile1);
        return;
    }

    // Check if the destination file opened successfully
    if (destinationFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile1);
        fclose(sourceFile2);
        return;
    }

    // Copy contents of the first file to the destination file
    while ((ch = fgetc(sourceFile1)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    // Copy contents of the second file to the destination file
    while ((ch = fgetc(sourceFile2)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    // Close all files
    if (fclose(sourceFile1) != 0)
    {
        perror("Error closing first source file");
    }

    if (fclose(sourceFile2) != 0)
    {
        perror("Error closing second source file");
    }

    if (fclose(destinationFile) != 0)
    {
        perror("Error closing destination file");
    }
}

int main()
{
    const char *file1 = "file1.txt";       // Change this to your first source file name
    const char *file2 = "file2.txt";       // Change this to your second source file name
    const char *mergedFile = "merged.txt"; // Change this to your merged file name

    mergeFiles(file1, file2, mergedFile);
    printf("Contents of '%s' and '%s' merged into '%s'.\n", file1, file2, mergedFile);

    return 0;
}
