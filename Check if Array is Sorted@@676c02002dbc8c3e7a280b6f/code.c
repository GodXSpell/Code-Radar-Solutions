// Your code here...
#include <stdio.h>

int main(){
    int size,nums;
    int yes = 1;
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
        scanf("%d ",&nums);
    }

    for(int i=0;i<size-1;i++){
        
        if (i >= j){
            yes = 0;
            break;
        }
        
    }
    if(yes){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
}