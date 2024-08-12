// 3.	Write a program to generate Fibonacci series using recursive function.

#include <stdio.h>
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num = fibo(i);
        printf("%d ", num);
    }
}