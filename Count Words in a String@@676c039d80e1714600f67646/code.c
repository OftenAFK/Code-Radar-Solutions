#include <stdio.h>
#include <string.h>

char spaces(char arr[])
{
    int spaces= 1;
    for(int i= 0; arr[i]!= '\0'; i++)
    {
        if (strcmp(' ', arr[i])== 0)
        {
            spaces++;
        }
    }
    return spaces;
}

int main(void)
{
    char string[30];
    scanf("%29s", string);

    printf("%s", spaces(string));

    return 0;
}