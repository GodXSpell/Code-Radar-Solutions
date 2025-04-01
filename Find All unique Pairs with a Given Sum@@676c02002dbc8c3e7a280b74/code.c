#include <stdio.h>

int main() {
    int size, target;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    int pairFound = 0;  // Flag to indicate if at least one pair was found

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((arr[i] + arr[j]) == target) {
                printf("%d %d\n", arr[i], arr[j]);
                pairFound = 1;  // Indicate a valid pair is found
                break;  // Stop searching for pairs with the current `arr[i]`
            }
        }
    }

    if (pairFound == 0) {
        printf("No valid pair found.\n");
    }

    return 0;
}