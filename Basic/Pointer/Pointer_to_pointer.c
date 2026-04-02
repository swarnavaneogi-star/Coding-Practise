#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int *ptr=&n;
    int **dptr=&ptr;
    // accsesing the value of n using pointer to pointer
    printf("\n------Acessing the value ---------\n");
    printf("Direct value of n =%d \n",n);
    printf("Value of n using pointer =%d \n",*ptr);
    printf("Value of n using pointer to pointer =%d \n",**dptr);
    // accsesing the address of n using pointer to pointer
    printf("\n------Acessing the address ---------\n");
    printf("Address of n  = %p \n",&n);
    printf("Address stored in ptr  =%p \n",ptr);
    printf("Address of ptr = %p \n",&ptr);
    printf("Address stored in dptr = %p \n",dptr);
    printf("Address of dptr = %p \n",&dptr);
    // modifying the value using double pointer 
    printf("\n------Modifying the value using double pointer ---------\n"); 
    printf("Original value of x     = %d\n", n);
    **dptr = **dptr * 2;
    printf("After doubling via dptr = %d\n", n);

   return 0;
}