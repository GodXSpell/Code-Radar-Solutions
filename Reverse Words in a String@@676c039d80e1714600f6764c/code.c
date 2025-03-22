#include <stdio.h>
#include <string.h>

// Function to reverse a single word
void reverseWord(char word[]) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    scanf("%[^\n]", str); // Input the string including leading/trailing spaces

    int i = 0;

    // Print leading spaces (if any)
    while (str[i] == ' ') {
        printf(" ");
        i++;
    }

    // Start processing the string from the first non-space character
    char *token = strtok(str + i, " "); // Skip the leading spaces and tokenize

    int isFirstWord = 1; // Flag to check if it's the first word
    while (token != NULL) {
        reverseWord(token); // Reverse the current word

        if (!isFirstWord) {
            printf(" "); // Add a space before subsequent words
        }
        printf("%s", token); // Print the reversed word
        isFirstWord = 0; // Mark that the first word has been processed

        token = strtok(NULL, " "); // Move to the next token
    }

    // Print trailing spaces (if any in the original input)
    i += strlen(str + i); // Move to the end of the processed part
    while (str[i] == ' ') {
        printf(" ");
        i++;
    }

    printf("\n"); // Add a newline at the end
    return 0;
}