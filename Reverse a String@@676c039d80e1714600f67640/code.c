// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", &str);
    int str_len = strlen(str);

    for (int i = 0; i < str_len / 2; i++){
        int temp = str[i];
        str[i] = str[str_len-1-i];
        str[str_len-1-i] = temp;
    }
    printf("%s", str);
}