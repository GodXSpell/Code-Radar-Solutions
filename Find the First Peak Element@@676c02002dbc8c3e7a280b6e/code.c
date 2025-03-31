// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<size;i++){
        if(i == 0){
            if(arr[i]>arr[i+1]){
                printf("%d", arr[i]);
                break;
            } 
        } else if (i == size-1){
            if(arr[i]>arr[i-1]){
                printf("%d", arr[i]);
                break;
            }
        } 
        else if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            printf("%d", arr[i]);
            break;
        }
    }
    
    printf("-1");
    return 0;
    
}