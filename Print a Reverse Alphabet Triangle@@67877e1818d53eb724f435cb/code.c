// Your code here...
#include<stdio.h>
void print1(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}