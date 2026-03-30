#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100];
    int asc[256]={0};
    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        asc[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        asc[str2[i]]--;
    }
    int flag=1;
    for(int i=0;i<256;i++)
    {
        if(asc[i]!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("The strings are anagrams.");
    }
    else
    {
        printf("The strings are not anagrams.");
    }
}