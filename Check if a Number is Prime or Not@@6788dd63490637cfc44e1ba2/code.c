#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;

    // Input the number
    scanf("%d", &number);

    // Check if the number is prime using the is_prime function
    if (is_prime(number)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
