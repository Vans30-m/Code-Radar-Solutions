#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    for (int x=1;x<=N;x++){
        char book[100];
        scanf("%s",&book);
        char author[100];
        scanf("%s",&author);
        float price;
        scanf("%0.2f",&price);
        int threshold;
        scanf("%d",&threshold);
        // if (price>threshold){
        //     printf("Books above price %0.2f:\n",threshold);
        //     printf("Title: %s, Author: %s, Price:%0.2f\n",book,author,price);
        // }
        // else{
        //     printf("HI");
        // }
    }
    if(price>threshold){
        printf("hi");
    }
    else{
        printf("ji");
    }
    return 0;
}