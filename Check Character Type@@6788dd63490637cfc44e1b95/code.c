#include <stdio.h>
#include <ctype.h>

int main(){
    char smth[100];
    scanf("%c"&smth);
    if(smth = "a" || smth = "e" || smth = "i" || smth = "o" || smth = "u"){
        printf("Vowel");
    }else if(ch >= 'a' && ch <= 'z') {
        printf("Consonant");
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}