// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<size-1;i++){
        if(i == 0){
            if(arr[i]>arr[i+1]){
                printf("%d", arr[i]);
            } 
        } else if (i == size-1){
            if(arr[i]>arr[i-1]){
                printf("%d", arr[i]);
            }
        } 
        else if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            printf("%d", arr[i]);
        } else{
            printf("-1");
        }
    }
}