#include <stdio.h>

int sum_of_digits(int number)
{   
    if (number < 0)
    {
        number= number * (-1);
    }
    
    int length= 0;
    for (int i= number; i!= 0; i /= 10)
    {
        length++;
    }

    if (length == 1)
    {
        return number;
    }

    int counter= 0, remainder= 0;
    for (int i= number; i!= 0; i /= 10)
    {
        remainder = i % 10;
        counter += remainder;
    }

    return counter;
}

int sum_of_elements(int arr[], int length)
{
    int sum_arr[length];
    for (int i= 0; i< length; i++)
    {
        int result= sum_of_digits(arr[i]);
        sum_arr[i]= result;
    }

    for (int i= 0; i< length; i++)
    {
        printf("%i ", sum_arr[i]);
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

    sum_of_elements(arr, length);

    return 0;
}