#include <stdio.h>

int repeating(int arr[], int length)
{
    int counter= 0;
    for (int i= 0; i< length; i++)
    {
        for (int j= 0; j< length; j++)
        {
            if (arr[i]== arr[j])
            {
                counter++;
            }
            if (counter >= 2)
            {
                return arr[i];
            }
        }
    }
    return -1;
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

    printf("%i", repeating(arr, length));

    return 0;
}