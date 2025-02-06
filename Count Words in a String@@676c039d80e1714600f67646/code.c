#include <stdio.h>

int spaces(char arr[])
{
    int spaces= 1;
    for(int i= 0; arr[i]!= '\0'; i++)
    {
        if (arr[i]== ' ')
        {
            spaces++;
        }
    }
    return spaces;
}

int main(void)
{
    char string[100];
    scanf("%99s[^\n]", string);

    printf("%i\n", spaces(string));

    return 0;
}