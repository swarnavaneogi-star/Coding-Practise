// C program to demonstrate pointer to function
#include<stdio.h>
int add(int a, int b)// declaring function to be used as pointer
{
    return a+b;
}
int substract(int a, int b)// declaring function to be used as pointer
{
    return a-b;
}
int multiply(int a, int b)// declaring function to be used as pointer
{
    return a*b;
}
float divide(int a, int b)// declaring function to be used as pointer
{
    if (b!=0)
        return (float) a/b;
    else
    {
        printf("Division by zero is not allowed !!\n");
        return 0; // Return 0 or handle as needed
    }
}
int main ()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    // declaring pointer to function
    int(*p)(int,int);
    float(*p_div)(int,int); // separate pointer for divide function since it returns float
    // pointing to add function
    p= &add;
    printf("The sum of %d and %d is = %d\n",a,b,p(a,b));
    // pointing to substract function
    p= &substract;
    printf("The difference of %d and %d is = %d\n",a,b,p(a,b));
    // pointing to multiply function
    p= &multiply;
    printf("The product of %d and %d is = %d\n",a,b,p(a,b));
    // pointing to divide function
    p_div= &divide;
    printf("The quotient of %d and %d is = %.2f\n",a,b,p_div(a,b));
    return 0;
}
