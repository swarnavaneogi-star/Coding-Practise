#include<stdio.h>
typedef struct product
{
    char product_name[50];
    int id;
    float price;
}product;
int main()
{
    int quantity;
    float total=0;
    printf("Enter the number of products: ");
     scanf("%d", &quantity);
     product prod[quantity];
     for(int i = 0; i < quantity; i++)
     {
          printf("\nEnter the details of product %d\n", i + 1);
          printf("Enter the name -> ");
          scanf(" %[^\n]s", prod[i].product_name);
          printf("Enter the id -> ");
          scanf("%d", &prod[i].id);
          printf("Enter the price -> ");
          scanf("%f", &prod[i].price);
     }
     float max = prod[0].price;
     int max_index = 0;
     for(int i = 1; i < quantity; i++)
     {
          if(prod[i].price > max)
          {
                max = prod[i].price;
                max_index = i;
          }
     }
     total = quantity*prod[max_index].price;
     printf("\n Printing product names with highest price and details \n");
     printf("Name\t\tID\tPrice\n");
     printf("%s\t%d\t%.2f\n", prod[max_index].product_name, prod[max_index].id, prod[max_index].price);
     printf("Total value of the highest priced product: %.2f\n", total);
     return 0;
}
