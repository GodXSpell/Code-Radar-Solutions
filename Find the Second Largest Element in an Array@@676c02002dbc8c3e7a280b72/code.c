#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int size, largest, secondLargest;

    // Input size of the array
    //printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size < 2) { // Early check for arrays with fewer than 2 elements
        printf("-1\n");
        return 0;
    }

    int arr[size];

    // Input the array elements
    //printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and secondLargest
    largest = INT_MIN;
    secondLargest = INT_MIN;

    // Find largest and second largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update secondLargest before largest
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Check if second largest exists
    if (secondLargest == INT_MIN) {
        printf("-1\n"); // If no second largest element is found
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}