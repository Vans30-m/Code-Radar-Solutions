#include <stdio.h>



int main() {
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    char str;
    scanf("%c",&str);
    if (str='+'){
        printf("%d",a+b);
    }
    else if(str='-'){
        printf("%d",a-b);
    }
    else if(str=='/'){
        if (b==0){
            printf("error");
        }
        else{
        printf("%d",a/b);
        }
    }
    else if(str=='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }
    return 0;
}