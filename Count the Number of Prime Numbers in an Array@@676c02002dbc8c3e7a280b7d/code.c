#include <stdio.h>

int prime(int number)
{
    if (number < 2)
    {
        return 0;
    }
    for (int i= 2; i< number; i++)
    {
        if (number % i== 0)
        {
            return 0;
        }
    }
    return 1;
}

int counting(int arr[], int length)
{
    int counter= 0;
    for (int i= 0; i< length; i++)
    {
        if (prime(arr[i]))
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