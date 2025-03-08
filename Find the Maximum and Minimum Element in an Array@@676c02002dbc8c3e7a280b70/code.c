#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (arr[i]>=1000000){
            printf("%d",arr[i]);
        }
        else if (arr[i]<=100000){
            printf("%d",arr[i]);
        }
    }
}