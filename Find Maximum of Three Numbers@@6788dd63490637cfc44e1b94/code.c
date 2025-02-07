#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Asking for input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum
    int max = num1; // Assume first number is maximum

    if (num2 > max) {
        max = num2; // If second number is greater, update max
    }

    if (num3 > max) {
        max = num3; // If third number is greater, update max
    }

    // Print the maximum number
    printf("%d", max);

    return 0;
}
