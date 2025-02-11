#include <stdio.h>

int indexed_number(int arr[], int length, int number)
{
    for (int i= 0; i< length; i++)
    {
        if (number== arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int length, index;
    scanf("%i", &length);

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    scanf("%i", &index);

    printf("%i", indexed_number(arr, length, index));

    return 0;
}