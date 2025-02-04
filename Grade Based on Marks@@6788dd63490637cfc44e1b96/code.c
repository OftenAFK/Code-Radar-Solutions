#include <stdio.h>

int markings(int marks)
{
    if (marks >= 90)
    {
        printf("A\n");
    }
    else if (marks >= 80)
    {
        printf("B\n");
    }
    else if (marks >= 70)
    {
        printf("C\n");
    }
    else if (marks >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}

int main(void)
{
    int number;
    printf("");
    scanf("%i", &number);

    markings(number);

    return 0;
}