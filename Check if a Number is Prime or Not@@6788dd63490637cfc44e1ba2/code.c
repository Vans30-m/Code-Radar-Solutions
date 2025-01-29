#include <stdio.h>



int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    if (a>=1 && a%n==0){
        printf("Not Prime");
    }
    else if (a>=1){
        printf("Prime");
    }
    else{
        printf("Invalid");
    }
    return 0;
}