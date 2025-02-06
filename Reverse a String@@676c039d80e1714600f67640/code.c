#include <stdio.h>

char rev(char arr[])
{   
    static char temp[50];
    int count= 0;
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        count++;
    }
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        temp[i]= arr[count- i- 1];
    }
    return temp;
}

int main(void)
{
    char string[50];
    scanf("%49[^\n]", string);

    printf("%s", rev(string));

    return 0;
}