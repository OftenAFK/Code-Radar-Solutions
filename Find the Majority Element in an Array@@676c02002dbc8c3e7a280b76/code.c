#include <stdio.h>

int counting(int arr[], int length)
{   
    for (int i= 0; i< length; i++)
    {   
        int counter= 0;
        for (int j= 0; j< length; j++)
        {
            if (arr[i]== arr[j])
            {
                counter++;
            }
        }
        if (counter > (length/2))
        {
            int result= arr[i];
            return result;
        }
        else
        {
            return -1;
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

    printf("%i", counting(arr, length));
}