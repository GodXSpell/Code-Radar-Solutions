#include <stdio.h>

int main() {
    int age, is_citizen;

    // Input age and citizenship status
    scanf("%d", &age);
    scanf("%d", &is_citizen);

    // Check voting eligibility
    if (age >= 18 && is_citizen == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
