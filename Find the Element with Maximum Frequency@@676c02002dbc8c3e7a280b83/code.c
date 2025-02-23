#include <stdio.h>

int swap(int *first, int *second)
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

int max(int arr[], int length)
{
    int first= arr[0]
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> first)
        {
            first= arr[i];
        }
    }

    return first;
}

void dups(int arr[], int length)
{   
    sorting(arr, length);

    int j= 0;
    for (int i= 1; i< length- 1; i++)
    {
        if (arr[i]!= arr[i-1])
        {
            arr[j]= arr[i];
            j++;
        }
    }
    arr[j]= arr[length - 1];
    j++;
}

void frequency(int arr[], int length)
{   
    sorting(arr, length);

    int freq[length];
    for (int i= 0; i< length; i++)
    {
        freq[i]= 0;
    }

    int counter= 1;
    for (int i= 1; i< length; i++)
    {   
        if (arr[i]== arr[i-1])
        {
            counter++;
        }
        else 
        {
            freq[i]= counter;
            counter= 1;
        }
    }

    int result= max(freq, length);
    dups(arr, length);

    for(int i= 0; i< length; i++)
    {
        if (freq[i]== result)
        {
            printf("%i", arr[i]);
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

    frequency(arr, length);

    return 0;
}


