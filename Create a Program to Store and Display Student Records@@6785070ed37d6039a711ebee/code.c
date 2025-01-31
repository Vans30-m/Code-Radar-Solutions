#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    for (int a=1; a<=num;a++){
        int x;
        scanf("%d",&x);
        printf("Roll Number: %d, ",x);
        char name[100];
        scanf("%s",&name);
        printf("Name: %s, ",name);
        float number;
        scanf("%f",&number);
        printf("Marks: %0.2f",number);    
    }
    return 0;
}