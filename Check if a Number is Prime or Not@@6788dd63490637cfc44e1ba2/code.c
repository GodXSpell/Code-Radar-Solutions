#include <stdio.h>
#include <math.h>

int main() {
    int is_prime, i, flag = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &is_prime);

    if (is_prime <= 1) {
        printf("Not Prime\n");
    } else if (is_prime == 2) {
        printf("Prime\n");
    } else {
        // Check for factors other than 1 and the number itself
        for (i = 2; i <= sqrt(is_prime); i++) {
            if (is_prime % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
