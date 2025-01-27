#include <stdio.h>

int main() {
    char n[100];
    int age;
    char h[100];
    scanf("%s %d\n%s",&n,&age,&h);
    printf("Name: %s\nAge: %d\nHobby: %s", n,age,h);
    return 0;
}