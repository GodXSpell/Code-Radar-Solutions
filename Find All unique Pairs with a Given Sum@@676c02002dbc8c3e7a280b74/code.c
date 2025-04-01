// Your code here...
#include <stdio.h>
int main(){
    int size,target;
    scanf("%d %d",&size,&target);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<size;i++){
        for(int j = 0;j<size;j++){
            if((arr[i]+arr[j])==target){
                printf("%d %d",arr[i], arr[j]);
            }
        }
    }

}