#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(void)
{
    char character;
    printf("");
    scanf("%c", &character);

    printf("You entered: %c", character);
}