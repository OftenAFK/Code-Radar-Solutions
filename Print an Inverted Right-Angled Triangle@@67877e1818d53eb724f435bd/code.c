#include <stdio.h>

int main(void)
{
    int height;
    printf("");
    scanf("%i", &height);

    for (int i= height; i>0; i--)
    {
        for (int j= height; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}