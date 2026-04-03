// Program to perform subtraction of two matrices in C
#include<stdio.h>
int main ()
{
    int r1,r2,c1,c2;
    printf("Enter the rows and columns of first  matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and columns of the second matrix :");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
    {
        printf("Matrix subtraction not possible !!");
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
    printf("\n");
    for (int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++) 
        {
            printf("Enter the element of the second matrix [%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    // performing subtraction of two matrix
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            res[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Displaying final matrix :\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}