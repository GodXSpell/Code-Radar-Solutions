// Your code here...
#include <stdio.h>

int findCandidate(int arr[], int n) {
    int count = 1, candidate = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    return candidate;
}

int isMajority(int arr[], int n, int candidate) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return count > n / 2; // Check if count exceeds N/2
}

int main() {
    int n;

    // Input size of the array
    //printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    //printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find potential candidate
    int candidate = findCandidate(arr, n);

    // Check if the candidate is the majority element
    if (isMajority(arr, n, candidate)) {
        printf("%d\n", candidate);
    } else {
        printf("-1");
    }

    return 0;
}