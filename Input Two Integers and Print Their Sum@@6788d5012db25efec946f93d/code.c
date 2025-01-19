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

    int result= sum(first, second);
    printf("Sum: %i\n", result)

    return 0;
}