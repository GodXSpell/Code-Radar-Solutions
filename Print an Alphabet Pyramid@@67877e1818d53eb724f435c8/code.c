// Your code here...
#include <stdio.h>

int main() {
    int num,k=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",k);
            k++;
        }printf("\n");
    }
    return 0;
}