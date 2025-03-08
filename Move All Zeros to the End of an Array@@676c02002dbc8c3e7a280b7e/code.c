#include <stdio.h>

void moving_zeroes(int arr[], int length)
{
    for (int i= 0; i< length; i++)
    {
        for (int j= 0; j< length; j++)
        {
            if (arr[i]== 0 && arr[j]!= 0)
            {
                arr[i]= arr[j];
                arr[j]= 0;
                break;
            }
        }
    }

    for (int i= 0; i< length; i++)
    {
        printf("%i ", arr[i]);
    }

    printf("\n");

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

    moving_zeroes(arr, length);
}