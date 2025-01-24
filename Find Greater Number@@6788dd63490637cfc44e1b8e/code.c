#include <stdio.h>

int main(void)
{
    int first, second;
    printf("Enter numbers: ");
    scanf("%i %i", &first, &second);

    if (first > second)
    {
        printf("%i", first);
    }
    else
    {
        printf("%i", second);
    }

    return 0;
}