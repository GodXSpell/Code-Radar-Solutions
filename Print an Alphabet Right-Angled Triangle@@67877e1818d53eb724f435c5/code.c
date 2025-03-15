// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; i++){
        char alpha = 'A'+i;
        for (int j = 0; j <= i; j++){
            printf("%c",alpha);
        }
        printf("\n");
    }
}