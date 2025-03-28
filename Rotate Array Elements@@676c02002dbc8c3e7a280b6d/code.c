#include <stdio.h>

int main() {
    int size, rotate;
    int arr[size]; 

    scanf("%d",&size);
    for(int i = 0; i<size; i++){
        scanf("%d",&arr);
    }
    scanf("%d",&rotate);

    int tempArrVal = arr[size-1];
    for (int i = 0; i<rotate; i++){
        for (int j = size; j>0; j--){
            arr[j] = arr[j-1];    
        }    
        arr[i] = tempArrVal;
    }
    for(int i = 0; i<size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}