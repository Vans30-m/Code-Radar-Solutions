// Your code here...
#include <stdio.h>
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if (j%2==0){
                printf("2 ");
            }
            else{
                printf("1 ");
            }
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