#include <stdio.h>

int average(int a, int b, int c)
{
    int sum= a + b + c;
    int counter= sum/3;
    return counter;
}

int main(void)
{
    int first, second, third;
    printf("");
    scanf("%i %i %i", &first, &second, &third);

    int result= average(first, second, third);
    printf("Average: %.2f\n", result);

    return 0;
}