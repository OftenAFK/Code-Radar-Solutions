#include <stdio.h>

char* rev(char arr[], int length)
{   
    char const* temp[length];
    for (int i= 0; i< length- 1; i++)
    {
        temp[i]= arr[length-1];
    }
    return temp;
}

int main(void)
{
    char string[20];
    scanf("%19s", string);

    printf("%s", rev(string, 20));

    return 0;
}