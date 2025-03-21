#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str); // Read the input string including spaces

    char *token = strtok(str, " "); // Tokenize the string using space as the delimiter
    while (token!=NULL){
        printf("%s", token);
        token = strtok(NULL," ");
    }

    len = strlen(token);
    //rev
    for(int i = 0; i < len/2; i++){
        int temp = token[i];
        token[i] = token[len-1-i];
        token[len-1-i] = temp;
    }
    return 0;
}
