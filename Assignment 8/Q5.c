// Write a program to copy one array to another using pointer.
#include <stdio.h>

int main()
{
    int n, i;
    int *sourcePtr, *destPtr;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare source and destination arrays
    int sourceArray[n], destinationArray[n];

    // Pointer to the source array
    sourcePtr = sourceArray;
    destPtr = destinationArray;

    // Input elements for the source array
    printf("Enter %d elements for the source array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (sourcePtr + i)); // Store input at the address of (sourcePtr + i)
    }

    // Copy elements from source array to destination array using pointers
    for (i = 0; i < n; i++)
    {
        *(destPtr + i) = *(sourcePtr + i); // Copy value from source to destination
    }

    // Print the destination array
    printf("Elements of the destination array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(destPtr + i)); // Access value in destination array using pointer
    }

    printf("\n");

    return 0;
}
