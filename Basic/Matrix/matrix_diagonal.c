// Program to find sum of diagonal elements of a matrix in C
#include<stdio.h>
int main ()
{
    int r,c,dsum=0;
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d %d",&r,&c);
    if (r!=c)
    {
        printf("Diagonal of the matrix not possible !! ");
        return 0;
    }
    int a[r][c];
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
    printf("The diagonal elements of the matrix are :\n");
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) 
        {
            if (i==j)
            {
                printf("%d ",a[i][j]);
                dsum += a[i][j];
            }
        }
    }
    printf("\nThe sum of the diagonal elements is = %d\n",dsum);    
    return 0;

}