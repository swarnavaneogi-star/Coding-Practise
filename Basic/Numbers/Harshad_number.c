#include<stdio.h>
void main ()

{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=0,digit;
    int temp=n;
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    if(n%sum==0)
    {
        printf("%d is a Harshad number",n);
    }
    else
    {
        printf("%d is not a Harshad number",n);
    }

}