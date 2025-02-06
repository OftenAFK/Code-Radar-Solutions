#include <stdio.h>

int words(char arr[])
{
    int word= 0;
    int space= 0;
    
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        if (arr[i]!= ' ' && space== 0)
        {
            word++;
            space= 1;
        }
        else if (arr[i]== ' ')
        {
            space= 0;
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