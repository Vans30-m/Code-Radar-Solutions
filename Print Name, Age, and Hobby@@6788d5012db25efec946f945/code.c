#include <stdio.h>



int main() {
    char str[100];
    scanf("%c",&str);
    printf("Name: %[^\n]%*c\n",str);

    int age;
    scanf("%d",&age);
    printf("Age: %d\n",age);

    char s[100];
    scanf("%c",&s);
    printf("Hobby: %[^\n]%*c",s);
    return 0;
}