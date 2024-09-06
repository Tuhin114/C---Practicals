// swap value of two variables using pointer

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Value of a is %d and b is %d before swapping\n", a, b);
    swap(&a, &b);
    printf("Value of a is %d and b is %d after swapping", a, b);
}
