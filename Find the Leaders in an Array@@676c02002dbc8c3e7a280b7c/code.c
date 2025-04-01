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
        int isLeader = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                isLeader = 0; 
                break;
            }
        }
        if (isLeader) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}