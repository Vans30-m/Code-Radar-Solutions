#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    for (int x=1;x<=N;x++){
        for(int y=1;y<=x;y++){
            printf(" ");
        }
        for (int z=1;z<=N+1;z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}