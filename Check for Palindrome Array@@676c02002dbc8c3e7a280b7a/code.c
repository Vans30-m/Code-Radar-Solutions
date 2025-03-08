// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    for(int i=0;i<n;i++){
        int reversed=(reversed*10)+remainder;
        int remainder=arr[i]%10;
        arr[i] /= 10;
        found=1;
        printf("YES");
    }
    if (!found){
        printf("NO");
    }
}