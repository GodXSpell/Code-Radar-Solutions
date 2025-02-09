#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
