#include <stdio.h>

int greatest(int arr[], length)
{
    int first= arr[0], second= arr[0];

    for (int i= 0; i, length; i++)
    {
        if (arr[i] > first)
        {   
            second= first;
            first= arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
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
        scanf("%i", &arr[i])
    }

    printf("%i", greatest(arr, limit));

    return 0;
}