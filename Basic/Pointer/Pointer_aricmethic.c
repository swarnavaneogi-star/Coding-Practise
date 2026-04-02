#include<stdio.h>
int main()
{
    int n;
    printf("Enter a the limit :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    printf("The first element address of the array is = %d\n",&arr[0]);
    printf("The second element address of the array is = %d\n",&arr[1]);
    printf("The third element address of the array is = %d\n",&arr[2]);
    printf("The fourth element address of the array is = %d\n",&arr[3]);
    printf("The first element of the array is = %d\n",*p);
    printf("The second element of the array is =%d \n",*(p+1));
    printf("The third element of the array is =%d \n",*(&arr[0]+2));
    return 0;
}