#include <stdio.h>



int main() {
    int num;
    scanf("%d",&num);
    for (int a; a<=num;a++){
        printf("Roll Number: %d",a);
    }
    char name;
    scanf("%c",&name);
    printf("Name: %c",name);
    float number;
    scanf("%f",&number);
    printf("Marks: %f",number);
    return 0;
}