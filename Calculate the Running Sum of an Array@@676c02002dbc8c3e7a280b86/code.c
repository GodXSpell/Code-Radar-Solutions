// Your code here...
#include <stdio.h>
int main(){
    int size;
    int sum = 0;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
        printf("%d ",sum);
    }


}