#include <stdio.h>

int eligibility(int age)
{
    if (age >= 18)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int age;
    printf("");
    scanf("%i", &age);

    if (eligibility(age))
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}