#include <stdio.h>

int main(void)
{
    int numbers[5];
    int n= 0, inputs;

    while(scanf("%i", &inputs)== 1)
    {
        numbers[n++]= inputs;
    }

    int first= numbers[0];
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > first)
        {
            first= numbers[i];
        }
    }
    printf("%i\n", first);

    return 0;
}