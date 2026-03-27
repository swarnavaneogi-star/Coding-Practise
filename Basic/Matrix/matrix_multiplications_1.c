#include<stdio.h>
# define MULTTIPLY(a,b)((a)*(b))
int main () 
{
    int r1,r2,c1,c2;
    printf("Enter the rows and columns of first  matrix ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and columns of the second matrix :");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication possible !!");
        return 0;
    }
    int a[r1][c1],b[r2][c2],res[r1][c2];
    for (int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++) 
        {
            printf("Enter the element of the first matrix [%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++) 
        {
            printf("Enter the element of the second matrix [%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            res[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for (int k=0;k<c1;k++)
            {
                res[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }
    printf("Displaying final matrix :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

