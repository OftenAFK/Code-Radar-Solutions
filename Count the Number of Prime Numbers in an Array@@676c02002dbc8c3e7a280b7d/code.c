#include <stdio.h>

int Prime_count(int arr[], int length)
{   
    int counter= 0;
    int first= arr[0];
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> first)
        {
            first= arr[i];
        }
    }

    for (int i= 0; i< length; i++)
    {
        for (int j= 2; j< first; j++)
        {
            if (arr[i] % j!= 0)
            {
                counter++;
            }
        }
    }
    return counter;
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

    printf("%i", Prime_count(arr, length));

    return 0;
}