#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size); 
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); 
    }

    int maxProduct = arr[0] * arr[1]; 

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) { 
            if ((arr[i] * arr[j]) > maxProduct) {
                maxProduct = arr[i] * arr[j];
            }
        }
    }

    printf("%d\n", maxProduct); 
    return 0;
}