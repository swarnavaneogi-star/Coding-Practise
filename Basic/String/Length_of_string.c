#include<stdio.h>
void main ()
{
    int i=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("Length of the string is: %d",i-1);
    printf("\n");
}