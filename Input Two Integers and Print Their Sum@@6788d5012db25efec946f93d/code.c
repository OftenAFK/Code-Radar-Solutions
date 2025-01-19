#include <stdio.h>

int sum(int first, int second)
{
    int counter= first + second;
    return counter;
}

int main(void)
{
    int first;
    int second;
    printf("");
    scanf("%i %i", first, second);

    printf("Sum: %i\n", first, second, sum(first, second));

    return 0;
}