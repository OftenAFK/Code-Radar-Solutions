#include <stdio.h>

const char* weekday(int days)
{
    const char* week[7]= {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if (days <= 0 || days >= 8)
    {
        return "Invalid";
    }
    return week[days-1];
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    printf("%s", weekday(number));

    return 0;
}