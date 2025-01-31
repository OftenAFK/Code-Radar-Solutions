#include <stdio.h>

int main(void)
{
    int height;
    printf("");
    scanf("%i", &height);

    for (int i= 0; i< height; i++)
    {
        for (int j= 0; j< height; j++)
        {
            printf("* ");
        }
        printf("\n");

        return 0;
    }
}