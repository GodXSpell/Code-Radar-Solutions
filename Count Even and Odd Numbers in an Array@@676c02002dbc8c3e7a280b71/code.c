// Your code here...
#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i<size;i++){

        if((arr[i]%2)==0){
            even += 1;
        } else{
            odd += 1;
        }
    }
    printf("%d %d",even,odd);
}