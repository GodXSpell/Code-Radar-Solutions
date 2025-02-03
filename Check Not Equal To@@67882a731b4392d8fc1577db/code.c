#include <stdio.h>

int main() {
    int a,b;
    char* result;
    scanf("%d %d",&a,&b);
    result = (a!=b)?"True":"False";
    printf("%s", result);
    return 0;
}