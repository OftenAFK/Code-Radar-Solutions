#include <stdio.h>
#include <string.h>

bool vowel(char input)
{
    if (strchr("aeiouAEIOU", input)== 0)
    {
        return 0;
    }
    return 1;
}

int main(void)
{
    char alpha;
    printf("");
    scanf("%c", &alpha);

    if (vowel(alpha))
    {
        printf("Vowel\n")
    }
    else
    {
        printf("Consonent\n")
    }

    return 0;
}