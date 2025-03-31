// Your code here...
#include <stdio.h>

int main() {
    int size;

    // Read the size of the array
    //printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size], freq[size];

    // Read the array elements
    //printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Find frequencies
    for (int i = 0; i < size; i++) {
        int count = 1; // Count the current element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment count for duplicates
                freq[j] = 0; // Mark duplicates
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency if not marked as duplicate
        }
    }

    // Print frequencies
    //printf("Element | Frequency\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) { // Print only unique elements
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}