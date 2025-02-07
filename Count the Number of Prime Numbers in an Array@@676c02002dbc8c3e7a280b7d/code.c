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
        if (a[i]%a[i]==0 && a[i]%1==0 && a[i]>=2 ){
            count = count+1;
            
            }
        else{
            continue;
        }
    }
    printf("%d",count);
    return 0;
}
