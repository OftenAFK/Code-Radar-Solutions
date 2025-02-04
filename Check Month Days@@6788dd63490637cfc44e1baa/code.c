#include <stdio.h>

int month(int month_number)
{
    int names[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return names[month_number - 1];
}

int main(void)
{
    int month_number;
    printf("");
    scanf("%i", &month_number);

    if (month_number >= 1 && month_number <= 12)
    {
        printf("%i\n", month(month_number));
    }
    else
    {
        printf("Invalid month\n");
    }
    return 0;
}