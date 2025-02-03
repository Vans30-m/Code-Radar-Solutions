#include <stdio.h>



int main() {
    double a,b;
    char str;
    scanf("%lf %lf %c",&a,&b,&str);
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