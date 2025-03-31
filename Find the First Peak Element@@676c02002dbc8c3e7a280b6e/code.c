// Your code here...
#include <stdio.h>
int main(){
    int size, f = 0;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<size;i++){
        if(i == 0){
            if(arr[i]>arr[i+1]){
                printf("%d", arr[i]);
                f =1;
                break;
            } 
        } else if (i == size-1){
            if(arr[i]>arr[i-1]){
                printf("%d", arr[i]);
                f =1;
                break;
            }
        } 
        else if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            printf("%d", arr[i]);
            f =1;
            break;
        }
    }
    if(!f){
        printf("-1");
    }
    return 0;
    
}