// Write a program to delete a file

#include <stdio.h>

// Function to delete a file
void deleteFile(const char *filename)
{
    // Attempt to delete the file
    if (remove(filename) == 0)
    {
        printf("File '%s' deleted successfully.\n", filename);
    }
    else
    {
        perror("Error deleting file");
    }
}

int main()
{
    const char *filename = "example.txt"; // Change this to the name of the file you want to delete

    deleteFile(filename);

    return 0;
}
