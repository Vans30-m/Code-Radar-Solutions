// Your code here...
#include<stdio.h>
void print1(int n){
    int x =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int z=1;z<=i;z++){
            printf("%d",x);
        }
        printf("\n");
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    print1(n);
}