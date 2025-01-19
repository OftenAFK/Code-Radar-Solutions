#include <stdio.h>

int main(void)
{   
    char name[20], hobby[30];
    int age;

    printf("");
    scanf("%19s %i", name, &age);

    printf("");
    scanf("%29s", hobby);

    printf("Name: %s", name);
    printf("Age: %i", age);
    printf("Hobby: %s", hobby);

    return 0;
// such bad design damn 
}