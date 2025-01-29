#include <stdio.h>



int main() {
    int a,result;
    result=0;
    scanf("%d",&a);
    for (int n=1; n<=a;n++){
        result=result+n;
    }
    printf("%d",result);
    return 0;
}