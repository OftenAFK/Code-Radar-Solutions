#include <stdio.h>

int main(void)
{
    char first;
    printf("");
    scanf("%s", &first);

    first= (int) first;
    printf("ASCII value: %i\n", first);

    return 0;
}