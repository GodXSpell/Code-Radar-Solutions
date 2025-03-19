// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100], target, change;
    scanf("%s",&str);
    scanf("%c",&target);
    scanf("%c",&change);
    int len = strlen(str);
    //char res = strchr(str, target);
    //int idx = result - str;
    for (int i = 0; i < len; i++){
        if (str[i] == str[target]){
            str[i] = str[change];
        }
    }
    printf("%s", str);

}