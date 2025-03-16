// Your code here...
#include<stdio.h>
void print1(int n){
    int x =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int z=1;z<=i;z++){
            printf("%d\n",x++);
        }
    }
}