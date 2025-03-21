// Your code here...
#include <stdio.h>

int main() {
    int num,a=1,b=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("%d ",a);
            }else{
                printf("%d ",b);
            }
        }
        printf("\n");
    }
    return 0;
}