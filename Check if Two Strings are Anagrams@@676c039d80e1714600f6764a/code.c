// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int allFound = 1;
    int len1 =  strlen(str1);
    //int len2 =  strlen(str2);
    for (int i = 0; i < len1; i++){
        if (strchr(str2,str1[i]) == NULL){
            all = 0;
            break;
        }
    }
    if (allFound) {
        printf("Yes\n"); // All characters found
    } else {
        printf("No\n"); // At least one character not found
    }
}