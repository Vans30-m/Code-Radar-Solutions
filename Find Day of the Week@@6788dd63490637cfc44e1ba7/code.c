#include <stdio.h>



int main() {
    int Day;
    scanf("%d",&Day);
    switch(Day){
        case 1:{
            printf("Monday");
        }
        case 2:{
            printf("Tuesday");
        }
        case 3:{
            printf("Wednesday");
        }
        case 4:{
            printf("Thursday");
        }
        case 5:{
            printf("Friday");
        }
        case 6:{
            printf("Saturday");
        }
        case 7:{
            printf("Sunday");
        }
    }
    return 0;
}