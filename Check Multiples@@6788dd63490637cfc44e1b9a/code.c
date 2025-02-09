#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num2 == 0) {
        printf("Nope not fcking possible and they didnt think of this IDIOTS FUCKERS");
    } else if (num1 % num2 == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
