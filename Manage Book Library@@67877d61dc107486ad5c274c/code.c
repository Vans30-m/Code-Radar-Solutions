#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    for (int x;x<=N;x++){
        char book,author;
        scanf("%c %c",&book,&author);
        int price;
        scanf("%d",&price);
        int threshold;
        scanf("%d",&threshold);
        if (price>threshold){
            printf("Books above price %0.2f:",threshold);
            printf("Title: %c, Author: %c, Price:%0.2f",book,author,price);
        }
        else{
            printf("HI");
        }
    }
    return 0;
}