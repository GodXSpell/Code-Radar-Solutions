// Your code here...
#include <stdio.h>
int main() {
    int size,target;
    int count = 0;
    scanf("%d %d", &size,&target);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]>target){
            count+=1
        }
    }
    printf("%d", count);
}