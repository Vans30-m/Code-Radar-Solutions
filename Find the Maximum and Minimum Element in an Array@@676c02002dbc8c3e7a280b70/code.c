#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        float min=arr[i]%i>=1;
        float max=arr[i]%i<=1;
        printf("%d %d",min,max);
    }
}