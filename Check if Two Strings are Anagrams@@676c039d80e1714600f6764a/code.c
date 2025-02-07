#include <stdio.h>

const char* anagram(char arr1[], char arr2[])
{
    static char* temp[50];
    int length= 0;
    for (int i= 0; arr[i]!= '\0'; i++)
    {
        length++;
    }

    for (int i= 0; arr[i]!= '\0'; i++)
    {
        temp[i]= arr1[length- i- 1];
    }

    for (int i= 0; arr[i]!= '\0'; i++)
    {
        if (temp[i]!= arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    char input_1[50], input_2[50];
    scanf("%d\n %d", input_1, input_2);

    if (anagram(input_1, input_2))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}