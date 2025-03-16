// Your code here...
#include<stdio.h>
int main(){
    int x = 1;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            printf("%d ",x++);
        }
        printf("\n");
    }
}