#include <stdio.h>
#include <limits.h>  

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int max = INT_MIN;  
    int foundEven = 0;  

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {  
            foundEven = 1;  
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }

    if (foundEven == 0) {
        printf("-1");
    } else {
        printf("%d", max);
    }

    return 0;
}