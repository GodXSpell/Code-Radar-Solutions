#include <stdio.h>

int main() {
    int size;
    int yes = 1; // Assumes the array is sorted initially.
    scanf("%d", &size);
    
    int nums[size]; // Array to store the integers.
    
    // Input the array elements.
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Check if the array is sorted.
    for (int i = 0; i < size - 1; i++) {
        if (nums[i] > nums[i + 1]) { // Comparing adjacent elements.
            yes = 0;
            break;
        }
    }
    
    // Output result.
    if (yes) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    
    return 0;
}