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
    int alphabet;
    if (alpha >= 65 && alpha <= 122)
    {
        alphabet= 1;
    }

    if (vowel(alpha))
    {
        printf("Vowel\n");
    }
    else if (alphabet && vowel(alpha)== 0)
    {
        printf("Consonant\n");
    }

    return 0;
}