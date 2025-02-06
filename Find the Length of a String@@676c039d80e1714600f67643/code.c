#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char string[20];
    scanf("%19[^\n]", string);

    int spaces= 1;
    int length= strlen(string);
    for (int i= 0; i< 20; i++)
    {
        if (!isspace(string[i]))
        {
            spaces= 0;
            break;
        }
    }

    if (spaces== 0)
    {
        printf("%i\n", length);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
