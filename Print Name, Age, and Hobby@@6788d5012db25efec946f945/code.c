#include <stdio.h>

int main(void)
{   
    char name[20], hobby[30];
    int age;

    printf("");
    scanf("%19s %i %29s", name, &age, hobby);

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
// such bad design damn 
}