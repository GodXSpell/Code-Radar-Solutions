// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100],str1[100];
    scanf("%[^\n]",&str);
    scanf("%[^\n]",&str1);
    strcat(str,str1);
    printf("%s", str);
    
   return 0; 
}