#include <stdio.h>
int isprime(num);
    if (num%2==0){
        return 1;
    }
    else {
        return 0;
    }

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
    }
    return 0;
}