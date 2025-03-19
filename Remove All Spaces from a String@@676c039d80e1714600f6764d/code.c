// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    // Tokenize the string by spaces
    char *token = strtok(str, " ");

    // Loop through and print each token
    while (token != NULL) {
        printf("%s", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
