// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    // for (int i = num-1; i > 0 ; i--){
    //     for (int j = 0; j<i; j++){
    //         printf("|");
    //     }
    //     printf("*\n");
    // }
    for (int i = 0; i<num;i++){
        for (int j = 0; j<num;j++){
            printf("*");
        }
        printf("\n");
    }
}