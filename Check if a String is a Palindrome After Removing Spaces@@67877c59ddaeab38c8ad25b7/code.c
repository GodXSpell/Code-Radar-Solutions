#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[], int length) {
    int left = 0, right = length - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}

int main() {
    char str[100], noSpaces[100];
    int index = 0;

    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            noSpaces[index++] = str[i];
        }
    }
    noSpaces[index] = '\0'; 
    
    if (isPalindrome(noSpaces, index)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}