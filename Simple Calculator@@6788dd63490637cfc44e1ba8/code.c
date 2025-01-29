#include <stdio.h>



int main() {
    int a,b;
    char op;
    scanf("%a %b",&a,&b);
    scanf("%c",&op);

    if (op=='+'){
        printf("%d",a+b);
    }
    else{
        printf("Error");
    }
    return 0;
}