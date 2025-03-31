// Your code here...#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    char temp[100]; // Temporary array for swapping

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) { // Compare strings
                // Swap arr[j] and arr[j + 1]
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char arr[n][100]; // Array to store strings (each string up to 100 characters)

    // Input the strings
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Sort the strings
    bubbleSort(arr, n);

    // Output the sorted strings
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}