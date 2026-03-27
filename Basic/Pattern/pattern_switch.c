#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice from given below in given numbers:\n");
    printf("1.Right angled triangle pattern \n");
    printf("2.Inverted right angled triangle pattern \n");
    printf("3.Pyramid pattern \n");
    printf("4.Inverted pyramid pattern \n");
    printf("5.Diamond pattern \n");
    printf("6.Number triangle pattern \n");
    printf("7.Floyd's traingle pattern \n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            int n1;
            printf("Enter the number of rows for right angled triangle pattern:\n");
            scanf("%d",&n1);
            for(int i=1;i<=n1;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        case 2:
        {
            int n2;
            printf("Enter the number of rows for inverted right angled triangle pattern:\n");
            scanf("%d",&n2);
            for(int i=n2;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        case 3:
        {
            int n3;
            printf("Enter the number of rows for pyramid pattern:\n");
            scanf("%d",&n3);
            for(int i=1;i<=n3;i++)
            {
                for(int j=1;j<=n3-i;j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        case 4:
        {
            int n4;
            printf("Enter the number of rows for inverted pyramid pattern:\n");
            scanf("%d",&n4);
            for(int i=n4;i>=1;i--)
            {
                for(int j=1;j<=n4-i;j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        case 5:
        {
            int n5;
            printf("Enter the number of rows for diamond pattern:\n");
            scanf("%d",&n5);
            for(int i=1;i<=n5;i++)
            {
                for(int j=1;j<=n5-i;j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            for(int i=n5-1;i>=1;i--)
            {
                for(int j=1;j<=n5-i;j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }   
        break;
        case 6:
        {
            int n6;
            printf("Enter the number of rows for number triangle pattern:\n");
            scanf("%d",&n6);
            for(int i=1;i<=n6;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        case 7:
        {
            int n7;
            printf("Enter the number of rows for Floyd's triangle pattern:\n");
            scanf("%d",&n7);
            int num = 1;
            for(int i=1;i<=n7;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d ",num);
                    num++;
                }
                printf("\n");
            }
            printf("Thank you for using this program\n");
        }
        break;
        default:        
        {
            printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }   
    }
    return 0;
}