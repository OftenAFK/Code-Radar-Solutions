#include <stdio.h>

int month(month_number)
{
    int names[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return names[month_number - 1];
}

int main(void)
{
    int month_number;
    printf("");
    scanf("%i", &month_number);

    printf("%i", month(month_number));

    return 0;
}