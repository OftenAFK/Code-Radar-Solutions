#include <stdio.h>

int main(void)
{
    int first;
    printf("");
    scanf("%i", &first);

    if (first % 5== 0)
    {
        if (first % 3== 0)
        {
            printf("Divisible by Both\n");
            return 1;
        }

        printf("Divisible by 5\n");
    }

    else if (first % 3== 0)
    {
        printf("Divisible by 3\n");
    }

    else
    {
        printf("Not Divisible\n");
    }

    return 0;
}