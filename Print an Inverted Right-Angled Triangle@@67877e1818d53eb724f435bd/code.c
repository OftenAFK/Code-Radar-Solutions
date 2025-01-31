#include <stdio.h>

int main(void)
{
    int height;
    printf("");
    scanf("%i", &height);

    for (int i= height; i>0; i--)
    {   
        for (int j= i; j>0; j--)
        {
            printf("*");
        }
    }

    return 0;
}