// Program to find transpose of a matrix in C
#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d %d",&r,&c);
    int a[r][c],t[c][r];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) 
        {
            printf("Enter the element of the matrix [%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    // displaying original matrix
    printf("Displaying original matrix :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // performing transpose of the matrix
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("Displaying final matrix :\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}