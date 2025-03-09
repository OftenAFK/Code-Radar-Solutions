#include <stdio.h>

int sorting(int arr[], int low, int high)
{
    int pivot= arr[high];
    int i= low- 1;

    for (int j= low; j< high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp= arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
        }
    }

    int temp= arr[i+1];
    arr[i+1]= arr[high];
    arr[high]= temp;

    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex= sorting(arr, low, high);

        quickSort(arr, low, pivotIndex- 1);
        quickSort(arr, pivotIndex+ 1, high);
    }
}

int findIndex(int arr[], int length, int target)
{
    for (int i= 0; i< length; i++)
    {
        if (arr[i]== target)
        {
            return i;
        }
    }
}

void counting(int arr[], int length)
{   
    if (length= 1)
    {
        printf("-1\n");
    }
    else
    {
        quickSort(arr, 0, length- 1);
        int difference[length- 1];

        for (int i= 0; i< length- 1; i++)
        {
            int temp= arr[i+1]- arr[i];
            difference[i]= temp;
        }

        int least = difference[0];
        for (int i= 1; i< length- 1; i++)
        {
            if (difference[i] < least)
            {
                least= difference[i];
            }
        }

        int index= findIndex(difference, length- 1, least);
        
        printf("%i %i", arr[index], arr[index + 1]);
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
}