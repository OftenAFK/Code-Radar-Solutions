#include <stdio.h>

int triangle(int length, int breadth, int height)
{
    if (length!= breadth && length!= height)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int length, breadth, height;
    printf("");
    scanf("%i %i %i", &length, &breadth, &height);

    if (length== breadth && breadth== height)
    {
        printf("Equilateral\n");
    }
    else if (triangle(length, breadth, height))
    {
        printf("Scalene\n");
    }
    else
    {
        printf("Isosceles\n");
    }

    return 0;
}