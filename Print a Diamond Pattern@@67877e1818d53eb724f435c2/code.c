#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half (pyramid)
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < (2 * i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (inverted pyramid)
    for (int i = n - 2; i >= 0; i--) {  // Start from n-2 to avoid repeating middle row
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < (2 * i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
