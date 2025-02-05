// #include <stdio.h>

// int even(int arr[], int length)
// {
//     int counter= 0;
//     for (int i= 0; i< length; i++)
//     {
//         if (arr[i] % 2== 0)
//         {
//             counter++;
//         }
//     }
//     return counter;
// }

// int odd(int arr[], int length)
// {
//     int counter= 0;
//     for (int i= 0; i< length; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             counter++;
//         }
//     }
//     return counter;
// }

// int main(void)
// {
//     int limit;
//     printf("");
//     scanf("%i", &limit);

//     int arr[limit];
//     for (int i= 0; i< limit; i++)
//     {
//         scanf("%i", &arr[i]);
//     }

//     printf("%i %i", even(arr, limit), odd(arr, limit));

//     return 0;
// }

#include <stdio.h>

int even_and_odd(int arr[], int length)
{
    int even= 0, odd= 0;
    for (int i= 0; i< length; i++)
    {
        if (arr[i] % 2== 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%i %i", even, odd);
}

int main(void)
{
    int limit;
    printf("");
    scanf("%i", &limit);

    int arr[limit];
    for (int i= 0; i< limit; i++)
    {
        scanf("%i", &arr[i]);
    }

    even_and_odd(arr, limit);

    return 0;
}