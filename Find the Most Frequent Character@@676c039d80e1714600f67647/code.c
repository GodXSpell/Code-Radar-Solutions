// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%[^\n]",&str);
    int count1 = 0, count2 = 0;
    int len = strlen(str);
    // for (int i = 0; i < len; i++){

    // }
    for (int i = 0; i < strlen(str); i++) {
        freq[(int)str[i]]++;
    }
    return 0; 
}