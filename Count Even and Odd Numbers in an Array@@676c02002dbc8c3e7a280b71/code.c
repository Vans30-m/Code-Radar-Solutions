// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int ceven=0;
    int codd=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
            ceven++;
        }
        else{
            codd++;
        }
    }
    printf("%d %d",ceven,codd);
}