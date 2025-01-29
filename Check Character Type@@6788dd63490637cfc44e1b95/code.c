#include <stdio.h>



int main() {
    char str;
    scanf("%c",&str);

    if(str>='a' && str<='z' ){
        if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }   
    else if (str>='0' && str<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}