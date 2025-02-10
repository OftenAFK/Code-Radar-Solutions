#include <stdio.h>

int isPrime(int number)
{
    if (number < 2)
    {
        return 0;
    }
    for (int i= 2; i< number; i++)
    {
        if (number % i= 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}