#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[20];
    scanf("%19[^\n]", string);

    int length= strlen(string);
    printf("%i\n", length);

    return 0;
}
