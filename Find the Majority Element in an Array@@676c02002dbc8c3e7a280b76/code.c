// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for (int i=0;i<n;i++){
        if (arr[i]>=(i/2)){
            printf("%d",arr[i]);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
}
