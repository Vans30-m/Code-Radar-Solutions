// Your code here...
#include<stdio.h>
void print1(int n){
    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<(2*i+1);j++){
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