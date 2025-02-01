#include <stdio.h>



int main() {
    char str;
    scanf("%c",&str);
    int a,b;
    scanf("%d %d",&a,&b);

    if(str='+'){
        printf("%d",a+b);
    }
    else if(str='-'){
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