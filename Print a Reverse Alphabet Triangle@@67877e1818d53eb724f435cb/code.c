#include <stdio.h>
void print1(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("%c ",ch++);
        }
        char ch = 'A';
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print1(n);
}