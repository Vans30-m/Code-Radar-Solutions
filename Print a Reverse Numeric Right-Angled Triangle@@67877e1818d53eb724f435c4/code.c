// Your code here...
#include <stdio.h>
void print1(int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%d",count++);
        }
        for(int j=0;j<i;j++){
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