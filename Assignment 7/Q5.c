// 5.	Write a program to find sum of digits of the number using Recursive Function

#include <stdio.h>
int getSum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + getSum(n / 10);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = getSum(n);
    printf("The Sum of the digits of the number is: %d", sum);
}