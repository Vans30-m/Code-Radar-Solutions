#include <stdio.h>



int main() {
    char str;
    scanf("%c",&str);

    if(str>='a' && str<='z' || str>='A' && str<='Z'){
        if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u' || str=='A' || str=='E' || str=='I' || str=='O' || str=='U'){
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