// // Your code here...
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     //char words[10][20]; // Array to store up to 10 words, each with a maximum length of 20
//     int count = 0;

//     scanf("%[^\n]", str); // Read the input string including spaces

//     char *token = strtok(str, " "); // Tokenize the string using spaces
//     while (token != NULL) {
//         strcpy(words[count], token); // Copy each token into the array
//         count++;
//         token = strtok(NULL, " "); // Move to the next token
//     }

//     // Find the shortest word
//     int minLength = strlen(words[0]); // Initialize with the length of the first word
//     char shortest[20]; // To store the shortest word
//     strcpy(shortest, words[0]); // Assume the first word is the shortest initially

//     for (int i = 1; i < count; i++) { // Start from the second word
//         if (strlen(words[i]) < minLength) {
//             minLength = strlen(words[i]);
//             strcpy(shortest, words[i]); // Update the shortest word
//         }
//     }

//     printf("Shortest word: %s\n", shortest); // Print the shortest word

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]", str); // Read the input string

    int start = 0, end = 0, minLength = 100, wordStart = 0, windowSize = 0; // Window pointers and size tracking
    int len = strlen(str); // Length of the string

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') { // Word boundary: space or end of string
            end = i; // Mark the end of the word
            int wordLength = end - start; // Calculate the current word length

            if (wordLength < minLength) { // Check if this word is the shortest
                minLength = wordLength; // Update minimum length
                wordStart = start; // Store the starting index of the shortest word
                windowSize = wordLength; // Update the window size
            }

            start = i + 1; // Move the start pointer to the next word
        }
    }

    // Print the window (shortest word)
    for (int i = 0; i < windowSize; i++) {
        printf("%c", str[wordStart + i]);
    }
    printf("\n");

    return 0;
}