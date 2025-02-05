#include <stdio.h>

int peak(int arr[], length)
{
    for (int i= 0; i< length - 1; i++)
    {
        if (arr[i] >= arr[i+1])
        {
            continue;
        }
        else
        {
            return arr[i+1];
        }
    }
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
        printf("\n");
    }

    printf("%i", peak(arr, length));

    return 0;
}