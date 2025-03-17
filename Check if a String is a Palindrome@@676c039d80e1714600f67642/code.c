// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], rev[100];    
    scanf("%s", &name);
    int len = strlen(name),j=0;

    for (int i = len-1; i >= 0 ; i--) {
        rev[j] = name[i];
        j++;
    }
    rev[j] ='\0';

    for (int i = 0; i< len ; i++ ){

        if (rev[i] != name [i]){
            printf("No");
            break;
        }   
        
    }
    printf("Yes");
    return 0;
}