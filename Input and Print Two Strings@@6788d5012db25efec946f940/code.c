#include <stdio.h>

int main(void)
{
    char first[25], second[25];

    printf("");
    scanf("%24s %24s", first, second);

    printf("You entered: %s and %s", first, second);

    return 0;
}