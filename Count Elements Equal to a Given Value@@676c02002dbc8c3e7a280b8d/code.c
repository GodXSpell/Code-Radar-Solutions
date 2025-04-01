// Your code here...
#include <stdio.h>

int main() {
    int size, k, count = 0;
    
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == k) {
            count++;
        }
    }
    
    // Output the result
    printf("%d", count);
    
    return 0;
}