#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char str;
    scanf("%c",&str);
    if(str='+'){
        printf("%d",a+b);
    }
    if(str='-'){
        printf("%d",a-b);
    }
    else if(str='/'){
        printf("%d",a/b);
    }
    else if(str='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }
    return 0;
}