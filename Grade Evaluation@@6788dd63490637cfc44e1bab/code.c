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
        printf("Average");
    }
    else if (grade== 'D')
    {
        printf("Below Average");
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

    printf("%c", grading(grade));
}