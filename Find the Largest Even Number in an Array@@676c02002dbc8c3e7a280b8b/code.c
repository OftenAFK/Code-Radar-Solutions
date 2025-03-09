#include <stdio.h>

int largest_even_number(int arr[], int length)
{   
    int largest= -1;
    for (int i= 0; i< length; i++)
    {
        if (arr[i] > largest && arr[i] % 2== 0)
        {
            largest= arr[i];
        }
    }
    
    return largest;
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

    printf("%i\n", largest_even_number(arr, length));

    return 0;
}