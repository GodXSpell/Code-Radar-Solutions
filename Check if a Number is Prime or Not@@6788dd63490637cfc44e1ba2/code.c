#include <stdio.h>

int main(){
    int is_prime;
    scanf("%d",&is_prime);
    if (is_prime > 0){
        if (is_prime == 1){
            printf("Not Prime");
        } else if (is_prime == 2){
            printf("Prime");
        }
        else if (is_prime % 2 != 0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}