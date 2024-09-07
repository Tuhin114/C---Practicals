// Write a program to list all files and sub-directories in a directory

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file_list.txt"

// Function to list all files and directories from the file
void listFilesAndDirectories(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), file))
    {
        // Remove trailing newline character if present
        line[strcspn(line, "\n")] = '\0';

        // Print each line
        printf("%s\n", line);
    }

    if (fclose(file) != 0)
    {
        perror("Error closing file");
    }
}

int main()
{
    printf("Listing files and directories from %s:\n", FILENAME);
    listFilesAndDirectories(FILENAME);
    return 0;
}
