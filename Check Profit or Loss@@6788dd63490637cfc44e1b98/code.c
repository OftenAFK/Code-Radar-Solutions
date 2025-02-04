#include <stdio.h>

int gambling(int first, int second)
{
    if (first > second)
    {
        return 1;
    }
    else if (first = second)
}

int main(void)
{   
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (first== second)
    {
        printf("No Profit No Loss")
    }
    else if (gambling(first, second))
    {
        printf("Loss\n");
    }
    else
    {
        printf("Profit\n");
    }

    return 0;
}