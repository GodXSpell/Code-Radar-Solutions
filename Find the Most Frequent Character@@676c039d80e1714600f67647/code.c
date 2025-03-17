// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%[^\n]",&str);
    int count1 = 0, count2 = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len - 1 ; j++){    
            if(str[i] == str[j+1]){
                count1++;
            }
            // else{
            //     j++;
            // }
        }
    }
    // if (count1>count2)
    printf("%d", count1);
    

    return 0; 
}