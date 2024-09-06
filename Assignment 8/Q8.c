// copy one string to another using pointer
#include <stdio.h>

void stringCopy(char *source, char *destination)
{
    // Copy each character from source to destination using pointers
    while (*source != '\0')
    {
        *destination = *source; // Copy current character
        source++;               // Move to the next character in source
        destination++;          // Move to the next position in destination
    }
    *destination = '\0'; // Add null terminator at the end of the destination string
}

int main()
{
    char source[100], destination[100];

    // Input the source string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Copy the string using the stringCopy function
    stringCopy(source, destination);

    // Print the copied string
    printf("Copied string: %s", destination);

    return 0;
}
