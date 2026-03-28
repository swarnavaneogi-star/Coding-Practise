#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int a=0,b=1,c=1,temp;
    printf("Tribonacci Series:");
    for (int i=1;i<=n;i++)
    {
        printf("%d ",a);
        temp=a+b+c;
        a=b;
        b=c;
        c=temp;
    }
    return 0;
}