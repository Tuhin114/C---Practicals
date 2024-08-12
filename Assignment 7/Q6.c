// 6.	Write a program to read an integer number and print the reverse of that number using recursion.

#include <stdio.h>

// Helper function to reverse the number
int getRev(int n, int rev)
{
    // Base case: If n is 0, return the reversed number
    if (n == 0)
    {
        return rev;
    }

    // Get the last digit
    int digit = n % 10;

    // Add the last digit to the reversed number (shifted to the left)
    rev = rev * 10 + digit;

    // Recursive call with the remaining number
    return getRev(n / 10, rev);
}

int main()
{
    int n;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Handle negative numbers by storing their absolute value
    int rev = getRev(n < 0 ? -n : n, 0);

    // Output the reversed number with the original sign
    if (n < 0)
    {
        printf("Reversed number of %d is: %d\n", n, -rev);
    }
    else
    {
        printf("Reversed number of %d is: %d\n", n, rev);
    }

    return 0;
}
