// 4.	Write a program to swap two integers using call by value and call by reference methods of passing arguments to a function.

#include <stdio.h>

// Function to swap integers using call by value
void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function to swap integers using call by reference
void swapByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    // Input values
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Call by value
    printf("Original values before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("Values after swapByValue: x = %d, y = %d\n", x, y);

    // Call by reference
    printf("Original values before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("Values after swapByReference: x = %d, y = %d\n", x, y);

    return 0;
}
