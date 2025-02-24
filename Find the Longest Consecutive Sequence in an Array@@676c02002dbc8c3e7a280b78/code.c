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
            if (arr[i]> arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int counting(int arr[], int length)
{   
    sorting(arr, length);
    int counter= 0;

    for (int i= 0; i< length- 1; i++)
    {
        if (arr[i]== arr[i+1] + 1)
        {
            counter++;
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

    printf("%i", counting(arr, length));
    return 0;
}