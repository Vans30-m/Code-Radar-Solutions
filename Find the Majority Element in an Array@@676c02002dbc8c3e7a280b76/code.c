// Your code here...
#include<stdio.h>
int main(){
        int n;
    scanf("%d",&n);
    float arr[n];
    for (int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]/i>=1.00){
            printf("%f",arr[i]);
        }
        else {
            printf("%f",arr[i]);
        }
    }
}
// if (arr[i]/i==)