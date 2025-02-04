#include <stdio.h>

int sign(int first, int second)
{
    if (first > 0 && second > 0 || first < 0 && second < 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (sign(first, second))
    {
        printf("Same Sign\n");
    }

    else
    {
        printf("Different Sign\n");
    }
}