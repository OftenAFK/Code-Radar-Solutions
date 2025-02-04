#include <stdio.h>

int even_odd(int number)
{
    if (number % 2== 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    if (even_odd(number))
    {
        prinf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}