#include <stdio.h>

void swap(int *first, int *second)
{
    int temp= *first;
    *first= *second;
    *second= temp;
}

int sorting(int arr[], int length)
{
    for (int i= 0; i< length; i++)
    {
        for (int j= i+1; j< length- 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int devchic(int arr[], int length)
{   
    if (length== 1 && arr[0] != 1)
    {
        return 1;
    }

    sorting(arr, length);
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> 0 && arr[i]!= (arr[i+1] - 1))
        {
            int result= arr[i] + 1;
            return result;
        }
    }

    return arr[length] + 1;
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

    printf("%i\n", devchic(arr, length));

    return 0;
}