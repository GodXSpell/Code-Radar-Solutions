// Your code here...
#include <stdio.h>

int main() {
    int num;
    char a='A';
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i+1;j++){
            printf("%c ",a);
            a++;
        }
        a='A';
        printf("\n");
    }
    return 0;
}