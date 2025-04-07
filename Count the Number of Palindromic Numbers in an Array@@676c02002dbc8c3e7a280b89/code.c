// Your code here...
#include <stdio.h>

// Function to check if a number is palindromic
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    // Reverse the number
    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Add last digit to reversed
        num /= 10;                            // Remove last digit
    }

    // Check if the original number is equal to the reversed number
    return original == reversed;
}

int main() {
    int n, count = 0;

    // Input: Size of the array
    scanf("%d", &n);

    int arr[n];

    // Input: Elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the palindromic numbers
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    // Output the count of palindromic numbers
    printf("%d\n", count);

    return 0;
}