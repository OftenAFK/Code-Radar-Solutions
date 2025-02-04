#include <stdio.h>

int multiple(int first, int second)
{
    if (first % second== 0)
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

    if (multiple(first, second))
    {
        printf("Yes\n")
    }
    else
    {
        printf("No\n")
    }

    return 0;
}