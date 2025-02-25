#include <stdio.h>
#include <limits.h>

int max_product(int arr[], int length)
{
    if (length < 2) 
    {
        return 0;
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }

        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    return (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;
}

int main(void)
{
    int length;
    scanf("%i", &length);

    if (length < 2)
    {
        return 1;
    }

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i\n", max_product(arr, length));

    return 0;
}
