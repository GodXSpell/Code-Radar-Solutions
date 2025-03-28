#include <stdio.h>

int main() {
    int size, rotate;
    int arr[size],arr2[size]; 

    scanf("%d",&size);
    for(int i = 0; i<size; i++){
        scanf("%d",&arr);
    }
    scanf("%d",&rotate);
    
    rotate = rotate%size;

    for(int i = 0;i<size;i++){
        arr2[(i+rotate)%size] = arr[i];
    }
    for(int i = 0; i<size; i++){
        printf("%d\n", arr2[i]);
    }
    return 0;
}