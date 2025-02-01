#include <stdio.h>



int main() {
    // char str;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char str;
    scanf("%c",&str);
    switch(str){
        case'+':
            printf("%d",a+b);
            break;
        
        case'-':
            printf("%d",a-b);
            break;
        
    // }(str='+'){
    //     printf("%d",a+b);
    // }
    // else if(str='-'){
    //     printf("%d",a-b);
    // }
    // else if(str=='/'){
    //     printf("%d",a/b);
    // }
    // else if(str=='*'){
    //     printf("%d",a*b);
    // }
    // else{
    //     printf("error");
    }
    return 0;
}