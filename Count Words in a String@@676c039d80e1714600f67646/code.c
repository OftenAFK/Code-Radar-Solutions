#include <stdio.h>

int words(char arr[])
{
    int word= 1;
    for(int i= 0; arr[i+1]!= '\0'; i++)
    {
        if (arr[i]!= ' ' && (arr[i+1]== ' ' && arr[i+2]!= ' '))
        {
            word++;
        }
    }
    return word;
}

int main(void)
{
    char string[100];
    scanf("%99[^\n]", string);

    printf("%i\n", words(string));

    return 0;
}