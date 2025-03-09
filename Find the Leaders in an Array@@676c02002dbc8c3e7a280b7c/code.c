#include <stdio.h>

void leaders(int arr[], int length)
{

    for (int i= 0; i< length-1; i++)
    {
        int temp= length- i- 1;
        int counter= 0;
        for (int j= i+1; j< length; j++)
        {
            if (arr[i] > arr[j])
            {
                counter++;
            }
        }
        if (temp== counter)
        {
            printf("%i ", arr[i]);
        }
    }

    printf("%i\n", arr[length- 1]);
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

    leaders(arr, length);

    return 0;
}