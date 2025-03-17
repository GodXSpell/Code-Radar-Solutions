// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], rev[100];    
    scanf("%s", &name);
    int len = strlen(name);

    for (int i = len; i >= 0 ; i--) {
        rev = name[i];
    }

    if (rev[i] == name [i]){
        printf("Yes");
    }else{
        printf("No")
    }
    return 0;
}