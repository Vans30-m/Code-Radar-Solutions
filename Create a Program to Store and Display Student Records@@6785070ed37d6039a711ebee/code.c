#include <stdio.h>



int main() {
    int num;
    scanf("%d",&num);
    for (int a=1; a<=num;a++){
        printf("Roll Number: %d\n",a);
        char name[100];
        scanf("%s",&name);
        printf("Name: %s\n",name);
        float number;
        scanf("%f",&number);
        printf("Marks: %0.2f",number);    
    }
    return 0;
}