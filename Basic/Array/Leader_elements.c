#include <stdio.h>

int main() {
    int arr[100], n, i;
    int leaders[100], k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[n - 1];
    leaders[k++] = max;

    // Traverse from right to left
    for(i = n - 2; i >= 0; i--) {
        if(arr[i] > max) {
            max = arr[i];
            leaders[k++] = arr[i];
        }
    }

    // Print leaders in correct order
    printf("Leaders in array:\n");
    for(i = k - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}