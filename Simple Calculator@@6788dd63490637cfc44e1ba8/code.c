#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    scanf(" %c", &operator); 

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%d", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%d", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%d", result);
    } else if (operator == '/') {
        if (num2 != 0) { // Check for division by zero
            result = num1 / num2;
            printf("%d", result);
        } else {
            printf("error");
        }
    } else {
        printf("error");
    }

    return 0;
}
