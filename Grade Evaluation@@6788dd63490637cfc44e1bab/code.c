#include <stdio.h>

const char* grading(char grade)
{
    if (grade== 'A')
    {
        printf("Excellent");
    }
    else if (grade== 'B')
    {
        printf("Good");
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
        printf("Fail");
    }
    else
    {
        printf("Invalid grade");
    }
}

int main(void)
{
    char grade;
    printf("");
    scanf("%c", &grade);

    grading(grade);
}