#include <stdio.h>

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    if (number > 0)
    {
        printf("Positive\n")
    }
    else if (number== 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Negative\n");
    }

    return 0;
}