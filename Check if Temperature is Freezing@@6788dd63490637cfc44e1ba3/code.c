#include <stdio.h>

int main() {
    int num1;
    scanf("%d", &num1);

    // Check if the temperature is freezing or above freezing
    if (num1 <= 0) {
        printf("Freezing"); // Added newline for readability
    } else {
        printf("Above Freezing"); // Added newline for readability
    }

    return 0;
}
