#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str); // Read the input string including spaces

    char *token = strtok(str, " "); // Tokenize the string using space as the delimiter
    while (token!=NULL){
        printf("%s", token);
        token = (NULL," ");
    }
    return 0;
}
