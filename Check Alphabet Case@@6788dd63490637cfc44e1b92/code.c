#include <stdio.h>

int main(void)
{
    char character;
    printf("");
    scanf("%c", &character);

    // character= (int) character;

    if (character >='A' && character <= 'Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowercase\n");
    }

    return 0;
}