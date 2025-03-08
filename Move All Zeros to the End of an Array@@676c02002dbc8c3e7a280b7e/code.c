#include <stdio.h>

void moving_zeroes(int arr[], int length)
{
    for (int i= 0; i< length; i++)
    {
        for (int j= 0; j< length; j++)
        {
            if (arr[i]== 0 && arr[j]!= 0)
            {
                arr[i]= arr[j];
                arr[j]= 0;
                break;
            }
        }
    }
}
    for (int i= 0; i< length; i++)
    {
        printf("%i ", arr[i]);
    }

    printf("\n");
}

// void sorting(int arr[], int length)
// {
//     for (int i= 0; i< length; i++)
//     {
//         for (int j= 0; j< length; j++)
//         {
//             if (arr[i]< arr[j])
//             {
//                 int temp= arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= temp;
//             }
//         }
//     }
// }

int main(void)
{
    int arr[6]= {7, 10, 0, 6, 0, 1};
    moving_zeroes(arr, 6);

    for (int i= 0; i< 6; i++)
    {
        printf("%i ", arr[i]);
    }

    printf("\n");
}