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
    for (int x = 2; x*x <= a[i]; x++){
        if (a[i] % x == 0 && a[i]>=0){
            count = count+1;
            }
        else{
            continue;
        }
        }

    }
    printf("%d",count);
    return 0;
}
