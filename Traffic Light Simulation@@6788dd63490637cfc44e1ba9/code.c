#include <stdio.h>

const char* traffic_lights(char colour)
{
    if (colour== 'R')
    {
        printf("Stop\n");
    }
    else if (colour== 'Y')
    {
        printf("Ready\n");
    }
    else
    {
        printf("Go\n");
    }
}

int main(void)
{
    char colour;
    printf("");
    scanf("%c", &colour);

    traffic_lights(colour);

    return 0;
}