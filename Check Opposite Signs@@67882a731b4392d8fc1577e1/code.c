#include <stdio.h>

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (first >= 0 && second >= 0 || first <= 0 && second <= 0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }

    return 0;
}