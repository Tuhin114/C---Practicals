// Write a program to find the sum of all the elements of an array using pointers in c

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter the elements: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of elements: %d", sum);

    return 0;
}