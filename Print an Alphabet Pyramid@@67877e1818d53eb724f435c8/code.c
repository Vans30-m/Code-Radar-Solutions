// Your code here...
#include<stdio.h>
void print1(n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n;x++){
            printf("%c ",c++);
        }
        printf("\n");
    }
}