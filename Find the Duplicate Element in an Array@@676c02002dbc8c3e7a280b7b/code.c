#include <stdio.h>

int sorting(int arr[], int low, int high)
{
    int anchor= arr[high];
    int i= low - 1;

    for (int j= low; j< high; j++)
    {
        if (arr[j] < anchor)
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
        int anchorIndex= sorting(arr, low, high);

        quickSort(arr, low, anchorIndex - 1);
        quickSort(arr, anchorIndex + 1, high);
    }
}

int duplicates(int arr[], int length)
{
    quickSort(arr, 0, length- 1);

    for (int i= 0; i< length- 1; i++)
    {
        if (arr[i]== arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
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

    printf("%i", duplicates(arr, length));

    return 0;
}