// Your code here...
#include <stdio.h>
int main(){
    int size,max,min;
    int arr[size];
    for (int i = 0; i< size;i++){
        scanf("%d", &arr[i]);
    }

    for(int i =0;i<size;i++){
        if (arr[i]>arr[i+1]){
            max = arr[i];
        }
        else if (arr[i]<arr[i-1]){
            min = arr[i];
        }
    }
    printf("%d %d", min,max);
}