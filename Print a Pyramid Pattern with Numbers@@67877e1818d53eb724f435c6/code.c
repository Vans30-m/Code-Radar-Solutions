// Your code here...
#include<stdio.h>
void print1(int n){
    for (int i=n-1;i>=0;i--){
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        for(int j=0;j<2*n+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print1(n);
}