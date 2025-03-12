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
void print1(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("%c ",ch++);
        }
        char ch = 'A';
        printf("\n");
    }
}
