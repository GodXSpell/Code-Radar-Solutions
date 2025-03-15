#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}


