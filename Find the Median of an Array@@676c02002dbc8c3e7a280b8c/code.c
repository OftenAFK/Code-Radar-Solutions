#include <stdio.h>

int mean(int arr[], int length)
{
    int sum= 0;
    for (int i= 0; i< length; i++)
    {
        sum+= arr[i];
    }

    int avg= sum / length;
    return avg;
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

    printf("%i\n", mean(arr, length));

    return 0;
}