#include <stdio.h>



int main() {
    int Day;
    scanf("%d",&Day);

    if (Day==1){
        printf("Monday");
    }
        
    else if (Day==2){
        printf("Tuesday");
    }
        
    else if (Day==3){
        printf("Wednesday");
    }
        
    else if (Day==4){
        printf("Thursday");
    }
        
    else if (Day==5){
        printf("Friday");
    }
        
    else if (Day==6){
        printf("Saturday");
    }
        
    else if (Day==7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}