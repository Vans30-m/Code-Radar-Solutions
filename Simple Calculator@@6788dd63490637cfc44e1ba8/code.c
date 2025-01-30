#include <stdio.h>



int main() {
    int a,b;
    char str;
    scanf("%a %b",&a,&b);
    scanf("%c",&str);

    if (str=='+'){
        printf("%d",a+b);
    }
    else{
        printf("Error");
    }
    return 0;
}