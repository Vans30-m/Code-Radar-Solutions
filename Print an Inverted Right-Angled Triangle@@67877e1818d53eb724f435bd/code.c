#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int x=1;x<=N;x++){
        for (int y=1;y<=x;y++){
            printf("\n");
        }
        printf("*");
    }
    return 0;
}