#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f %f",&a,&b);
    printf("Product: %0.2f",a*b);
    return 0;
}