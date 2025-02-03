#include <stdio.h>

int main() {
    int a,b;
    char* r;
    scanf("%d %d",&a,&b);
    r = (a>0 || b>0)?"True":"False";
    printf("%s", r);
    return 0;
}