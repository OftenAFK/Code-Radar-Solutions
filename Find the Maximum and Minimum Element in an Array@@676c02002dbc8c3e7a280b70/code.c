#include <stdio.h>

int max(int arr[], int length)
{
    int first= arr[0];
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> first)
        {
            first= arr[i];
        }
    }
    return first;
}

int min(int arr[], int length)
{
    int second= arr[0];
    for (int i= 0; i< length; i++)
    {
        if (second > arr[i])
        {
            second= arr[i];
        }
    }
    return second;
}

int main(void)
{
    int limit;
    printf("");
    scanf("%i", &limit);

    int arr[limit];
    for (int i= 0; i< limit; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i %i", min(arr, limit), max(arr, limit));

    return 0;
}