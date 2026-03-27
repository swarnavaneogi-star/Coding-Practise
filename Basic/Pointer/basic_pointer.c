#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);


    int *p = &n;

    printf("Value using variable: %d\n", n);
    printf("Address using & operator: %p\n", (void*)&n);
    printf("Value using pointer: %d\n", *p);
    printf("Address stored in pointer: %p\n", (void*)p);

    return 0;
}