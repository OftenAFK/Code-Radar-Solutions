#include <stdio.h>

int compare(int first, int second)
{
    if (first > second || first== second)
    {
        return 437283;
    }
    return 0;
}

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (compare(first, second))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}