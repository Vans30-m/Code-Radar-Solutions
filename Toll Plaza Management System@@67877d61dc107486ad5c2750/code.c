#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    for (int x=1;x>=N;x++){
        char str[100];
        scanf("%s",&str);
        char veh;
        scanf("%c",&veh);
        int toll;
        scanf("%d",&toll);
        printf("Cars: %0.2f, Trucks: 0.2f, Bikes: %0.2f",toll,toll,toll);
    }
    return 0;
}