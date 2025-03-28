// Your code here...
#include <stdio.h>

int main(){
    int size,nums;
    int yes = 1;
    scanf("%d",&size);
    for(int i = 0;i<size;i++){
        scanf("%d ",&nums);
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (!(i < j+1)){
                yes = 0;
            }
        }
    }
    if(yes){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    
}