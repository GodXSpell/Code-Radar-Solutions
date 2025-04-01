// Your code here...
#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int size;
    scanf("%d", &size);

    if (size < 2) {
        printf("-1\n"); 
        return 0;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = abs(arr[1] - arr[0]);
    int first = arr[0], second = arr[1];

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { 
            int diff = abs(arr[i] - arr[j]);
            if (diff < minDiff) {
                minDiff = diff;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }
    printf("%d %d", first, second);

    return 0;
}