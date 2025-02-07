#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int a_sq = a * a;
    int b_sq = b * b;
    int c_sq = c * c;

    if (c_sq == (a_sq + b_sq)) {
        printf("Valid");
    } else {
        printf("Not Valid");
    }
    return 0;
}
