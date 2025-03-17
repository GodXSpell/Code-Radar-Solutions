// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%[^\n]",&str);
    int count1 = 0, count2 = 0;
    int len = strlen(str);
    // for (int i = 0; i < len; i++){

    // }
    int len = strlen(str); // Compute the length of the string once
    for (int i = 0; i < len; i++) {
        freq[(int)str[i]]++; // Increment the frequency of each character
    }

    return 0; 
}