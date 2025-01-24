#include <stdio.h>

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    if (number % 5== 0 && number % 11== 0)
    {
        printf("Divisible\n");
    }
    else
    {
        printf("Not Divisible\n");
    }

    return 0;
}