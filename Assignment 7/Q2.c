// 2.	Write a program to calculate sum of first 20 natural numbers using recursive function.

#include <stdio.h>

int getSum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + getSum(n - 1);
}
int main()
{
    int n;
    printf("Enter the number to get sum: ");
    scanf("%d", &n);

    int sum = getSum(n);
    printf("Sum of digits of %d is %d", n, sum);
    return 0;
}