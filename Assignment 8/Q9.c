// concatenate two strings using pointers

#include <stdio.h>
#include <string.h>

void concatenate(char *str1, char *str2)
{
    // Find the length of the first string
    int len = strlen(str1);

    // Traverse the second string and append its characters to the first string
    while (*str2 != '\0')
    {
        str1[len] = *str2; // Append character from str2 to the end of str1
        len++;
        str2++; // Move to the next character in str2
    }

    // Add null terminator to the end of the concatenated string
    str1[len] = '\0';
}

void removeNewline(char *str)
{
    // Traverse the string and find the newline character
    while (*str != '\0')
    {
        if (*str == '\n')
        {
            *str = '\0'; // Replace newline with null terminator
            break;       // Exit once the newline is found and replaced
        }
        str++;
    }
}

int main()
{
    char str1[200], str2[100];

    // Input the first string
    printf("Enter the 1st string: ");
    fgets(str1, sizeof(str1), stdin);

    // Manually remove the newline character
    removeNewline(str1);

    // Input the second string
    printf("Enter the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    // Manually remove the newline character
    removeNewline(str2);

    // Concatenate the second string to the first
    concatenate(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
