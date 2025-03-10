#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("*");
    }
    for(int i=0;i<n-1;i++){
        printf(" ");
    }
    for(int i=0;i<n;i++){
        printf("*");
    }
}