#include <stdio.h>

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (first <! 0 && second <! 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}