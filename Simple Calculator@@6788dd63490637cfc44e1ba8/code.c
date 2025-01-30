#include <stdio.h>



int main() {
    int a,b;
    char str;
    scanf("%a %b",&a,&b);
    scanf("%c",&str);

    switch(str){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        
    }
    return 0;
}