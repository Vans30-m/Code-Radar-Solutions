// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]>=(i/2)){
            printf("%d",arr[i]);
            
        }
        else{
            printf("-1");
            break;
        }
    }
}
