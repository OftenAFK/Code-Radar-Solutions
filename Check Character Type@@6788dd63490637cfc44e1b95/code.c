#include <stdio.h>
#include <string.h>

int vowel(char input)
{
    return (strchr("aeiouAEIOU", input)!= NULL);
}

int main(void)
{
    char alpha;
    printf("");
    scanf("%c", &alpha);

    if (vowel(alpha))
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}