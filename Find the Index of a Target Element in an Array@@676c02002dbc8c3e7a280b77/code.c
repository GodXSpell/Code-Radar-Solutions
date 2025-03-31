// Your code here...
#include <stdio.h>

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the first occurrence
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int n, target;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &target);

    // Find the index of the target element
    int result = findIndex(arr, n, target);

    // Output the result
    if (result != -1) {
        printf("%d", result);
    } else {
        printf("-1");
    }

    return 0;
}