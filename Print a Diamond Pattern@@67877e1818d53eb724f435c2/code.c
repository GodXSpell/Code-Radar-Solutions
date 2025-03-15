// Your code here...
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 2*num-i; j++) {
            if(abs(num-1-j)>i){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n"); 
    }
    return 0;
}