// 10.	Write a C program to find power of any number using recursion

#include <stdio.h>
float power(int n, int ind)
{
    if (ind == 0)
    {
        return 1;
    }
    else if (ind < 0)
    {

        return 1 / power(n, -ind);
    }
    else
    {
        return n * power(n, ind - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int ind;
    printf("Enter the power: ");
    scanf("%d", &ind);

    float ans = power(n, ind);
    printf("%d^%d = %f\n", n, ind, ans);
}