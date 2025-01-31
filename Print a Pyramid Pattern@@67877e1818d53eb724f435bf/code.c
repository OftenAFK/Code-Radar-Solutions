#include <stdio.h>

int main(void)
{
    int height;
    scanf("%i", &height);

    for (int i= 1; i< height; i++)
    {
        for (int j= 1; j< 2i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}