#include <stdio.h>

int repeating(int arr[], int length)
{
    for (int i= 0; i< length; i++)
    {
        for (int j= i+1; j< length; j++)
        {
            if (arr[i]== arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int main(void)
{
    int length;
    scanf("%i", &length);

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i", repeating(arr, length));

    return 0;
}