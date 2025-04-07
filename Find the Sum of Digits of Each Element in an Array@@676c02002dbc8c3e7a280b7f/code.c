// Your code here...
#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int n;
    int arr[n], result[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of digits for each element
    for (int i = 0; i < n; i++) {
        result[i] = sumOfDigits(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}