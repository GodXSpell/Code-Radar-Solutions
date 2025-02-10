#include <stdio.h>

int main(){
    int is_prime;
    scanf("%d",&is_prime);
    if (is_prime > 0){
        if (is_prime == 1){
            printf("Not Prime");
        } else if (is_prime == 2){
            printf("Prime");
        } else{
            for (int i=0;i<15;i++){
                if (is_prime % i == 0){
                    printf("Not Prime");
                }else{
                    printf("Prime");
                }
            }
        }
    }
    return 0;
}