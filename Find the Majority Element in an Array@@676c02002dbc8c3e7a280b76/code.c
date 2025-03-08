// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]/i>=1.00){
            printf("%d",arr[i]);
            break;
        }
        else {
            printf("-1");
        }
    }
}
// if (arr[i]/i==)