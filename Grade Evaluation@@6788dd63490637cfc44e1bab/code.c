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
    else
    {
        printf("Fail\n");
    }
}

int main(void)
{
    char grade;
    printf("");
    scanf("%c", &grade);

    printf("%c", grading(grade));

    return 0;
}