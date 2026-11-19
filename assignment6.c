#include <stdio.h>

int fact1(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact1(n - 1);
}

int fact2(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n,result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 

    else if (n>12) 
    {
        printf("The result is too large for standard computation.\n");
    }

    else
    {
        result = fact2(n);
        printf("Factorial without recursion is: %d\n",result);

        result = fact1(n);
        printf("Factorial using recursion is: %d\n",result);
    }

    return 0;
}


