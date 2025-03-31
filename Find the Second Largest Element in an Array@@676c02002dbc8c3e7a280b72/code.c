// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = arr[max]; i<size-1 ; i--){
        arr[i] = arr[i+1];
    }
    size--;
    for (int i = 0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d", max);
}