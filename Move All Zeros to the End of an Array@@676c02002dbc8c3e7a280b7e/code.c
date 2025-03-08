#include <stdio.h>

void moving_zeroes(int arr[], int length)
{
    for (int i= 0; i< length- 1; i++)
    {
        for (int j= i+ 1; j< length; j++)
        {
            if (arr[i]== 0 && arr[j]!= 0)
            {
                int temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

    for (int i= 0; i< length; i++)
    {
        printf("%i ", arr[length- i- 1]);
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