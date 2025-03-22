#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For strdup

int main() {
    char str[100];
    scanf("%[^\n]", str); 

    char *token = strtok(str, " "); 
    char *normie; 
    int len, len2;

    while (token != NULL) {
        //printf("%s", token); 

        normie = strdup(token); // Duplicate the current token
        len = strlen(token);    // Length of the token
        len2 = strlen(normie);  // Length of the duplicate

        // Reverse the `token`
        for (int i = 0; i < len / 2; i++) {
            char temp = token[i];
            token[i] = token[len - 1 - i];
            token[len - 1 - i] = temp;
        }

        //Compare the reversed `token` with `normie`
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len2; j++) {
                if (token[i] == normie[j]) {
                    printf("Yes");
                } else {
                    printf("No");
                }
            }
        }
        // printf("\n");

        free(normie); // Free the memory allocated by strdup
        token = strtok(NULL, " "); // Move to the next token
    }

    return 0;
}