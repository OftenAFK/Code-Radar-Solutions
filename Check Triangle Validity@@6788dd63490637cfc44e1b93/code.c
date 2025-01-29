#include <stdio.h>

int main(void)
{
    int arr[100];
    int n= 0, num;

    while(scanf("%i", &num)== 0)
    {
        arr[n++]= num;
    }

    if (arr[0] + arr[1] > arr[2])
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}