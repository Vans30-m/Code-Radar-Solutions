#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>=1 && b%a==0){
        printf("Not Prime");
    }
    else if (a>=2){
        printf("Prime");
    }
    else{
        printf("Invalid");
    }
    return 0;
}