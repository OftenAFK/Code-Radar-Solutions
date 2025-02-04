#include <stdio.h>
#include <string.h>

int vowel(char input)
{
    return (strchr("aeiouAEIOU", input)!= NULL);
}
int special_character(char ch)
{
    if ((ch>= 32 && ch<= 47) ||
        (ch>= 58 && ch<= 64) ||
        (ch>= 91 && ch<= 96) ||
        (ch>= 123 && ch<= 126))
    {
        return 1;
    }
    return 0;
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
    else if (special_character(alpha))
    {
        printf("Special Character\n");
    }
    else
    {
        printf("Digit\n");
    }

    return 0;
}