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
        int remainder=arr[i]%10;
        int reversed=(reversed*10)+remainder;
        arr[i] /= 10;
        found=1;
        if(arr[i]=reversed){
            printf("YES");
        }
    }
    if (!found){
        printf("NO");
    }
}