#include <stdio.h>

int palindrome(char word[])
{
    char temp[20];
    for (int i= 0; word[i]!= '\0', i++)
    {
        temp[i]= word[length- i];
    }
    for (int i= 0; temp[i]!= '\0', i++)
    {
        if (temp[i]!= word[i])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char string[20];
    scanf("%19s", string);

    if (palindrome(string))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}