#include <stdio.h>

int what_is_this_question_bro(int arr[], int length, int target)
{   
    int counter= 0;
    for (int i= 0; i< length; i++)
    {
        if (arr[i]> target)
        {
            counter++;
        }
    }
    return counter;
}

int main(void)
{
    int length, target;
    scanf("%i %i", &length, &target);

    int arr[length];
    for(int i= 0; i< length; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("%i\n", what_is_this_question_bro(arr, length, target));

    return 0;
}