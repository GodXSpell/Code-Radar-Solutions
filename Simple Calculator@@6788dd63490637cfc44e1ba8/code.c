#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &operator); 

    // Perform the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf(" %.2lf\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf\n", result);
    } else if (operator == '/') {
        if (num2 != 0) { // Check for division by zero
            result = num1 / num2;
            printf("%.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
