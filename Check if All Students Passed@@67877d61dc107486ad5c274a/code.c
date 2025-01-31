#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int num=1;a<=num;num++){
        int roll;
        scanf("%d",&roll);
        char name[100];
        scanf("%s",name);
        float marks;
        scanf("%f",&marks);
        if (marks>=50){
            printf("All Passed");
        }
        else{
            printf("Not All Passed");
        }
    }
    return 0;
}