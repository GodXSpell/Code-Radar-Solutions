// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100], target, change;
    scanf("%s\n", str);
    scanf("%c\n",&target);
    scanf("%c",&change);
    int len = strlen(str);
    //char res = strchr(str, target);
    //int idx = result - str;
    for (int i = 0; i < len; i++){
        if (str[i] == target){
            str[i] = change;
        }
    }
    printf("%s", str);

}