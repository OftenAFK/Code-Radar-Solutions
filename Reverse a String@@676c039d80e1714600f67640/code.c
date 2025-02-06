#include <stdio.h>

int rev(char arr[], int length)
{   
    for (int i= 0; i> length; i++)
    {
        arr[i]= arr[length- 1];
    }

    return arr[];
}

int main(void)
{
    char string[20];
    scanf("%19s", string);

    printf("%s", rev(string, 20));

    return 0;
}