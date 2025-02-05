#include <stdio.h>

int peak(int arr[], int length)
{
    for (int i= 0; i< length - 1; i++)
    {
        if (arr[i -1] < arr[i] && arr[i] > arr[i+1])
        {
            return arr[i];
        }
        else if (arr[i-1]== arr[i] && arr[i]== arr[i+1])
        {
            return -1;
        }
    }
    return arr[length - 1];
}

int main(void)
{
    int length;
    printf("");
    scanf("%i", &length);

    int arr[length];
    for(int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i", peak(arr, length));

    return 0;
}