#include <stdio.h>
#include <ctype.h>  // Include the ctype.h library

int main() {
    char ch;
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("Uppercase", ch);
    } else if (!isupper(ch)) {
        printf("Lowercase", ch);
    } else{
        printf("Not a alphabet")
    }

    return 0;
}
