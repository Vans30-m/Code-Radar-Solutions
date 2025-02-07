#include <stdio.h>              /* TAKING INPUT OF LENGTH ARRAY AND PRINTING IT */
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int j;
    scanf("%d",&j);
    int a[j];
    for(int i=0;i<j;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<j;i++){
        if (a[i]!=2 && a[i]%2!=0){
            printf("%d\n",i);
            }
        else{
            continue;
        }
    }
    return 0;
}
