// Your code here...
#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int size;
    scanf("%d", &size);

    if (size < 2) {
        printf("-1\n"); // For single element in the array
        return 0;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = abs(arr[1] - arr[0]);
    int first = arr[0], second = arr[1];

    // Nested loop to calculate the difference
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Only check pairs (i, j) where j > i
            int diff = abs(arr[i] - arr[j]);
            if (diff < minDiff) {
                minDiff = diff;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    // Print the pair in ascending order
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }
    printf("%d %d\n", first, second);

    return 0;
}