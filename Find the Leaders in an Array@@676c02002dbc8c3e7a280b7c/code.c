// Your code here...
#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) {
        int isLeader = 1; // Flag to check if arr[i] is a leader
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                isLeader = 0; // If any element to the right is greater, it's not a leader
                break;
            }
        }
        if (isLeader) {
            printf("%d", arr[i]);
        }
    }

    return 0;
}