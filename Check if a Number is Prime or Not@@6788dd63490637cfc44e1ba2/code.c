#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    if (a>=1 && a%2==0 || a%3==0){
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