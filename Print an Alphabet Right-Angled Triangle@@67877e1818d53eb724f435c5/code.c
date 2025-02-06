#include <stdio.h>
int main() {
    int N;
    char c='A';
    scanf("%d",&N);

    for (int x=1;x<=N;x++){
        for (int y=1;y<=x;y++){
            printf("%c ",c);
        }
        c++;
        printf("\n");
    }
    return 0;
}