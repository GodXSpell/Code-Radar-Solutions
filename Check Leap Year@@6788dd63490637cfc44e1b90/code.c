#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    //printf("%s", welcome());
    return 0;
}