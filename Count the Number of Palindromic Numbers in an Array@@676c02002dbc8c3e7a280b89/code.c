#include <stdio.h>

int palindrome_checker(int number)
{
    int length= 0;
    for (int i= number; i!= 0; i/= 10)
    {
        length++;
    }

    int arr[length];
    for (int i= 0; i< length; i++)
    {
        int remainder= number % 10;
        arr[i]= remainder;
        number= number / 10;
    }

    int temp= 0;
    for (int i= 0; i< length; i++)
    {
        if (arr[i]== arr[length- i- 1])
        {
            temp++;
        }
    }

    if (temp== length)
    {
        return 1;
    }

    return 0;
}

int counting_palindromes(int arr[], int length)
{   
    int palindrome_counter= 0;

    for (int i= 0; i< length; i++)
    {
        if (palindrome_checker(arr[i]))
        {
            palindrome_counter++;
        }
    }

    return palindrome_counter;
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

    printf("%i\n", counting_palindromes(arr, length));

    return 0;
}