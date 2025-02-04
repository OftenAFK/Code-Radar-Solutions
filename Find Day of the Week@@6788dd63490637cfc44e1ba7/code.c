#include <stdio.h>

int weekday(int days)
{
    week[7]= {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    result= week[days];

    return result;
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    printf("%i", weekday(number));

    return 0;
}