// Your code here...
#include<stdio.h>
void print1(int n){
    for (int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            printf(" ");
        }
        for(int j=0;j<=n;j++){
            printf("*");
        }
        for(int j=0;j<=n;j++){
            printf(" ");
        }
    }
}