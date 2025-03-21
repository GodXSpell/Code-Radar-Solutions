// Your code here...
#include <stdio.h>
#include <string.h> // For string manipulation functions

int main() {
    char str[100], repwith;
    scanf("%[^\n]", str);
    fget();
    scanf("%c",&repwith);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = repwith;
        } 
    } 
    printf("%s",str);
    return 0; 
} 