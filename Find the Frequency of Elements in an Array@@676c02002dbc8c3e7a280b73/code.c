#include <stdio.h>

void swap(int *first, int *second)
{
    int temp= *first;
    *first= *second;
    *second= temp;
}

int sorting(int arr[], int length)
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
    int new_arr[length]= {0}, frequency[length]= {0};

    for (int i= 0; i< length; i++)
    {   
        int counter= 0;

        for (int j= 0; j< length;)
        {   
            j += counter;
            if (new_arr[i]== arr[j])
            {
                counter++;
                new_arr[i]= arr[j];
            }
        }

        frequency[i]= counter;
    }

    temp= 0;
    while (new_arr[temp]!= 0 && frequency[temp]!= 0)
    {
        printf("%i %i\n", new_arr[temp], frequency[temp]);
    }
}

int main(void)
{
    int length;
    scanf("%i", &length);

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i])
    }

    counting(arr, length);

    return 0;
}