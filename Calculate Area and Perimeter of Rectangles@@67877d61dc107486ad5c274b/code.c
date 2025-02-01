#include <stdio.h>

int main() {
   int N;
   scanf("%d",&N);

   for (int x=1;x<=N;x++){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Area = %0.2f\n",a*b);
    printf("Perimeter = %0.2f",2*(a+b));
   }
    return 0;
}