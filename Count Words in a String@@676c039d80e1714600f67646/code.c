// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count = 0;
    char *token = strtok(str," ");

    while (token != NULL){
        count++;
        token = strtok(str," ");    
    }
    printf("%d", count);
   return 0; 
}