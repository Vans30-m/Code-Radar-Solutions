// Your code here...
#include<stdio.h>
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int z=1;z<=2*i+1;z++){
            printf("%d ",z);
        }
        for(int a=1;a<=n-i;a++){
            printf(" ");
        }
        printf("\n");
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    print1(n);
}