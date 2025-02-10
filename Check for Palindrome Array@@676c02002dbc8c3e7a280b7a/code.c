#include <stdio.h>

int palindrome(int arr[], int length)
{   
    int temp[50];
    for (int i= 0; i< length; i++)
    {
        temp[i]= arr[length- i- 1];
    }

    for (int i= 0; temp[i]!= '\0'; i++)
    {
        if (temp[i]== arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    int length, arr[50];
    scanf("%i", &length);

    for(int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    if (palindrome(arr, length))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}