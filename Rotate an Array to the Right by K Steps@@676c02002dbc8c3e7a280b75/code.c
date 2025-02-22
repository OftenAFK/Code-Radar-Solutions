#include <stdio.h>

int rotate(int arr[], int length, int rotating_number)
{   
    int new_arr[length], temp= length - rotating_number;
    for (int i= 0; i< rotating_number; i++)
    {
        new_arr[i]= arr[temp + i- 1];
    }

    for (int i= rotating_number; i< length; i++)
    {
        new_arr[i]= arr[rotating_number - i];
    }

    for (int i= 0; i< length; i++)
    {
        printf("%i ", new_arr[i]);
    }

    return 1;
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

    int rotating_number;
    scanf("%i", &rotating_number);

    rotate(arr, length, rotating_number);

    return 0;
}