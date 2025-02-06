#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[20];
    scanf("%19s", string);

    int length= strlen(string);
    printf("%i\n", length);

    return 0;
}
