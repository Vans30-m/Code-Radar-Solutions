// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int remainder=arr[i]%10;
        int reversed=(reversed*10)+remainder;
        arr[i] /= 10;
        printf("YES");
    }
    if (!found){
        printf("NO");
    }
}