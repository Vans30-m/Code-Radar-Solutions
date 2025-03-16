#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int big=arr[0];
    for(int i=0;i<n;i++){
        if(big>arr[i]){
            big = arr[i];
        }
    }
    printf("%d ",arr[n]);
}