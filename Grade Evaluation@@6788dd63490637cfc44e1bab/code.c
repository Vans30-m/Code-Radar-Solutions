#include <stdio.h>


int main() {
    char str[100];
    scanf("%s",&str);
    if (str=="A"){
        printf("Excellent");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}