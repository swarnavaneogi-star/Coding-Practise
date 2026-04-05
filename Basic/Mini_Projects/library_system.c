// mini project on operations of library system
#include<stdio.h>
#include<string.h>
#define max 100 
typedef struct book 
{
    int id;
    char title[100];
    char author[100];
    int available;// 1 for available, 0 for not available
    int year ;
}book;
void add_book(book library[], int *count) 
{
    if (*count >= max) 
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    printf("Enter book ID: ");
    scanf("%d", &library[*count].id);
    printf("Enter book title: ");
    scanf(" %[^\n]", library[*count].title);
    printf("Enter book author: ");
    scanf(" %[^\n]", library[*count].author);
    printf("Enter publication year: ");
    scanf("%d", &library[*count].year);
    library[*count].available = 1; // Mark the book as available
    (*count)++;
    printf("Book added successfully!\n");
}
void display_books(book library[], int count) 
{
    if (count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    printf("Books in the library:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d, Title: %s, Author: %s, Year: %d, Available: %s\n",
               library[i].id, library[i].title, library[i].author,
               library[i].year, library[i].available ? "Yes" : "No");
    }
}
void search_book(book library[], int count) 
{
    if (count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    char title[100];
    printf("Enter book title to search: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < count; i++) 
    {
        if (strcmp(library[i].title, title) == 0) 
        {
            printf("Book found: ID: %d, Title: %s, Author: %s, Year: %d, Available: %s\n",
                   library[i].id, library[i].title, library[i].author,
                   library[i].year, library[i].available ? "Yes" : "No");
            return;
        }
    }
    printf("Book not found.\n");
}
void borrow_book(book library[], int count) 
{
    if (count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    char title[100];
    printf("Enter book title to borrow: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < count; i++) 
    {
        if (strcmp(library[i].title, title) == 0) 
        {
            if (library[i].available) 
            {
                library[i].available = 0; // Mark the book as not available
                printf("You have borrowed: %s\n", library[i].title);
            } else {
                printf("Sorry, this book is currently not available.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}
void return_book(book library[], int count) 
{
    if (count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    char title[100];
    printf("Enter book title to return: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < count; i++) 
    {
        if (strcmp(library[i].title, title) == 0) 
        {
            if (!library[i].available) 
            {
                library[i].available = 1; // Mark the book as available
                printf("You have returned: %s\n", library[i].title);
            } else {
                printf("This book was not borrowed.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}
void delete_book(book library[], int *count) 
{
    if (*count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    char title[100];
    printf("Enter book title to delete: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < *count; i++) 
    {
        if (strcmp(library[i].title, title) == 0) 
        {
            // Shift remaining books to fill the gap
            for (int j = i; j < *count - 1; j++) 
            {
                library[j] = library[j + 1];
            }
            (*count)--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}
void main() 
{
    book library[max];
    int count = 0;
    int choice;
    do {
        printf("\nLibrary System Menu:\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Borrow Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                add_book(library, &count);
                break;
            case 2:
                display_books(library, count);
                break;
            case 3:
                search_book(library, count);
                break;
            case 4:
                borrow_book(library, count);
                break;
            case 5:
                return_book(library, count);
                break;
            case 6:
                delete_book(library, &count);
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}