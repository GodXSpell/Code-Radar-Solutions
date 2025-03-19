// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], letter;
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        if (str[i] == letter){
            count++;
        }
    }
    printf("%d",count);
}
