#include <stdio.h>

int gambling(int first, int second)
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

    if (gambling(first, second))
    {
        printf("Loss\n");
    }
    else
    {
        printf("Profit\n");
    }

    return 0;
}