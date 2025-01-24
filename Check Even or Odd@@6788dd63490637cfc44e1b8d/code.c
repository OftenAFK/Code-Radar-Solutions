#include <stdio.h>

int even(int number)
{
    if (number % 2!= 0)
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

    if (even(number)== 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("False");
    }
}