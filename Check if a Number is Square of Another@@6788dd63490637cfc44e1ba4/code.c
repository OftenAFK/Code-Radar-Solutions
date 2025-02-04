#include <stdio.h>

int square(int first, int second)
{
    if (first== (second * second))
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

    if (square(first,second))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}