#include <stdio.h>
#include <math.h>

// Function to check if a number is prime and print the result
void is_prime(int num) {
    if (num <= 1) {
        printf("%d is not a prime number\n", num);
        return;
    }
    if (num == 2) {
        printf("%d is a prime number\n", num);
        return;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d is not a prime number\n", num);
            return;
        }
    }
    printf("%d is a prime number\n", num);
}

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime using the is_prime function
    is_prime(number);

    return 0;
}
