#include <stdio.h>

int addition(int first, int second)
{
    int counter= first + second;
    return counter;
}

int subtraction(int first, int second)
{
    int counter= first - second;
    return counter;
}

int multiplication(int first, int second)
{
    int counter= first * second;
    return counter;
}

int division(int first, int second)
{
    int counter= first / second;
    return counter;
}

int main(void)
{
    int first, second;
    char special_character;
    printf("");
    scanf("%i %i %c", &first, &second, &special_character);

    if (special_character== '+')
    {
        printf("%i", addition(first, second));
    }
    else if (special_character== '-')
    {
        printf("%i", subtraction(first, second));
    }
    else if (special_character== '*')
    {
        printf("%i", multiplication(first, second));
    }
    else
    {
        printf("%i", division(first, second));
    }

    return 0;
}