#include <stdio.h>

float average(int a, int b, int c)
{
    float counter= (a + b + c)/3.0;
    return counter;
}

int main(void)
{
    int first, second, third;
    printf("");
    scanf("%i %i %i", &first, &second, &third);

    float result= average(first, second, third);
    printf("Average: %.2f\n", result);

    return 0;
}