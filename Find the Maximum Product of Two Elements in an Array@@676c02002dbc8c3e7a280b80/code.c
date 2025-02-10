#include <stdio.h>

int max_product(int arr[], int length)
{
    int max1= arr[0], max2= arr[0];
    int min1= arr[0], min2= arr[0];

    for (int i= 0; i< length; i++)
    {
        if (arr[i]> max1)
        {   
            max2= max1;
            max1= arr[i];
        }
        else if (max1 > arr[i] && arr[i]> max2)
        {
            max2= arr[i];
        }
        else if (min1 > arr[i])
        {   
            min2= min1;
            min1= arr[i];
        }
        else if (arr[i]> min1 && min2 > arr[i])
        {
            min2= arr[i];
        }
    }

    int max_result= max1 * max2;
    int min_result= min1 * min2;

    if (max_result > min_result)
    {
        return max_result;
    }
    else
    {
        return min_result;
    }
}

int main(void)
{
    int length;
    scanf("%i", &length);

    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i", max_product(arr, length));

    return 0;
}