#include <stdio.h>

float average(float a, float b, float c)
{
    float sum= a + b + c;
    float counter= sum/3;
    return counter;
}

int main(void)
{
    float first, second, third;
    printf("");
    scanf("%f %f %f", &first, &second, &third);

    float result= average(first, second, third);
    printf("Average: %.2f\n", result);

    return 0;
}