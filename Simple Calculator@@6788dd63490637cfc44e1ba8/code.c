#include <stdio.h>



int main() {
    // char str;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char str;
    scanf("%c",&str);
    if(str=='+'){
        printf("%d",a+b);
    }
    else if(str='-'){
        printf("%d",a-b);
    }
    else if(str=='/'){
        printf("%d",a/b);
    }
    else if(str=='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }
    return 0;
}