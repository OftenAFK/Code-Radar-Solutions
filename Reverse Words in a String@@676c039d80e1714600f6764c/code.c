#include <stdio.h>

void reverse(char arr1[], char arr2[])
{
    char temp1[50], temp2[50];
    int length_of_arr1= 0, length_of_arr2= 0;

    for (int i= 0; arr1[i]!= '\0'; i++)
    {
        length_of_arr1++;
    }
    for (int i= 0; arr2[i]!= '\0'; i++)
    {
        length_of_arr2++;
    }
    
    for (int i= 0; arr1[i]!= '\0'; i++)
    {
        temp1[i]= arr1[length_of_arr1- i- 1];
    }
    for (int i= 0; arr2[i]!= '\0'; i++)
    {
        temp2[i]= arr2[length_of_arr2- i- 1];
    }

    printf("%s %s", temp1, temp2);
}

int main(void)
{
    char first[50], second[50];
    scanf("%49s %49s", first, second);

    reverse(first, second);

    return 0;
}