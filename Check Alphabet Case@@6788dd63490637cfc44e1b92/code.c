#include <stdio.h>



int main() {
    char abc;
    scanf("%c",&abc);
    if (abc>'A' && abc<'Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}