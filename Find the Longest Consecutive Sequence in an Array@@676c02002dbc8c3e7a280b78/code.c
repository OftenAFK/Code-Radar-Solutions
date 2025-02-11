#include <stdio.h>
// hated this in python, im gonna hate this in C as well
// turns out this isnt a question for lds, but rather hash, so ill let it be for now, idk how to use hash yet
// or i can just find minimum, loop around it until i find minimum+1, then minimum+2 and so on, until i dont
// but the time complexity... so nevermind, imma sleep.
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