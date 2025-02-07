#include <stdio.h>
#include <limits.h>  // For INT_MAX to get the maximum integer value

int main() {
    int a;
    scanf("%d", &a);

    // Shift right by 31 bits to move the MSB to the least significant position
    int msb = a >> 31;

    if (msb & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    //printf("%s", welcome());
    return 0;
}
