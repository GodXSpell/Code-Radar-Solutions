// Your code here...
#include <stdio.h>

// Function to check if the array is monotonic
int isMonotonic(int arr[], int size) {
    int isIncreasing = 1, isDecreasing = 1;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isIncreasing = 0; // Not non-decreasing
        }
        if (arr[i] < arr[i + 1]) {
            isDecreasing = 0; // Not non-increasing
        }
    }

    // Return true if either increasing or decreasing
    return isIncreasing || isDecreasing;
}

int main() {
    int n;
    scanf("%d", &n); // Input: Size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input: Elements of the array
    }

    // Check monotonicity
    if (isMonotonic(arr, n)) {
        printf("The array is monotonic.\n");
    } else {
        printf("The array is not monotonic.\n");
    }

    return 0;
}