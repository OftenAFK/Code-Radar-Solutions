#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(void)
{
    float number;
    printf("");
    scanf("%f", &number);

    printf("You entered: %.2f\n", number);
}