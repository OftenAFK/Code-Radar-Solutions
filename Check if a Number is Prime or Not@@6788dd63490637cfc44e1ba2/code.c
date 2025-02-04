#include <stdio.h>

int prime(int number)
{
    if (number < 2)
    {
        return 0;
    }
    for (int i= 2; i< number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    if (prime(number))
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }

    return 0;
}