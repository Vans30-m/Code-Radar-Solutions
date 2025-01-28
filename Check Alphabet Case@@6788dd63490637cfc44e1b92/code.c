#include <stdio.h>



int main() {
    char abc;
    scanf("%c",&abc);
    if (abc>='A' && abc<='Z'){
        printf("Uppercase");
    }
    else if (abc>='a' && abc<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}