#include <stdio.h>

void swap(int *first, int *second)
{
    int temp= *first;
    *first= *second;
    *second= temp;
}

void sorting(int arr[], int length)
{
    for (int i= 0; i< length- 1; i++)
    {
        for (int j= i+1; j< length; j++)
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

    int temp= 0;

    if (arr[0]> 0 && arr[0]!= 1)
    {
        return 1;
    }

    for (int i= 0; i< length; i++)
    {   
        if (arr[i]> 0 && arr[i]!= (arr[i+1] - 1))
        {
            int result= arr[i] + 1;
            return result;
        }
        else if (arr[i] < 0)
        {
            temp++;
        }

    }

    if (temp== length)
    {
        return 1;
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