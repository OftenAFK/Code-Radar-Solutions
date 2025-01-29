#include <stdio.h>
#include <string.h>

bool vowel(char input)
{
    return (strchr("aeiouAEIOU", input)!= NULL)
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
        printf("Consonent\n");
    }

    return 0;
}