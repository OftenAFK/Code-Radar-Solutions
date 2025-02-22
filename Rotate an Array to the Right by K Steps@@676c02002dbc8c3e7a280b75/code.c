#include <stdio.h>

int rotate(int arr[], int length, int rotating_number)
{   
    while (rotating_number > length) // important 
    {
        if (rotating_number> length)
        {
            rotating_number= rotating_number - length;
        }
    }

    // the implimentation of that while loop can also be done as 
    
    // if (rotating_number > length)
    // {
    //      rotating_number = rotating_number % length;
    // }

    // i just used the while loop method because i came up with it, chatgpt suggested modulo, which is better.
    
    int new_arr[length], temp= length - rotating_number;
    for (int i= 0; i< rotating_number; i++)
    {
        new_arr[i]= arr[temp + i];
    }

    for (int i= rotating_number; i< length; i++)
    {
        new_arr[i]= arr[i- rotating_number];
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