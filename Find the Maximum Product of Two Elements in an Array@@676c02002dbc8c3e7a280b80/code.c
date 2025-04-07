#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size); // Input: Array size

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); // Input: Array elements
    }

    int maxProduct = arr[0] * arr[1]; // Initialize with the product of the first two elements

    // Loop through the array to find the maximum product
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) { // Ensure pairs are not the same element
            if ((arr[i] * arr[j]) > maxProduct) {
                maxProduct = arr[i] * arr[j];
            }
        }
    }

    printf("%d\n", maxProduct); // Output: Maximum product
    return 0;
}