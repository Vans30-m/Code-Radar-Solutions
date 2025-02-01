#include <stdio.h>

int main() {
   int N;
   scanf("%d",&N);
   float Area = 1.00;
    float Per = 1.00;
   for (int x=1;x<=N;x++){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Rectangle %d: ",x);
    printf("Area = %0.2f, ",Area=a*b);
    printf("Perimeter = %0.2f\n",Per=2*(a+b));
   }
    return 0;
}