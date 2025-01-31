#include <stdio.h>

int main(void)
{
    float first;
    printf("");
    scanf("%f", &first);

    first= (double) first;

    printf("You entered: %.4f", first);

    return 0;
}