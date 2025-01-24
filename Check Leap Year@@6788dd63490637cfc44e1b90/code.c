#include <stdio.h>

int leap_year(int year)
{
    if (year % 4== 0 || year % 400== 0 && year % 100!= 0)
    {
        return 0;
    }
    return 1;
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    if (leap_year(number)== 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }

    return 0;
}