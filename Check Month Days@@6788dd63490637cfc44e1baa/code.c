#include <stdio.h>

const char* month(month_number)
{
    const char* names[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return names[month_number - 1];
}

int main(void)
{
    int month_number;
    printf("");
    scanf("%i", &month_number);

    printf("%s", month(month_number));

    return 0;
}