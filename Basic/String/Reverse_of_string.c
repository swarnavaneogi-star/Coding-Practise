#include<stdio.h>
void main()
{
    char str[100];
    char revstr[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        revstr[j]=str[i];
        i--;
        j++;
    }
    revstr[j]='\0';
    printf("Reverse of the string is: %s",revstr);
    
}