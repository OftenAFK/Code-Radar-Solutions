#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(void)
{
    char character[2];
    printf("");
    scanf("%2s", character);

    printf("You entered: %2s", character);
}