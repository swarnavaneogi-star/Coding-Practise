#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    int arr1[n1],arr2[n2],merged[n1+n2];
    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n1;i++)
    {
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        merged[n1+i]=arr2[i];
    }
    printf("Merged array:\n");
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",merged[i]);
    }
    printf("\n");
}