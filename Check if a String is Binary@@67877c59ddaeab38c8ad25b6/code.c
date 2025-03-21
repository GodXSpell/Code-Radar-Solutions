// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            //isBinary = 0;
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    //return 0;
}