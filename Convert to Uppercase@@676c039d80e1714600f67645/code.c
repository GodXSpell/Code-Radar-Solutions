// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("%s\n", str);
    return 0;
}