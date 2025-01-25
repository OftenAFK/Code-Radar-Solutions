#include <stdio.h>

int main(void)
{
    char character;
    printf("");
    scanf("%s", &character);

    character= (int) character;

    if (character >= 65 && character < 97)
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowercase\n");
    }

    return 0;
}