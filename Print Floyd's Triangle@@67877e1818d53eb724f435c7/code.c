// Your code here...
#include<stdio.h>
void print(int n){
    int x = 1;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            printf("%d",x++);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf(n);
}