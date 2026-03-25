#include<stdio.h>

int main ()
{
    int choice, arr[100], key, n=0, found;
    char cont;

    do
    {
        printf("\n===== ARRAY TOOLKIT =====\n");
        printf("1.Insert elements\n");
        printf("2.Display array\n");
        printf("3.Search element\n");
        printf("4.Find largest & smallest\n");
        printf("5.Reverse array\n");
        printf("6.Sort array\n");
        printf("7.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d",&n);

                for(int i=0;i<n;i++)
                {
                    printf("Enter element %d: ",i+1);
                    scanf("%d",&arr[i]);
                }
                break;

            case 2:
                if(n==0)
                {
                    printf("Array is empty\n");
                    break;
                }
                for(int i=0;i<n;i++)
                    printf("%d ",arr[i]);
                printf("\n");
                break;

            case 3:
                if(n==0)
                {
                    printf("Array is empty\n");
                    break;
                }
                printf("Enter element to search: ");
                scanf("%d",&key);

                found=0;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        printf("Found at position %d\n",i+1);
                        found=1;
                        break;
                    }
                }
                if(!found) printf("Not found\n");
                break;

            case 4:
                if(n==0)
                {
                    printf("Array is empty\n");
                    break;
                }
                int max=arr[0], min=arr[0];
                for(int i=1;i<n;i++)
                {
                    if(arr[i]>max) max=arr[i];
                    if(arr[i]<min) min=arr[i];
                }
                printf("Max = %d, Min = %d\n",max,min);
                break;

            case 5:
                if(n==0)
                {
                    printf("Array is empty\n");
                    break;
                }
                for(int i=n-1;i>=0;i--)
                    printf("%d ",arr[i]);
                printf("\n");
                break;

            case 6:
                if(n==0)
                {
                    printf("Array is empty\n");
                    break;
                }
                for(int i=0;i<n-1;i++)
                {
                    for(int j=0;j<n-i-1;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            int temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
                printf("Sorted successfully!\n");
                 printf("The elements of the array in the ascending order are:\n");
                for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c",&cont);

    } while(cont=='y' || cont=='Y');

    printf("Program ended.\n");
    return 0;
}