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

    alpha= (int) alpha;
    if (alpha >= 65 && alpha <= 122)
    {
        int alphabet= 1;
    }

    if (vowel(alpha))
    {
        printf("Vowel\n");
    }
    if (alphabet && !vowel(alpha))
    {
        printf("Consonant\n");
    }

    return 0;
}