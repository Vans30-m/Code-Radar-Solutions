#include <stdio.h>



int main() {
    char str;
    scanf("%c",&str);
    if(str>='a' && str<='z'){
        if (str=='a' || str=='e' || str=='i' || str=='o' || str=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }   
    else if (str=='0' || str=='1' || str=='2' || str=='3' || str=='4' || str=='5' || str=='9' || str=='6' || str=='7' || str=='8'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}