#include <stdio.h>

int sorted(int arr[], int length)
{
    for (int i= 0; i< length- 1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int length;
    printf("");
    scanf("%i", &length);

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    if (sorted(arr, length))
    {
        printf("Sorted\n");
    }
    else
    {
        printf("Not Sorted\n");
    }

    return 0;
}