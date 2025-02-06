#include <stdio.h>
#include <string.h>

int spaces(char arr[])
{
    int spaces= 1;
    for(int i= 0; arr[i]!= '\0'; i++)
    {
        if (strcmp(" ", arr[i])== 0)
        {
            spaces++;
        }
    }
    return spaces;
}

int main(void)
{
    char string[100];
    scanf("%99s", string);

    printf("%i", spaces(string));

    return 0;
}