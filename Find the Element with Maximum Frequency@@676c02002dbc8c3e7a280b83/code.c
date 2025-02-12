#include <stdio.h>

int frequency(int arr[], int length)
{
    int new_arr[length];
    for (int i= 0; i< length; i++)
    {   
        int counter= 0;
        for (int j= 0; j< length; j++)
        {
            if (arr[i]== arr[j])
            {
                counter++;
            }
        }
        new_arr[i]= counter;
    }

    int max= new_arr[0];
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> max)
        {
            max= i;
        }
    }
    return arr[max];
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

    printf("%i", frequency(arr, length));

    return 0;
}

