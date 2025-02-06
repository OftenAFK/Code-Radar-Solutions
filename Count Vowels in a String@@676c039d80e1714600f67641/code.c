#include <stdio.h>
#include <string.h>

int vowels(char word[], length)
{   
    int counter= 0;
    for (int i= 0; i< length; i++)
    {
        if (strchr("AEIOUaeiou", word[i])!= 0)
        {
            counter++;
        }
    }
    return counter;
}

int main(void)
{
    char string[20];
    scanf("%19s", string);

    printf("%i", vowels(string));

    return 0;
}