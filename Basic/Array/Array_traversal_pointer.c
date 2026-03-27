#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    p = arr;

    printf("Array elements using pointer:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }


    int max = *p;

    for(i = 1; i < n; i++)
    {
        if(*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("\nMaximum element: %d\n", max);

    return 0;
}