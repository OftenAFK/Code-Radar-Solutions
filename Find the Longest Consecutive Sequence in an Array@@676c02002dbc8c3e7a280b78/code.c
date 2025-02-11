#include <stdio.h>
// hated this in python, im gonna hate this in C as well
int lds(int arr[], int length)
{   
    int counter= 1;
    for (int i= 0; i< length- 1; i++)
    {   
        if (arr[i]> arr[i+1])
        {
            counter++;
        }
        else if (arr[i]< arr[i+1])
        {
            return counter;
        }
    }
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

    printf("%i", lds(arr, length));

    return 0;
}