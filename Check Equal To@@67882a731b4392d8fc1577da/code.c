#include <stdio.h>


int main() {
    int a,b;
    char* check;
    scanf("%d %d",&a,&b);
    check = (a==b)?"True":"False";
    printf("%s",check);   
    return 0;
}