#include <stdio.h>



int main() {
    char str;
    scanf("%",&str);
    int a;
    scanf("%d",&a);
    if(str>='a' && str<='z'){
        if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }   
    else if (a==0 || a==1 || a==2 || a==3 || a==4 || a==5 || a==9 || a==6 || a==7 || a==8){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}