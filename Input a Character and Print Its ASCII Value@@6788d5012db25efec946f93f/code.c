#include <stdio.h>

int main(void)
{
    char first;
    printf("");
    scanf("%c", &first);

    first= (int) first;
    printf("ASCII Value: %i\n", first);

    return 0;
}