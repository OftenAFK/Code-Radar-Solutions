#include <stdio.h>

char weekday(int days)
{
    week[7]= {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    result= week[days-1];

    return result;
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    printf("%s", weekday(number));

    return 0;
}