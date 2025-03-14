#include <stdio.h>
#include <stdlib.h>

int sorting(int arr[], int low, int high)
{
    int pivot= arr[high];
    int i= low - 1;

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

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex= sorting(arr, low, high);

        quicksort(arr, pivotIndex + 1, high);
        quicksort(arr, low, pivotIndex - 1);
    }
}

int counting(int arr[], int length)
{
    int counter= 1;
    for (int i= 0; i< length - 1; i++)
    {
        if (arr[i]!= arr[i+1])
        {
            counter++;
        }
    }

    return counter;
}

int* removing_dups(int arr[], int length)
{
    int length_without_dups= counting(arr, length);

    int* array_without_dups= (int* ) malloc (length_without_dups * sizeof (int)), temp= 0;

    for (int i= 0; i< length - 1; i++)
    {
        if (arr[i]!= arr[i+1])
        {
            array_without_dups[temp]= arr[i];
            temp++;
        }
    }

    if (arr[length - 1]== arr[length - 2])
    {
        array_without_dups[length_without_dups - 1]= arr[length - 1];
    }

    return array_without_dups;
}

int max(int arr[], int length)
{
    int max= arr[0];
    for (int i= 1; i< length; i++)
    {
        if (arr[i] > max)
        {
            max= arr[i];
        }
    }

    return max;
}

int frequency(int arr[], int length)
{
    quicksort(arr, 0, length - 1);
    int length_without_dups= counting(arr, length);

    int *temp_arr= removing_dups(arr, length), frequency[length_without_dups];

    int count= 1, frequencyIndex= 0;
    for (int i= 1; i< length; i++)
    {
        if (arr[i-1]== arr[i])
        {
            count++;
        }
        else
        {
            frequency[frequencyIndex++]= count;
            count= 1;
        }
    }

    int maxFrequency= max(frequency, length_without_dups), temp= 0;

    for (int i= 0; i< length_without_dups; i++)
    {
        if (arr[i]== maxFrequency)
        {
            temp= i;
            break;
        }
    }

    int result= temp_arr[temp];
    return result;
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

    printf("%i\n", frequency(arr, length));

    return 0;
}
