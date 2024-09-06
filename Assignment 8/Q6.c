// Write a program to swap two arrays using pointers
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    printf("Enter the number of elemnts in array: \n");
    scanf("%d", &n);

    int firstArr[n], secondArr[n];

    int *firstPtr, *secondPtr;

    firstPtr = firstArr;
    secondPtr = secondArr;

    printf("Enter the elements of first array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (firstPtr + i));
    }

    printf("Enter the elements of second array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (secondPtr + i));
    }

    for (int i = 0; i < n; i++)
    {
        swap((firstPtr + i), (secondPtr + i));
    }

    printf("First array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(firstPtr + i));
    }

    printf("\nSecond array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(secondPtr + i));
    }
    return 0;
}