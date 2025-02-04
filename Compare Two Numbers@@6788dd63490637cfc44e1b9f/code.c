#include <stdio.h>

int compare(int first, int second)
{
    if (first > second)
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

    if (first== second)
    {
        printf("Equal");
    }
    else if (compare(first, second))
    {
        printf("First\n");
    }
    else
    {
        printf("Second\n");
    }

    return 0;
}