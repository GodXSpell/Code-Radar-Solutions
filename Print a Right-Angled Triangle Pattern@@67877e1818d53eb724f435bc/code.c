// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= num ; i++){
        for (int j = 0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
}