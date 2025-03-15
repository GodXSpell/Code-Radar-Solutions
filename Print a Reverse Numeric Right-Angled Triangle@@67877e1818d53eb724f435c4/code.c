
// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = num+1; i > 0 ; i--){
        for (int j = 1; j<i; j++){
            printf("%d ",j);
        }
        if (i > 1) { // Avoid printing a newline after the last row
            printf("\n");
        }
    }
}