#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 1 && num <= 100) {
        printf("Yo you in");
    } else {
        printf("Yo you are out dude ");
    }

    return 0;
}
