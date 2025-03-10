#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        // Print leading spaces
        for (int i = 0; i < n - j - 1; i++) {
            printf(" ");
        }
        
        // Print stars
        for (int i = 0; i < (2 * j) + 1; i++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
