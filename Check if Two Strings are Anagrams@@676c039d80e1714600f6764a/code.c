#include <stdio.h>

int anagram(char arr1[], char arr2[])
{
    char temp[50];
    int length_of_first= 0, length_of_second= 0;

    for (int i= 0; arr1[i]!= '\0'; i++)
    {
        length_of_first++;
    }

    for (int i=0; arr2[i]!= '\0'; i++)
    {
        length_of_second++;
    }

    int temp2= length_of_first;
    if (length_of_first== length_of_second)
    {
        for (int i= 0; i< length_of_first; i++)
        {
            for (int j= 0; j< length_of_second; j++)
            {
                if (arr1[i]== arr2[j])
                {
                    temp2--;
                }
            }
        }
        
        if (temp!= 0)
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char input_1[50], input_2[50];
    scanf("%s", input_1);
    scanf("%s", input_2);

    if (anagram(input_1, input_2))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}