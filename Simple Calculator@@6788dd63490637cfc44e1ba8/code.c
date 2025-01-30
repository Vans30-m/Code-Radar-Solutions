#include <stdio.h>



int main() {
    int a,b;
    char str;
    scanf("%d %d",&a,&b);
    scanf("%c",&str);

    switch(str){
        case str=='+':
        printf("%d",a+b);
        break;
        case str=='-':
        printf("%d",a-b);
        break;
        case str=='/':
        printf("%d",a/b);
        break;
        case str=='*':
        printf("%d",a*b);
        break;
    }
    return 0;
}