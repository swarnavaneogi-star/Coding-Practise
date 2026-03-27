#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int ar[n];
    printf("Enter the elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int lar = ar[0], slar = ar[0];

    for (int i = 1; i < n; i++)
    {
        if (ar[i] > lar)
        {
            slar = lar;
            lar = ar[i];
        }
        else if (ar[i] > slar && ar[i] != lar)
        {
            slar = ar[i];
        }
    }

    printf("The largest element is %d\n", lar);
    printf("The second largest element is %d\n", slar);

    return 0;
}