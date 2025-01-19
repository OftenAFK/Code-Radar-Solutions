#include <stdio.h>

float average(int a, int b, int c)
{
    int sum= a + b + c;
    float counter= sum/3.0;
    return counter;
}

int main(void)
{
    int first, second, third;
    printf("");
    scanf("%f %f %f", &first, &second, &third);

    float result= average(first, second, third);
    printf("Average: %.2f\n", result);

    return 0;
}