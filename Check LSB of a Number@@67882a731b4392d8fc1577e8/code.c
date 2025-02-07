#include <stdio.h>


int main() {
    int a,b;
    scanf("%d",&a);
    b = a<<31;
    if (b==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    //printf("%s", welcome());
    return 0;
}