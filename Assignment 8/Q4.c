// Write a program to input and print array elements using pointer
#include <stdio.h>

int main()
{
    int n, i;
    int *ptr;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array
    int arr[n];

    // Pointer points to the start of the array
    ptr = arr;

    // Input elements using pointer
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i)); // Store input at the address of (ptr + i)
    }

    // Print elements using pointer
    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i)); // Access the value at the address of (ptr + i)
    }

    printf("\n");

    return 0;
}
