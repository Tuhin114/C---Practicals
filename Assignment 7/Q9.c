// 9.	Write a C program to check whether a number is prime, Armstrong or perfect number using functions

#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
};

int getDigitNo(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int armstrong(int n)
{
    int copy = n;
    int digits = getDigitNo(copy);
    int sum = 0;

    while (copy > 0)
    {
        int digit = copy % 10;
        sum += pow(digit, digits);
        copy /= 10;
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (prime(n))
    {
        printf("The number is a prime number");
    }

    if (armstrong(n))
    {
        printf("The number is an Armstrong number");
    }

    if (perfect(n))
    {
        printf("The number is a perfect number");
    }
    if (!perfect(n) && !armstrong(n) && !prime(n))
    {
        printf("No number");
    }

    return 0;
}