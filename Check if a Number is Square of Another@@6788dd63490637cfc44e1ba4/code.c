#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Check if the first number is the square of the second number
    if (num1 == num2 * num2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
