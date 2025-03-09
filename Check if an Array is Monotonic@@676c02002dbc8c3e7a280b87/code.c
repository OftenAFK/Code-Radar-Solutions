#include <stdio.h>

int checking_if_sorted(int arr[], int length)
{
    int ascending= 0, descending= 0;

    for (int i= 0; i< length- 1; i++)
    {
        if (arr[i]< arr[i+1])
        {
            ascending++;
        }
        else if (arr[i] > arr[i+1])
        {
            descending++;
        }
    }

    if (ascending== length|| descending== length)
    {
        return 1;
    }
    return 0;
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

    if (checking_if_sorted(arr, length))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}