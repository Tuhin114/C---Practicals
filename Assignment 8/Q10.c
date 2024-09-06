// compare two strings using pointers

#include <stdio.h>

int compareStrings(char *str1, char *str2)
{
    // Traverse both strings character by character
    while (*str1 != '\0' && *str2 != '\0')
    {
        // If characters are not equal, return the difference
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        // Move to the next character in both strings
        str1++;
        str2++;
    }

    // If one string is longer than the other, return the difference in their lengths
    return *str1 - *str2;
}

int main()
{
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the 1st string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character added by fgets
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string
    printf("Enter the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character added by fgets
    str2[strcspn(str2, "\n")] = '\0';

    // Compare the strings using the compareStrings function
    int result = compareStrings(str1, str2);

    // Output the result of the comparison
    if (result == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("The 1st string is less than the 2nd string.\n");
    }
    else
    {
        printf("The 1st string is greater than the 2nd string.\n");
    }

    return 0;
}
