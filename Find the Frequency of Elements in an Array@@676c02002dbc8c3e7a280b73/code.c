#include <stdio.h>

void swap(int *first, int *second)
{
    int temp= *first;
    *first= *second;
    *second= temp;
}

void sorting(int arr[], int length)
{
    for (int i= 0; i< length - 1; i++)
    {
        for (int j= i+1; j< length; j++)
        {   
            if (arr[i]> arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void counting(int arr[], int length)
{   
    sorting(arr, length);
    for (int i= 0; i< length-1; i++)
    {   
        int counter= 1;
        if (arr[i]== arr[i+1])
        {
            counter++;
        }
        else 
        {
            printf("%i %i", arr[i], count);
            counter= 1;
        }
    }
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

    counting(arr, length);

    return 0;
}