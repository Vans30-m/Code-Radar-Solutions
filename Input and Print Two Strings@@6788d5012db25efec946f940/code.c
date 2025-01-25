#include <stdio.h>



int main() {
    char a[100];
    char b[100];
    scanf("%[^\n]%*c",&a);
    scanf("%[^\n]%*c",&b);
    printf("You entered: %s and %s",a,b);
    return 0;
}