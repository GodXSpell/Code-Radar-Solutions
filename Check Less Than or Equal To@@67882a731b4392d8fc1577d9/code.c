#include <stdio.h>

int main() {
    int a,b;
    char* res;
    scanf("%d %d",&a,&b);
    res = (a<=b)?"True":"False";
    printf("%s", res);
    return 0;
}