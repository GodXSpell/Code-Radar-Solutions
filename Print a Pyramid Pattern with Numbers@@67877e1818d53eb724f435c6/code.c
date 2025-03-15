// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; i++){
        for (int j = 0; j < 2*num-1; j++){
            if(j < num - 1 - i || j > num - 1 + i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}