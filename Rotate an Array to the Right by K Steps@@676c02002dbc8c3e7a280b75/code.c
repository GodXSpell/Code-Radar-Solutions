// Your code here...
#include <stdio.h>

int main() {
    int size, rotate;

    scanf("%d",&size);
    int arr[size],arr2[size]; 
    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&rotate);
    
    rotate = rotate%size;

    for(int i = 0;i<size;i++){
        arr2[(i+rotate)%size] = arr[i];
    }
    for(int i = 0; i<size; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}