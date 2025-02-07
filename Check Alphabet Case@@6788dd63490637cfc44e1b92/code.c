#include <stdio.h>
#include <ctype.h>  // Include the ctype.h library

int main() {
    char ch[100];
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("Uppercase", ch);
    } else {
        printf("Lowercase", ch);
    }

    return 0;
}
