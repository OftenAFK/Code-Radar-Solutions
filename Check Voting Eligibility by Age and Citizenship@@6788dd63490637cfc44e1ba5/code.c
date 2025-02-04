#include <stdio.h>

int eligibility(int age, int citizenship)
{
    if (age >= 18 && citizenship== 0)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int age, status;
    printf("");
    scanf("%i %i", &age, &status);

    if (eligibility(age, status))
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }

    return 0;
}