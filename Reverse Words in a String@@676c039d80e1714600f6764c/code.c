// Your code here...
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
    scanf("%[^\n]", str); 

    char *token = strtok(str, " "); 

    while (token != NULL) {
        reverseWord(token);         
        printf("%s ", token);       
        token = strtok(NULL, " ");  
    }
    

    return 0;
}