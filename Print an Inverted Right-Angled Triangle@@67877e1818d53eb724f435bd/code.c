#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int x=1;x<=N;x++){
        for (int y=N;y>=x;y--){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}