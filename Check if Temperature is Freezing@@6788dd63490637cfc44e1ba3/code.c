#include <stdio.h>

int freeze(int temp)
{
    if (temp <= 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int temperature;
    printf("");
    scanf("%i", &temperature);

    if (freeze(temperature))
    {
        printf("Freezing\n");
    }
    else
    {
        printf("Above Freezing\n");
    }

    return 0;
}