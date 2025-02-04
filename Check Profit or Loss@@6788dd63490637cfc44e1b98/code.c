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
    if (gambling)
    {
        printf("Loss\n");
    }
    else
    {
        printf("Profit\n");
    }

    return 0;
}