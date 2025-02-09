#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Equal");
    } else if (num1 > num2) {
        printf("First");
    } else {
        printf("Second");
    }

    return 0;
}
