#include <stdio.h>

int main(void)
{
    float first;
    printf("");
    scanf("%c", &first);

    first= (double) first;

    printf("%.4f", first);

    return 0;
}