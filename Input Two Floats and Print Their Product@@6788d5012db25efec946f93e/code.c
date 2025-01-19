#include <stdio.h>

float multiplication(float a, float b)
{
    float counter= a * b;
    return counter;
}

int main(void)
{
    float first, second;
    printf("");
    scanf("%f %f", &first, &second);

    float result= multiplication(first, second);
    printf("Product: %.2f\n", result);
}