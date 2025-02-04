#include <stdio.h>

const char* traffic_lights(colour)
{
    if (colour== 'R')
    {
        return "Stop";
    }
    else if (colour== 'Y')
    {
        return "Ready";
    }
    else
    {
        return "Go"
    }
}

int main(void)
{
    char colour;
    printf("");
    scanf("%c", &colour);

    printf("%c", traffic_lights(colour));

    return 0;
}