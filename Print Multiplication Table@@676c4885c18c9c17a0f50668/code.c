#include <stdio.h>



int main() {
    int number;
    scanf("%d",&number);
    for (int numbers=0;numbers<=10;numbers++){
        printf("%d x %d = %d\n",number,numbers,number*numbers);
    }
    return 0;
}