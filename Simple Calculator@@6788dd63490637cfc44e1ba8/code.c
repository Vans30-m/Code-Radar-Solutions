#include <stdio.h>



int main() {
    int a,b;
    char str;
    scanf("%d %d",&a,&b);
    scanf("%c",&str);
    if(str=='+'||str=='-'||str=='*'||str=='/'){ 
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
    }
    else{
        printf("error");
    }
    return 0;
}