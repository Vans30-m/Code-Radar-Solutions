// Your code here...
#include<stdio.h>
void print1(int n){
    char ch='A';
    char ch1='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(i%2==0){
                printf("%c ",ch++);
            }
            else{
                printf("%c ",ch1++);
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print1(n);
}