#include <stdio.h>

void sum(int arr[], int length, int target)
{
    for (int i= 0; i< length- 1; i++)
    {
        for (int j= i+1; j< length; j++)
        {
            if (arr[i] + arr[j]== target)
            {
                printf("%i %i", arr[i], arr[j]);
                printf("\n");
            }
        }
    }
}

int main(void)
{
    int length, target;
    scanf("%i", &length);

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }
    scanf("%i", &target);

    sum(arr, length, target);

    return 0;
}