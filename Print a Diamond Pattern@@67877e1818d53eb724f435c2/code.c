#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int j = 0;j<n;j++){
        for (int i =0;i<n-i-1;i++){
            printf(" ");
        }
        for (int i =0;i<(2*i)+1;i++){
            printf("*");
        }
        for(int i=(n+2);i<n-i-1;i--){
            printf(" ");
        }
    }
}