#include <stdio.h>

int range(int number)
{
    if (number >= 1 && number <= 100)
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

    if (range(number))
    {
        printf("In Range\n");
    }
    else
    {
        printf("Out of Range\n");
    }

    return 0;
}