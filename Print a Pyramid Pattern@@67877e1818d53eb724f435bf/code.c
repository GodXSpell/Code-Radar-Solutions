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
    for (int i = 1; i<num+1;i++){
        for (int j = 1; j<num+1;j++){
            if((i+j)<num){
                printf("|");
            }
            else {
                printf("*");
            }    
        }
        printf("\n");
    }
}