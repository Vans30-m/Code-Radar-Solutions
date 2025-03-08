// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int remainder[n];
    int reversed[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    for(int i=0;i<n;i++){
        int remainder[i]=arr[i]%10;
        int reversed[i]=(reversed[i]*10)+remainder[i];
        arr[i] /= 10;
        found=1;
        if(arr[i]==reversed[i]){
            printf("YES");
        }
    }
    if (!found){
        printf("NO");
    }
}