#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100];
    printf("Enter a string ");
    scanf("%[^\n]s", str1);
    int asc[256]={0};
    for (int i=0;str1[i]!='\0';i++)
    {
        asc[str1[i]]++;
    }
    for (int i=0;str1[i]!='\0';i++)
    {
        if (asc[str1[i]] == 1)
        {
            printf("The first non-repeating character is: %c\n", str1[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}