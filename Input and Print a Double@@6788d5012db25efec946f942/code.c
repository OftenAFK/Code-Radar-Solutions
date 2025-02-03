#include <stdio.h>

int main(void)
{
    float first;
    printf("");
    scanf("%f", &first);

    first= (double) first * 10000/ 10000.00;

    printf("You entered: %.4f", first);

    return 0;
}