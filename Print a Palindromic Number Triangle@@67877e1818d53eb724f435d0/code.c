// Your code here...
#include <stdio.h>
void printPalindromeTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printPalindromeTriangle(n);
    return 0;
}
