#include <stdio.h>              /* TAKING INPUT OF LENGTH ARRAY AND PRINTING IT */
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int j;
    scanf("%d",&j);
    int a[j];
    int count;
    for(int i=0;i<j;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<j;i++){
        for (int m=2;m*m<=a[i];m++){
            if (a[j]%m==0){
                return 0;
            }
            count = count+1;
            }
        else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}
