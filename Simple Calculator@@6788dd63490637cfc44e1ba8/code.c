#include <stdio.h>

float addition(int first, int second)
{
    int counter= first + second;
    return counter;
}

float subtraction(int first, int second)
{
    int counter= first - second;
    return counter;
}

float multiplication(int first, int second)
{
    int counter= first * second;
    return counter;
}

float division(int first, int second)
{   if (second== 0)
    {
        return 0;
    }
    int counter= first / second;
    return counter;
}

int main(void)
{
    int first, second;
    char special_character;
    printf("");
    scanf("%f %f %c", &first, &second, &special_character);

    if (special_character== '+')
    {
        printf("%f", addition(first, second));
    }
    else if (special_character== '-')
    {
        printf("%f", subtraction(first, second));
    }
    else if (special_character== '*')
    {
        printf("%f", multiplication(first, second));
    }
    else
    {
        printf("%f", division(first, second));
    }

    return 0;
}