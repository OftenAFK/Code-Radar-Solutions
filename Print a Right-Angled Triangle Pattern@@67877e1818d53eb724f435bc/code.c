#include <stdio.h>

int main(void)
{
    int height;
    printf("");
    scanf("%i", &height);

    for (int i= 1; i< height; i++)
    {
        for (int j= 1; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");

        return 0;
    }
}