#include <stdio.h>
// hated this in python, im gonna hate this in C as well
int lds(int arr[], int length)
{   
    int counter= 1;
    int max_length= 1;
    for (int i= 0; i< length- 1; i++)
    {   
        if (arr[i]> arr[i+1])
        {
            counter++;
        }
        else if (arr[i]< arr[i+1])
        {
            if (counter > max_length)
            {
                max_length= counter;
                counter= 1;
            }
            else
            {
                counter= 1;
            }
        }
    }
    if (counter > max_length)
    {
        max_length= counter;
    }
    return max_length;
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