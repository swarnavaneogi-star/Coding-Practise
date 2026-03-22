#include<stdio.h>

typedef struct book {
    char bookname[50];
    char authorname[50];
    char publisher[50];
    float price;
    int pages;
    int ISBNnum;
}book;

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

     book b[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter the details of book %d\n", i + 1);

        printf("Enter the book name -> ");
        scanf(" %[^\n]s", b[i].bookname);

        printf("Enter the author name -> ");
        scanf(" %[^\n]s", b[i].authorname);

        printf("Enter the publisher name -> ");
        scanf(" %[^\n]s", b[i].publisher);

        printf("Enter the price -> ");
        scanf("%f", &b[i].price);

        printf("Enter the number of pages -> ");
        scanf("%d", &b[i].pages);

        printf("Enter the ISBN number -> ");
        scanf("%d", &b[i].ISBNnum);
    }

    printf("\n DISPLAYING THE REGISTERED BOOK DETAILS \n");
    printf("BookName\t\tAuthor\t\t\tPublisher\t\t\tPrice\t\tPages\tISBN\n");

    for(int i = 0; i < n; i++) 
    {
        printf("%s\t%s\t%s\t\t%.2f\t\t%d\t%d\n",
               b[i].bookname,
               b[i].authorname,
               b[i].publisher,
               b[i].price,
               b[i].pages,
               b[i].ISBNnum);
    }

    return 0;
}
