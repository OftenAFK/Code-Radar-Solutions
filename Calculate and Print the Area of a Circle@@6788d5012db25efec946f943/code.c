#include <stdio.h>

float area(float radius)
{
    float counter = (int)(3.1415926535 * radius * radius * 100) / 100.0;
    return counter;
}

int main(void)
{
    float radius; 
    printf("");
    scanf("%f", &radius);

    float result= area(radius);
    printf("Area: %.2f\n", result);

    return 0;
}