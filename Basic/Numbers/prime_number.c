#include<stdio.h>
int main () 
{
    int n,flag=1,N;
    printf("Enter a the limit  :");
    scanf("%d",&N);
    for(int i=1;i<=N;i++) 
    {
    for(int i=2;i<=n/2;i++)
    {
        if (n%i==0) 
        flag =0;
        break;
    }

    if (flag==1)
    printf(" %d is a prime number :",n);
    else 
    printf("%d number is not a prime number :",n);
    return 0;
}

}
