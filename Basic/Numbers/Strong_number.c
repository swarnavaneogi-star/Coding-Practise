#include<stdio.h>
void main ()
{
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    int temp = n,digit,fact,sum=0;
    while(temp>0)
    {
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is a Strong number",n);
    }
    else
    {
        printf("%d is not a Strong number",n);

    }
}