#include <stdio.h>

int main() {
    int i, j;
    char c = 'a';

    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c ", c);
            c++;
        }
        c = 'a';  // Reset character to 'a' for the next row
        printf("\n");
    }

    return 0;
}
