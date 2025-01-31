#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    float total_marks;
    for(int x=1;number<=x;x++){
        int roll;
        scanf("%d",&roll);
        char name[100];
        scanf("%s",name);
        float n;
        scanf("%f",&n);
        total_marks+=n;
    }
    printf("Average: %0.2f",total_marks/x);
    return 0;
}