#include <stdio.h>

int main() {
    char str[1000];
    char mostFrequent = '\0';
    int maxFreq = 0;

    // Read input string including spaces
    scanf("%[^\n]", str);

    // Outer loop to pick each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') continue; // Ignore spaces
        
        int count = 0;

        // Inner loop to count occurrences of str[i]
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        // Update mostFrequent character
        if (count > maxFreq || (count == maxFreq && str[i] < mostFrequent)) {
            maxFreq = count;
            mostFrequent = str[i];
        }
    }

    printf("%c\n", mostFrequent);

    return 0;
}