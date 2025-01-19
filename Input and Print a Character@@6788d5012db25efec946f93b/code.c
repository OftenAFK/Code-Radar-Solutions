#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(void)
{
    char character;
    printf("");
    scanf("%s", &character);

    printf("You entered: %s", character);
}