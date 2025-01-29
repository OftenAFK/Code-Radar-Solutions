#include <stdio.h>

int main(void)
{
    int first, second, third;
    printf("");
    scanf("%i %i %i", &first, &second, &third);

    if (first + second > third && first + third > second && second + third > first)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}