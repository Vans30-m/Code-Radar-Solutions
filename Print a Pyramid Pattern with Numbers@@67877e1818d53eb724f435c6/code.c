// Your code here...
#include<stdio.h>
void print1(int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<=n;j++){
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