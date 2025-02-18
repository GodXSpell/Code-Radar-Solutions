// Your code here...
#include <stdio.h>
int main(){
    int num,shift,s;
    scanf("%d %d",&num,&shift);
    s = (num>>shift)&1;
    printf("%d",s);
    return 0;
}