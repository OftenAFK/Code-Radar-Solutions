#include <stdio.h>

int sum(int a, int b)
{
    int counter= a + b;
    return counter;
}

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    printf("Sum: %i\n", first, second, sum(first, second));

    return 0;
}