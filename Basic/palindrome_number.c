#include<stdio.h>
int main() 
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int digit,rev=0;
    int og=n;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(og==rev)
    {
        printf("The number %d is a palindrome ",og);
    }
    else {
        printf("The number %d is not a palindrome ",og);
    }
    return  0;
}
