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
    else if(character >= 'a' && character <= 'z')
    {
        printf("Lowercase\n");
    }
    else
    {
        printf("Not an alphabet\n");
    }

    return 0;
}