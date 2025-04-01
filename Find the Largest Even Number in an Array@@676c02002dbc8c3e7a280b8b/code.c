#include <stdio.h>
#include <limits.h>
int main() {
    int size; 
    scanf("%d", &size);
    int arr[size];
    int max = INT_MIN; 
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }
    printf("%d", max);
}