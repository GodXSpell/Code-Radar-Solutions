// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    char alpha = 'A'+num;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < i; j++){
            printf("%c",alpha);
        }
        printf("\n");
    }
}