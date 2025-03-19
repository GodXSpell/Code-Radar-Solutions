// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int len1 =  strlen(str1);
    int len2 =  strlen(str2);
    for (int i = 0; i < len1; i++){
        char *result = strchr(str2,i)
        if (result == NULL){
            printf("No");
        }else{
            printf("Yes");
        }
    }
}