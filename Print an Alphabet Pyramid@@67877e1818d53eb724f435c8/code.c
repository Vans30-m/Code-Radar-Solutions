// Your code here...
#include<stdio.h>
void print1(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int x=1;x<=i;x++){
            printf("%c ",c);c++;
        }
        
        printf("\n");
    }
}
int main(){
    int n;scanf("%d",&n);print1(n);
}