#include <stdio.h>

int main() {
    char str[200];
    int i, count = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            count++;
        }
    }

    printf("Number of words = %d", count);

    return 0;
}
