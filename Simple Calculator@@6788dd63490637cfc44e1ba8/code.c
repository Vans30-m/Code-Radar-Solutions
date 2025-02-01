#include <stdio.h>



int main() {
    int a,b;
    char str[100];
    scanf("%d %d",&a,&b);
    scanf("%s",&str);
    if(str=='+'){
        printf("%d",a+b);
    }
    else if (str=='-'){
        printf("%d",a-b);
    }
    else if (str=='/'){
        printf("%d",a/b);
    }
    else if (str=='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }
    return 0;
}