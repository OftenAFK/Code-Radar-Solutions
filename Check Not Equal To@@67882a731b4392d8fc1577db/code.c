#include <stdio.h>

int main(void)
{
    int first, second;
    printf("");
    scanf("%i %i", &first, &second);

    if (first != second)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    return 0;
}