#include <stdio.h>

const char* grading(char grade)
{
    if (grade== 'A')
    {
        printf("Excellent\n");
    }
    else if (grade== 'B')
    {
        printf("Good\n");
    }
    else if (grade== 'C')
    {
        printf("Average\n");
    }
    else if (grade== 'D')
    {
        printf("Below Average\n");
    }
    else if (grade== 'F')
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid grade\n");
    }
}

int main(void)
{
    char grade;
    printf("");
    scanf("%c", &grade);

    grading(grade);
}