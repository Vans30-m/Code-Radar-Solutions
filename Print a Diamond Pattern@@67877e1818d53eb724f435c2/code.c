#include <stdio.h>
int n;
scanf("%d",&n);
int main(){
    for (int i =0;i<n-(2*(i+1));i++){
        printf(" ");
    }
    for (int i =0;i<(n);i++){
        printf("*");
    }
    for(int i=(n+2);i<n-(2*(i+1));i--){
        printf(" ");
    }
}