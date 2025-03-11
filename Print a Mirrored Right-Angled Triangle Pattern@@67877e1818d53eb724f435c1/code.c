// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int x =1;x<=N;x++){
        for (int y=1;y<=N-x;y++){
            printf(" ");
        }
        for(int y=1;y<=(x);y++){
            printf("*");
        }
        printf("\n");
    }
}
