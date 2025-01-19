#include <stdio.h>

float area(float radius)
{
    float counter = 3.14159 * radius * radius;
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